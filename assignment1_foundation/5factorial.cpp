
/*
Factorial N! is 1×2×3×...×N. Compute it with a for loop. Then solve a related problem: given N, find its smallest factor greater than 1 using a WHILE loop with a BREAK - loop from 2 upward, break the moment you find a number that divides N. If the smallest factor equals N, it is prime. Break exits a loop immediately - one of the most useful control flow tools.
Input
A single integer N.
Output
Line 1: N! = value. Line 2: Smallest factor > 1: f (Prime) / (Not Prime), or 'none' when N < 2.
Constraints
0 ≤ N ≤ 20 (20! = 2432902008176640000 still fits in 64 bits)
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
   
    int N,fac=1;
    cin>>N;
    
    for(int i=1;i<=N;i++){
        fac *=i;
    }
    cout<<N<<"! = "<<fac<<endl;
    
    if(N < 1){
        cout<<"Smallest factor > 1 : none"<<endl;
    }

    
    
}