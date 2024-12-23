#include <iostream>
#include <fstream>

int main() {
    std::string str = "Hello from Xenith lang";
    std::cout << str << std::endl;

    std::ofstream file("sample/main.xh");
    file << str;
    file.close();

    return 0;
}