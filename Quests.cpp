#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;

        vector<int> xp1;
        vector<int> xp2;

        int temp;
        for(int j = 0; j < n; j++){
            cin >> temp;
            xp1.push_back(temp);
        }
        for(int j = 0; j < n; j++){
            cin >> temp;
            xp2.push_back(temp);
        }

        int maximumTotal = 0;
        int maxRepeat = 0;
        int pointsFromxp1 = 0;
        for(int j = 0; j < n && j < k; j++){
            pointsFromxp1 += xp1[j];
            maxRepeat = max(maxRepeat, xp2[j]);
            maximumTotal = max(maximumTotal, pointsFromxp1 + maxRepeat * (k-j-1));
        }
        cout << maximumTotal << endl;
    }



    return 0;
}