/*
A Harshad (Niven) number is divisible by the sum of its own digits. 18 is Harshad: 1+8=9, 18÷9=2 (exact). Reuse your digit sum from Problem 10. Then check if N is divisible by that sum.

Input

A single positive integer N.

Output

Harshad or Not Harshad.

Constraints

1 ≤ N ≤ 10^18*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,digit,sum=0,num;
    cin>>N;
    
    num = N;

    while(N>0){
        digit = N % 10;
        sum += digit;
        N = N /10;
    }
    
    if(num % digit == 0){
        cout<<"Harshad"<<endl;
    }else{
        cout<<"Not Harshad"<<endl;
    }
}

