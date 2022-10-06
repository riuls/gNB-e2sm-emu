//
// Created by Eugenio Moro on 24/06/22.
//
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "proto/e2.pb-c.h"

#include "E2_requests.h"

/* This callback function will be called during the encoding.
 * It will write out any number of FileInfo entries, without consuming unnecessary memory.
 * This is accomplished by fetching the filenames one at a time and encoding them
 * immediately.
 */

void build_dummy_response(E2_REQID_t req_id, int connfd){
    /*
    E2DummyResponse rsp = E2_DUMMY_RESPONSE__INIT;
    rsp.req_id = req_id;
    rsp.mess_string = "ciao";
    rsp.result = 0;
*/
}

void build_send_dummy_response(E2_REQID_t req_id, int connfd){
    // build response
    E2DummyResponse rsp = E2_DUMMY_RESPONSE__INIT;
    rsp.req_id = 100;
    rsp.req_id = req_id;
    //char st[] = "Hi, this is a dummy response!!";
    rsp.mess_string =  "Hi, this is a dummy response!!";
    rsp.result = 1; 

    // encode to buffer
    unsigned buflen = e2_dummy_response__get_packed_size(&rsp);
    void* buf = malloc(buflen);
    e2_dummy_response__pack(&rsp, buf);
    /*
    printf("dummy built and packed to buffer\n");
    E2DummyResponse* decmsg;
    decmsg = e2_dummy_response__unpack(NULL, buflen, buf);
    printf("decoded string %s\n", decmsg->mess_string);
    */
}

/*
void ship_response(pb_msgdesc_t msg_descriptor, void* response, int connfd){
    pb_ostream_t output = pb_ostream_from_socket(connfd);
    if (!pb_encode_delimited(&output, &msg_descriptor, response)) {
        printf("Encoding failed: %s\n", PB_GET_ERROR(&output));
    }
    // printf("Encoded in %lu bytes\n", output.bytes_written);
}
*/

void handle_connection(int connfd) {
/*
    E2_request request = {};
    pb_istream_t input = pb_istream_from_socket(connfd);
    if (!pb_decode_delimited(&input, E2_request_fields, &request)) {
        printf("Decode failed: %s\n", PB_GET_ERROR(&input));
        return;
    }
    printf("Received E2 request id %d\n", request.req_id);
    switch (request.req_id++) {
        case E2_REQID_DUMMY1:{
            E2_dummy_response* rsp = malloc(E2_dummy_response_size);
            build_dummy_response(E2_REQID_DUMMY1,rsp, connfd);
            ship_response(E2_dummy_response_msg,rsp,connfd);
            free(rsp);
            break;
        }
        case E2_REQID_DUMMY2: {
            E2_dummy_response *rsp = malloc(E2_dummy_response_size);
            build_dummy_response(E2_REQID_DUMMY2, rsp, connfd);
            ship_response(E2_dummy_response_msg, rsp, connfd);
            free(rsp);
            break;
        }
        default:
            printf("Unrecognized request id %d\n",request.req_id);
            break;
    }
    */
}

int main(int argc, char **argv) {
    int in_sockfd;
    struct sockaddr_in servaddr,cliaddr;
    int reuse = 1;
    int port = 6655;


    printf("Starting e2server emulator\n");
    /* Listen on localhost:port for UDP connections */

    // create socket
    if((in_sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0){
        perror("Failed to create in socket\n");
        exit(EXIT_FAILURE);
    }
    setsockopt(in_sockfd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse));

    // bind to localhost
    memset(&servaddr, 0, sizeof(servaddr));
    memset(&cliaddr, 0, sizeof(cliaddr));
    
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(port);
    if (bind(in_sockfd, (struct sockaddr *) &servaddr, sizeof(servaddr)) != 0) {
        perror("Failed to bind socket");
        exit(EXIT_FAILURE);
    }
    printf("Waiting for UDP datagrams\n");
    int max_rcv_len = 4096;
    uint8_t recv_buf[max_rcv_len];
    int rcv_len;
    unsigned slen;
    slen = sizeof(cliaddr);
    for(;;){
        rcv_len = recvfrom(in_sockfd, recv_buf, max_rcv_len, 0, (struct sockaddr *) &cliaddr, &slen);
        printf("Received %d bytes\n", rcv_len);
    }
    /*
    for (;;) {
        connfd = accept(listenfd, NULL, NULL);

        if (connfd < 0) {
            perror("accept");
            return 1;
        }
        printf("Got connection.\n");
        //sleep(5);
        handle_connection(connfd);

        printf("Closing connection.\n");

        close(connfd);
    }
    */
    

    return 0;
}