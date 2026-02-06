#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool found = false;
    for(int i = 0; i <= (int)(s.size())-7; i++){
        if(s[i] == s[i+1] && s[i+1] == s[i+2] && s[i+2] == s[i+3] && s[i+3] == s[i+4] && s[i+4] == s[i+5] && s[i+5] == s[i+6]){
            found = true;
            break;
        }
    }
    (found) ? cout << "YES" : cout << "NO";
    return 0;
}