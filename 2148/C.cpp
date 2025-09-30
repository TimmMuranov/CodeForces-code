#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    if(!(std::cin >> t)) return 0;
    while(t--) {
        int n;
        long long m;
        std::cin >> n >> m;
        std::vector<long long> a(n+1);
        std::vector<int> b(n+1);
        for(int i=1; i<=n; ++i){
            std::cin >> a[i] >> b[i];
        }

        long long ans = 0;
        long long prev_t = 0;
        int prev_s = 0;
        for(int i=1; i<=n; ++i){
            long long len = a[i] - prev_t;
            int need_parity = prev_s ^ b[i];
            if(len % 2 == need_parity) ans += len;
            else ans += (len - 1);
            prev_t = a[i];
            prev_s = b[i];
        }
        ans += (m - prev_t);
        std::cout << ans << '\n';
    }
    return 0;
}

