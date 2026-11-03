
/*
0, 1, 1, 2, 3, 5, 8, 13... Each number is the sum of the previous two. Fibonacci appears in flower petals, shell spirals, and stock market analysis. Print the first N Fibonacci numbers using a loop - store only the last two values, no array needed.
Input
A single integer N - how many Fibonacci numbers to print.
Output
The first N Fibonacci numbers (starting 0, 1) separated by spaces.
Constraints

1 ≤ N ≤ 90 (fib(89) still fits in 64 bits)*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,prev=0,current = 1, res;
    cin>>N;

    for(long long i=0;i<N;i++){
    
        cout<<prev<<" ";
        res = prev + current;
        prev = current;
        current = res;

    }

    return 0;
}