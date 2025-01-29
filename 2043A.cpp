#include <iostream>

int main(){
    unsigned int iterations;
    std::cin >> iterations;
    unsigned long in;
    for (int x = 0; x < iterations; ++x){
        std::cin >> in;
        if (in > 3){
            std::cout << (in/4) + (in%2) << std::endl;
        } else {
            std::cout << 1 << std::endl;
        }
    }
}