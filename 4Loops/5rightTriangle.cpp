
/*
Print a right-angled triangle of stars with N rows. Row i has exactly i stars. Use nested loops: outer for the row number, inner for printing stars. This is your first pattern problem - nested loops create 2D output.

Input

A single integer N - number of rows.

Output

N lines; line i contains i stars.

Constraints

1 ≤ N ≤ 100*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=0;i<N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
 
