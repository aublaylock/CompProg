#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    string prev;
    cin >> prev;
    for(int i = 1; i < n; i++){
        string cur;
        cin >> cur;
        count += prev != cur;
        prev = cur;
    }
    cout << count + 1;
    return 0;
}