
/*
Print an M×N rectangle of stars where only the border is filled - the interior is empty spaces. Row 1 and row M: all stars. Other rows: star + spaces + star. This introduces the concept of 'border vs interior' in pattern printing.

Input

Two integers M (rows) and N (columns).

Output

An M×N rectangle of * where only border cells are stars and interior cells are spaces.

Constraints*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++)
            if(i==1 || i==N || j==1 || j==M)
                cout<<"*";
            else
                cout<<" ";
            
        cout<<endl;
    }
}