#ifndef SCANNER_HPP
#define SCANNER_HPP

#include <string>
#include <vector>
#include <map>

class Scanner{
    public:
        Scanner(std::string targetip);
        void scanrange(int startport,int endport);
        bool isportopen(int port);
        std::vector<int> openports;
    private:

    std::string ip; 
    int timeout;

    std::map<int,std::string> services;

    void loadservices(std::string filepath);
    std::string getserviceforport(int port);
};

#endif