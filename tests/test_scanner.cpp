
#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <chrono>

int main(){
    std::string ip = "127.0.0.1"; //this is for example
    int port;
    int sock = socket(AF_INET,SOCK_STREAM,0);
    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    inet_pton(AF_INET,ip.c_str(),&server.sin_addr);

    for(port=1;port<=60000;port++){
        bool status = (connect(sock,(struct sockaddr*)&server,sizeof(server))== 0);
        close(sock);
        return status;
    }
}