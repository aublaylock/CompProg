#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int luckyCount = 0;
    while(n){
        luckyCount += (n%10 == 4 || n%10 == 7);
        n /= 10;
    }
    bool end = false;
    if(luckyCount == 0){
        cout << "NO";
        end = true;
    }
    while(luckyCount){
        if(luckyCount%10 != 4 && luckyCount%10 != 7){
            cout << "NO";
            end = true;
            break;
        }
        luckyCount /= 10;
    }
    if(!end)
        cout << "YES";

    return 0;
}