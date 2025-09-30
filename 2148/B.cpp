#include <iostream>
#include <vector>

int main(){
    int t;
    std::cin >> t;
    for(int tt=0; tt<t; ++tt){
        int n, m, x, y;
        std::cin >> n >> m >> x >> y;
        for(int nn = 0; nn<n; ++nn){
            int l;
            std::cin >> l;
        }
        for(int nn = 0; nn<m; ++nn){
            int l;
            std::cin >> l;
        }
        std::cout << n + m << std::endl;
    }
    return 0;
}
