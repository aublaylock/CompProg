#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(i == n-1)
            (i % 2 == 0) ? cout << "I hate it" : cout << "I love it";
        else
            (i % 2 == 0) ? cout << "I hate that " : cout << "I love that ";
    }
    return 0;
}