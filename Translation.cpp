#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    bool foundDifference = false;

    if(a.size() != b.size()){
        cout << "NO";
        return 0;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[a.size()-1-i]){
            foundDifference = true;
            break;
        }
    }
    foundDifference ? cout << "NO" : cout << "YES";

    return 0;
}