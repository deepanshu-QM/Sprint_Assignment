
/*
Three students compare scores. Given A, B, C, find the largest using an if-elif-else chain. Handle ties carefully - when two or three values are equal, the answer is still valid. This trains you to think about all cases, not just the obvious ones.
Input
Three integers A, B and C.
Output*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a >= b && a >= c){
        cout<<a<<endl;
    }else if( b >= c && b >= a){
        cout<<b<<endl;
    }else {
        cout<<c<<endl;
    }
}