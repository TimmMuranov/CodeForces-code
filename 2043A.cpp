#include <iostream>

int main(){
    unsigned int iterations;
    std::cin >> iterations;
    unsigned long long in;
    unsigned long  long coins = 1;
    for (int x = 0; x < iterations; ++x){
        std::cin >> in;
        while(in>3){
            in /=4;
            coins *= 2;
        }
        std::cout << coins << std::endl;
        coins = 1;
    }
    return 0;
}
