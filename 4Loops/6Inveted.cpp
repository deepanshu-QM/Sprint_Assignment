

/*
Print an inverted triangle: row 1 has N stars, row 2 has N-1 stars, down to 1 star. The loop decrements instead of increments. Understanding descending loops is just as important as ascending ones.

Input

A single integer N.

Output

N lines: N stars, then N-1, ..., down to 1.

Constraints

1 ≤ N ≤ 100
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=N;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}