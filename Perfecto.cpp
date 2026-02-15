#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long n){
    long long root = sqrt(n);
    return (root * root == n);
}

int main() {
    int t;
    cin >> t;
    //for testcases
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        //if total sum is perf square, out -1
        if(isPerfectSquare(1LL * n * (n + 1) / 2)){
            cout << -1 << endl;
        }
        else{
            vector<int> nums;
            for(int j = 1; j <= n; j++){
                nums.push_back(j);
            }
            //loop through integers and swap nums[i] and nums[i+1] when the sum is a perfect square
            long long sum = 0;
            for(int j = 0; j < n-1; j++){
                if(isPerfectSquare(sum + nums[j])){
                    long long temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
                sum += nums[j];
                cout << nums[j] << ' ';
            }
            cout << nums[n-1] << endl;
        }
    }
    return 0;
}

/*
B. Perfecto
time limit per test
1.5 seconds
memory limit per test
256 megabytes

A permutation p of length n∗ is perfect if, for each index i (1≤i≤n), it satisfies the following:

    The sum of the first i elements p1+p2+…+pi is not a perfect square†. 

You would like things to be perfect. Given a positive integer n, find a perfect permutation of length n, or print −1 if none exists.

∗A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array), and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

†A perfect square is an integer that is the square of an integer, e.g., 9=32 is a perfect square, but 8 and 14 are not.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104). The description of the test cases follows.

The first and only line of each test case contains a single integer n (1≤n≤5⋅105).

It is guaranteed that the sum of n over all test cases does not exceed 106.
Output

For each test case:

    If no solution exists, print a single integer −1.
    Otherwise, print n integers p1,p2,…,pn — the perfect permutation you find. 

If there are multiple solutions, print any of them.
*/