#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int out[n];
    for(int i = 0; i < n; i++){
        int giftee;
        cin >> giftee;
        out[giftee-1] = i+1;
    }
    for(int i = 0; i < n; i++){
        cout << out[i] << ' ';
    }
    return 0;
}