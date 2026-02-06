#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> n;
    cin >> s;
    int dCount = 0;
    for(char c : s){
        dCount += c == 'D';
    }
    if(dCount*2 > n)
        cout << "Danik";
    else if(dCount*2 < n)
        cout << "Anton";
    else
        cout << "Friendship";
    return 0;
}