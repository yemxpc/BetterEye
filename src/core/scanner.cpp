#include "core/scanner.hpp"
#include "utils/logger.hpp"
#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <chrono>

bool Scanner::isportopen(int port){
    int sock = socket(AF_INET,SOCK_STREAM,0);
    if (sock < 0) return sock;

    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    inet_pton(AF_INET,ip.c_str(),&server.sin_addr);

    struct timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = 500000; 
    setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof(tv));
    setsockopt(sock, SOL_SOCKET, SO_SNDTIMEO, (const char*)&tv, sizeof(tv));

    bool status = (connect(sock,(struct sockaddr*)&server,sizeof(server))== 0);
    close(sock);
    return status;
}

void Scanner::scanrange(int startport,int endport){
    std::cout<<"Scan Startted"<<std::endl;

    for(int p = startport ; p<=endport ; p++){
        if(isportopen(p)){
            std::cout<<"[+]PORT: "<<p<<" OPEN"<<std::endl;
        }
    }
}

Scanner::Scanner(std::string targetIp) {
    ip = targetIp;
}