/*
A data dashboard needs four statistics in one pass. Given arr, find max, min, sum, and average all at once. Initialise max and min with arr[0]. Accumulate sum in the same loop. Average = sum / len(arr). One loop, four answers.

Input

Line 1: N. Line 2: N integers.

Output

Max=.., Min=.., Sum=.., Avg=.. (average with 2 decimals).

Constraints

1 ≤ N ≤ 10^5
-10^9 ≤ arr[i] ≤ 10^9 (the sum needs 64 bits)*/


#include<bits/stdc++.h>
using namespace std;

int display(int N, long long  arr[]){
    long long  max=arr[0],min=arr[0], sum=0;
    double avg;
    for(int i=0;i<N;i++){
        if(arr[i] > max ){
            max = arr[i];
        }
        
        if(arr[i] < min){
            min = arr[i];
        }
     sum += arr[i];
    }
    
    avg = (double)sum/N;
    cout<<"Max="<<max<<", Min="<<min<<", Sum="<<sum<<", Avg="<<avg<<endl;
}

int main(){
    int  N;
    cin>>N;

    long long arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

   display(N, arr);
}