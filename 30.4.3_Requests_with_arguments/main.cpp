#include <iostream>
#include <string>
#include <vector>
#include <cpr/cpr.h>

int main() {
    std::string command;
    std::string name, value;
    std::vector<cpr::Pair> vec;

    while (command != "exit") {
        std::cin >> name, value;
        vec.push_back(cpr::Pair((std::string)name, (std::string)value));
        if (command == "get") {
            cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/get"),
                                        cpr::Header(name.c_str(), value.c_str()));
            std::cout << r.text << std::endl;
        }
        else if (command == "post") {
            cpr::Response r = cpr::Post(cpr::Url("https://httpbin.org/post"),
                                        cpr::Payload({{"name", name.c_str()},
                                                      {"value", value.c_str()}}));
            std::cout << r.text << std::endl;
        }
        else std::cout << "Try again" << std::endl;
    }
}
