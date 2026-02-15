#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int testCase = 0; testCase < t; testCase++){
        long long n, minStrength;
        cin >> n >> minStrength;
        vector<long long> students(n);
        for(int i = 0; i < n; i++){
            cin >> students[i];
        }
        sort(students.begin(), students.end());

        long long numStudents = 0;
        long long count = 0;
        for(int i = n-1; i >= 0; i--){
            numStudents++;
            if(students[i] * numStudents >= minStrength){
                numStudents = 0;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}