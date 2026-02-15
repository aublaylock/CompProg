#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int testCase = 0; testCase < t; testCase++){
        int n;
        cin >> n;

        bool found = false;
        long long prev;
        cin >> prev;
        for(int i = 1; i < n; i++){
            long long cur;
            cin >> cur;
            if(2*min(prev, cur) > max(prev, cur)){
                found = true;
            }
            prev = cur;
        }
        if(found)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}