#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int width = 0;
    for(int i = 0; i < n; i++){
        int height;
        cin >> height;
        width += 1 + (height > h);
    }

    cout << width;
    return 0;
}