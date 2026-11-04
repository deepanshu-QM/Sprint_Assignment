/*
The most famous interview warm-up. For 1 to N: print Fizz if divisible by 3, Buzz if by 5, FizzBuzz if by both, else the number. Critical trap: check divisibility by 15 FIRST - if you check 3 first, you will miss the FizzBuzz case.*/

//Time Complexity = O(N)
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;

    for(long long i = 1; i <= N; i++){
        if(i > 1) cout<<" ";
        if(i % 15 == 0) cout<<"FizzBuzz";
        else if(i % 3 == 0)cout<<"Fizz";
        else if(i % 5 == 0)cout<<"Buzz";
        else cout<<i<<" ";
    }

    return 0;
}

