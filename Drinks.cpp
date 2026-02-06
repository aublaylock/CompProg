#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    double sum = 0;
    for(int i = 0; i < n; i++){
        int cur;
        cin >> cur;
        sum += cur;
    }
    cout << sum/n;

    return 0;
}