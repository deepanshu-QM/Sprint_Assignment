/*
The Sieve of Eratosthenes finds all primes up to N in O(n log log n) - far faster than checking each number individually. Create a boolean array of size N+1, all True. For each prime p starting at 2, mark all multiples of p as False. What remains True are the primes*/

#include<bits/stdc++.h>
using namespace std;

void sieve(int n){

    vector<int> isprime(n+1, true);

    isprime[0] = false;
    isprime[1] = false;

    for(int i=2;i<sqrt(n);i++){

        if(isprime[i]){
            
            for(int j= i*i;j<=n;j += i){
                isprime[j] = false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    sieve(n);

    return 0;

}