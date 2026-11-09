/*
Given range [A, B], print every prime number from A to B. Reuse your isPrime function from Problem 6. This is function reuse in practice - one well-written helper, used many times.

Input

Two integers A and B - the range [A, B].

Output

All primes in [A, B] separated by spaces, or None if there are none.

Constraints

1 ≤ A ≤ B ≤ 10^5
*/


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2 ) return  false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n % i == 0) return  false;
    }
    return true;
}

int main(){

    long long A,B;
    cin>>A>>B;


    for(long long i=A;i<=B;i++){
        if(isPrime(i))
           cout<<i<<" ";
    }

}