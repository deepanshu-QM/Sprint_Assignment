/*
A palindrome number reads the same forwards and backwards: 121, 1331, 12321. Reuse your reverse function from Problem 11 - if N == reversed(N), it is a palindrome. This is function reuse: build small tools, use them to build bigger ones.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N, reversed=0, temp,number;
    cin>>N;
    number = N;   //Equal to Orignal

    while(N >0){
        temp = N %10;
        reversed = (reversed * 10) + temp;
        N = N/10;
    }
    if(number == reversed){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
}