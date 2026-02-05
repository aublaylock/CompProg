#include <bits/stdc++.h>
using namespace std;

int recurse(int n, int m, int depth){
    if(n == m)
        return depth;
    else if(n > m / 2)
        return -1;
    else
        return max(recurse(n*3, m, depth+1), recurse(n*2, m, depth+1));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << recurse(n, m, 0);

    return 0;
}