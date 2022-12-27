#include "demo.h"


int main() {
    int size;
    std::string data;
    std::cin >> size;
    std::cin >> data;
    std::cout << FuzzMe((const uint8_t*)data.data(), size) << std::endl;
}