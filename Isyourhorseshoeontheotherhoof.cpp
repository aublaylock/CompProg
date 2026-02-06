#include <bits/stdc++.h>
using namespace std;

int main() {
    int col1, col2, col3, col4;
    cin >> col1 >> col2 >> col3 >> col4;
    cout << 4 - (1 + (col1 != col2) + (col3 != col2 && col3 != col1) + (col4 != col3 && col4 != col2 && col4 != col1));
    return 0;
}