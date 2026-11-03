

/*
A PIN validator checks if the sum of your ID's digits matches a checksum. Given N, find: (a) how many digits it has, and (b) the sum of all digits. Extract digits one at a time: last digit = N%10, then remove it with N//10.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,count=0, res,sum=0;
    cin>>N;

    while(N > 0){
        count++;
        res = N % 10;
        sum += res;
        N = N /10;
    }

    cout<<"count="<<count<<endl;
    cout<<"sum="<<sum<<endl;

}