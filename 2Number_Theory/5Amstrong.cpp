/*
An Armstrong (narcissistic) number equals the sum of its digits each raised to the power of the digit count. 153=1³+5³+3³. Steps: count digits first, then for each digit compute digit^count and sum them. Compare to original N.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,res,orignal,count=0, sum=0,temp;
    cin>>N;
    
    orignal = N;
    
    while(N >0){
        count++;
        N = N/10;
    }
    
    N = orignal;
 
    
    while(N > 0){
        res = N % 10;
        temp = pow(res, count);
        sum += temp;
        
        N = N /10;
    }
    
    if(orignal == sum){
        cout<<"Amstrong"<<endl;
    }else{
        cout<<"Not Amstrong"<<endl;
    }
}