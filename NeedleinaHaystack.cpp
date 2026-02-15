#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int testCase = 0; testCase < t; testCase++){
        string sub;
        cin >> sub;
        string super;
        cin >> super;
        
        map<char, int> charCountsSuper;
        for(char c : super){
            charCountsSuper[c]++;
        }

        bool impossible = false;
        for(char c : sub){
            if(--charCountsSuper[c] < 0){
                impossible = true;
                break;
            }
        }

        if(impossible){
            cout << "Impossible" << endl;
            continue;
        }

        bool toAddBefore = false;
        if(sub < string(sub.size(), sub[0])){
            toAddBefore = true;
        }

        string result = "";
        int subIndex = 0;
        for(auto const& [key, val]: charCountsSuper){
            while(subIndex < sub.size() && sub[subIndex] <= key){
                result += sub[subIndex];
                subIndex++;
            }
            result += string(val, key);
        }
        for(int i = subIndex; i < sub.size(); i++){
            result += sub[subIndex];
        }

        cout << result << endl;
    }
    return 0;
}