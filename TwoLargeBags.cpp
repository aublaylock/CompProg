#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int testCase = 0; testCase < t; testCase++){
        int n; cin >> n;
        // cout << "TEST CASE: " << testCase << endl;

        vector<int> counts(n+1);
        for(int i = 0; i < n; i++){
            int cur; cin >> cur;
            counts[cur]++;
        }

        bool bumped = true;
        while(bumped){
            bumped = false;
            for(int i = counts.size()-2; i >= 0; i--){
                if(counts[i] > 2){
                    counts[i + 1] += counts[i] - 2;
                    counts[i] = 2;
                    bumped = true;
                }
            }
        }

        bool possible = true;
        for(int i = 0; i < counts.size(); i++){
            if(counts[i] % 2 == 1){
                possible = false;
            }
            // cout << counts[i] << " of " << i << endl;
        }
        if(possible){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}