#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++){
        int n;
        string s;
        cin >> n >> s;
        int openCount = 0;
        int errorCount = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == ')'){
                if(openCount > 0)
                    openCount--;
                else
                    errorCount++;
            }
            else{
                openCount++;
            }
        }
        cout << errorCount << endl;
    }

    return 0;
}