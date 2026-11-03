/*
A perfect number equals the sum of its proper divisors (all divisors except itself). 6=1+2+3. There are very few perfect numbers in existence: 6, 28, 496, 8128. Find all divisors up to N/2, sum them, compare to N*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,div=0;
    cin>>N;

    for(int i=1;i<=N/2;i++){
        if(N % i == 0 && N != i){
            div += i;
        }
    }
    if(div == N){
        cout<<"Perfect"<<endl;
    }else{
        cout<<"Not Perfect"<<endl;
    }

    return 0;
}