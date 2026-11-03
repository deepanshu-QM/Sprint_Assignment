
/*
Given three sides A, B, C: first check if they form a valid triangle (sum of any two sides > third side). If valid, classify as Equilateral (all equal), Isosceles (exactly two equal), or Scalene (all different). Two separate logical checks - validity before type.
Input
Three positive integers A, B and C - the side lengths.
Output
Valid - Equilateral, Valid - Isosceles, Valid - Scalene, or Not a valid triangle.
Constraints
1 ≤ A, B, C ≤ 10^9 (use 64-bit - A+B can exceed 2^31)*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  a,b,c;
    cin>>a>>b>>c;
    
    if(a+b > c && b+c > a && a+c > b){
        if(a == b && b == c ){
            cout<<"Valid - Equilateral"<<endl;
        }else if(a == b || b == c || a == c){
            cout<<"Valid - Isosceles"<<endl;
        }else{
            cout<<"Scalene"<<endl;
        }
    }else{
        cout<<"Not a valid triangle"<<endl;
    }
}