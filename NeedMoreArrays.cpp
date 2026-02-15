#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int testCase = 0; testCase < t; testCase++){
        int n;
        cin >> n;

        long long count = 0;

        long long prev;
        cin >> prev;

        bool toSkip = false;
        for(int i = 1; i < n; i++){
            long long num;
            cin >> num;
            //If there is a repeat just move on
            if(num != prev){
                //If we aren't skipping this one then skip the next one if these two are adjacent integers
                if(!toSkip){
                    if(num > prev + 1){
                        count++;
                    }
                    else{
                        count++;
                        toSkip = true;
                    }
                }
                //If we are skipping this one then dont skip the next one
                else{
                    toSkip = false;
                }
                prev = num;
            }
        }
        //account for extra last group if we aren't skipping the last integer
        cout << count + !toSkip << endl;
    }
    return 0;
}