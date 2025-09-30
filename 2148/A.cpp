#include <iostream>

int main(){
    int t;
    std::cin >> t;
    for (int tt=0; tt<t; ++tt){
        int x, n;
        std::cin >> x >> n;
        if (n%2){
            std::cout << x << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }
    return 0;
}
