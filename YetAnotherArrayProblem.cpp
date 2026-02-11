#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int testCase = 0; testCase < t; testCase++){
        int n;
        cin >> n;
        
        long long g;
        cin >> g;
        for(int i = 1; i < n; i++){
            long long num;
            cin >> num;
            g = __gcd(g, num);
        }

        long long ans = 2;
        bool found = false;
        while (ans < 1000000000000000000){
            bool is_prime = true;
            for(long long i = 2; i * i <= ans; i++){
                if(ans % i == 0){
                    is_prime = false;
                    break;
                }
            }

            if(is_prime && (g % ans != 0)){
                cout << ans << endl;
                found = true;
                break;
            }

            ans++;
        }
        if(!found)
            cout << -1 << endl;
    }


    return 0;
}