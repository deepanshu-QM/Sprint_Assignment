
/*
Print the complete multiplication table of N from 1 to 10. Format each line as 'N × i = result'. Simple loop, but builds the habit of formatted output. Numbers are cleaner when aligned - think about spacing.

Input

A single integer N.

Output

10 lines: N x i = N*i for i = 1..10.

Constraints

-10^6 ≤ N ≤ 10^6   */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=1;i<=10;i++){
        cout<<N<<" X "<<i<<" = "<<N*i<<endl;
    }
    return 0;
}