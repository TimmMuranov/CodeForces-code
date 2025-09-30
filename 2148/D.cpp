#include <bits/stdc++.h>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    if(!(std::cin >> t)) return 0;
    while(t--){
        int n;
        std::cin >> n;
        long long sum_even = 0;
        std::vector<long long> odds;
        for(int i=0; i<n; ++i){
            long long x; std::cin >> x;
            if(x % 2 == 0) sum_even += x;
            else odds.push_back(x);
        }
        if(odds.empty()){
            std::cout << 0 << '\n';
            continue;
        }
        std::sort(odds.begin(), odds.end(), std::greater<long long>());
        int take = (odds.size() + 1) / 2;
        long long sum_odds = 0;
        for(int i=0; i<take; ++i) sum_odds += odds[i];
        std::cout << (sum_even + sum_odds) << '\n';
    }
    return 0;
}
