#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maximum = 0;
    int numPassengers = 0;
    for(int i = 0; i < n; i++){
        int off, on;
        cin >> off >> on;
        numPassengers = numPassengers - off + on;
        maximum = max(maximum, numPassengers);
    }
    cout << maximum;

    return 0;
}