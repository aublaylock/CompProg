#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        bool coolDown = false;
        int dryDays = 0;
        int hikes = 0;
        //For each day
        for(int day = 0; day < n; day++){
            bool raining;
            cin >> raining;
            //If its raining reset, if you're not resting, add a day
            if(raining)
                dryDays = 0;
            else if(!coolDown)
                dryDays++;
            
            //If you have enough days to hike, hike and start to rest
            if(dryDays == k){
                dryDays = 0;
                coolDown = true;
                hikes++;
            }
            //If you didn't just hike and you were resting, stop resting
            else if(coolDown)
                coolDown = false;
        }
        cout << hikes << endl;
    }
    return 0;
}