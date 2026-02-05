#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        double theta;
        cin >> theta;
        double n = 360.0/(180.0-theta);
        if(abs(round(n)-n)<0.00000001){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
    return 0;
}