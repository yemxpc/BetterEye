#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <iostream>

class Logger {
public:
    // Statik fonksiyonlar sayesinde nesne oluşturmadan çağrılabilir
    static void info(const std::string& message) {
        std::cout << "[INFO] " << message << std::endl;
    }

    static void success(const std::string& message) {
        std::cout << "\033[32m[+] " << message << "\033[0m" << std::endl;
    }

    static void error(const std::string& message) {
        std::cerr << "\033[31m[-] ERROR: " << message << "\033[0m" << std::endl;
    }
};

#endif