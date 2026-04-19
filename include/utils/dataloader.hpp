#ifndef DATALOADER_HPP
#define DATALOADER_HPP

#include <vector>
#include <string>
#include <filesystem>
#include <fstream>
#include <map>

class dataloader{
    private:
        std::map<int, std::string> servicemap;
        public:
   
    bool loadServices(const std::string& filename);
    
    
    std::string getServiceName(int port);

};

#endif