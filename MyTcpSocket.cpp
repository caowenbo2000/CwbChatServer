//
// Created by cwb on 2020/3/6.
//

#include "MyTcpSocket.h"



//
//#include <stdio.h>
//#include <sys/socket.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <netinet/in.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//#include <sys/socket.h>
//#include <arpa/inet.h>
//
//
//
//#define SERVER_PORT 20000 // define the defualt connect port id
//#define LENGTH_OF_LISTEN_QUEUE 10 //length of listen queue in server
//#define BUFFER_SIZE 255
//#define WELCOME_MESSAGE "welcome to connect the server. "
//
//int main(int argc, char **argv)
//{
//    printf("fuck\n");
//    int i_servfd, i_clifd;
//    struct sockaddr_in servaddr,cliaddr;
//    if ( ( i_servfd = socket( AF_INET, SOCK_STREAM, 0 ) ) < 0 )
//    {
//        printf( "%s", "create socket error!\n" );
//        exit(1);
//    }
//    bzero( &servaddr, sizeof( servaddr ) );
//    servaddr.sin_family = AF_INET;
//    servaddr.sin_port = htons( SERVER_PORT );
//    servaddr.sin_addr.s_addr = htons( INADDR_ANY );
//    if ( bind( i_servfd,( struct sockaddr * )&servaddr, sizeof( servaddr ) ) < 0 )
//    {
//        printf( "bind to port %d failure!\n", SERVER_PORT );
//        exit(1);
//    }
//    if ( listen( i_servfd, LENGTH_OF_LISTEN_QUEUE ) < 0 )
//    {
//        printf( "%s", "call listen failure!\n" );
//        exit(1);
//    }
//    while (1)
//    {
//        //server loop will nerver exit unless any body kill the process
//        char psz_buf[BUFFER_SIZE];
//        time_t time_curr;
//        socklen_t socklen_cliaddr = sizeof( cliaddr );
//        i_clifd = accept( i_servfd, ( struct sockaddr * )&cliaddr, &socklen_cliaddr );
//        if ( i_clifd < 0 )
//        {
//            printf( "%s", "error comes when call accept!\n" );
//            break;
//        }
//        strcpy( psz_buf, WELCOME_MESSAGE );
//        //inet_ntop(INET_ADDRSTRLEN,cliaddr.sin_addr,psz_buf,BUFFER_SIZE);
//
//        printf( "from client,IP:%s,Port:%d\n",
//                inet_ntoa(cliaddr.sin_addr), ntohs( cliaddr.sin_port ) );
//        time_curr = time(NULL);
//        strcat( psz_buf, "time_curr in server:" );
//        strcat( psz_buf, ctime( &time_curr ) );
//        send( i_clifd, psz_buf, BUFFER_SIZE, 0 );
//        close( i_clifd );
//    }//exit
//    close( i_servfd );
//    return 0;
//}