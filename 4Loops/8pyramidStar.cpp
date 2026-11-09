/*
Print a centred star pyramid. Row i has (2i-1) stars, centred with spaces. Row 1: 1 star centred. Row 2: 3 stars. Row 3: 5 stars. The number of leading spaces = N - i. This is the 'classic interview pattern' - spaces + stars together.

Input

A single integer N - number of rows.

Output

A centred pyramid: row i has N-i leading spaces and 2i-1 stars (no trailing spaces).

Constraints*/


#include<bits/stdc++.h>
using namespace std;

int main (){
    int N;
    cin>>N;
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            cout<<" ";
        }
        
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

