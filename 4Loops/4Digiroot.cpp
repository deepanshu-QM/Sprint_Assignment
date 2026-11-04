/*
Keep summing digits until a single digit remains. 9875-29-11-2. This is the digital root. Interesting property: the digital root equals N mod 9, except when N mod 9 = 0 (then it is 9). Solve with a loop first, then verify the formula.

Input

A single non-negative integer N.

Output

Two lines - Loop: r and Formula: r.

Constraints

0 ≤ N ≤ 10^18*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,sum=0,orgn,formula,digit;
    cin>>N;
    
    orgn = N;
    
    while(N >=10){
        sum=0;
        
        while(N >0){
            digit = N % 10;
            sum += digit;
            N = N /10;
        }
        N = sum;
    }
    
    cout<<"loop :"<<N<<endl;
    formula = orgn % 9;
    
    if(formula != 0){
        cout<<"formula:"<<formula<<endl;
    }
    
}