#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;

    int maxRoundsThroughTheLine = 0;
    int maxIndex = 0;

    int candiesWanted;
    int rounds;
    for(int i = 0; i < m; i++){
        cin >> candiesWanted;
        rounds = candiesWanted/n + (candiesWanted % n > 0);

        if(rounds >= maxRoundsThroughTheLine){
            maxIndex = i;
            maxRoundsThroughTheLine = rounds;
        }
    }

    cout << maxIndex + 1;
    return 0;
}