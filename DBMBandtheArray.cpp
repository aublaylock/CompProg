#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int testCase = 0; testCase < t; testCase++){
        int n,s,x;
        cin >> n >> s >> x;

        int sum = 0;
        for(int i = 0; i < n; i++){
            int element;
            cin >> element;
            sum += element;
        }
        if(s >= sum && (s - sum) % x == 0){
            cout << "YeS\n";
        }
        else{
            cout << "nO\n";
        }
    }

    return 0;
}