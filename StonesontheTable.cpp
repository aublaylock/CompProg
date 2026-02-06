#include <bits/stdc++.h>
using namespace std;

int main() {
    int length;
    string s;
    cin >> length >> s;
    int count = 0;
    for(int i = 1; i < length; i++){
        char previous = s[i-1];
        count += (previous == s[i]);
    }
    cout << count;
    return 0;
}