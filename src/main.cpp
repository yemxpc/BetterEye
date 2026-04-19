#include "core/scanner.hpp"
#include <iostream>
#include <string>

void printBanner() {
   
    std::cout << "\033[36m"; 
    std::cout << R"(
            /\
           /  \
      .---<    >---.
      |   _\  /_   |
    _,',_|  \/  |_,',_
_.-'     '-./\.-'     '-._
 '-._   _.-'\/'-._   _.-'
     `,` |__/\__| `,`
      |    /  \    |
      '---<    >---'
           \  /
            \/
    )" << std::endl;
    std::cout << "      [ Better-Eyes v1.0 ]" << std::endl;
    std::cout << "   The Eye To Se Much Better" << std::endl;
    std::cout << "\033[0m" << std::endl; 
}

int main(){
    printBanner();

    std::string targetip;
    int startport;
    int endport;

    std::cout<<"[?]Enter Target IP"<<std::endl;
    std::cin>>targetip;

    std::cout<<"[?]Enter Start Port"<<std::endl;
    std::cin>>startport;

    std::cout<<"[?]Enter Stop Port"<<std::endl;
    std::cin>>endport;

    Scanner scan(targetip);
    scan.scanrange(startport,endport);

    return 0;
}