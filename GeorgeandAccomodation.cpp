#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++){
        int ppl, capacity;
        cin >> ppl >> capacity;
        count += (capacity - ppl) >= 2;
    }
    cout << count;
    return 0;
}