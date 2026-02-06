#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int numUppers = 0;
    for(char c : s){
        if(c < 'a')
            numUppers++;
    }
    bool convertToUppers = (numUppers > s.size()/2);
    for(int i = 0; i < s.size(); i++){
        (convertToUppers) ? s[i] = toupper(s[i]) : s[i] = tolower(s[i]);
    }
    cout << s;
    return 0;
}