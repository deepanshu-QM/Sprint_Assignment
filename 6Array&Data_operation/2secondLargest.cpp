/*
In tournaments, the runner-up matters. Find second largest and second smallest WITHOUT sorting. Maintain four variables: largest, second_largest, smallest, second_smallest. Update all four in a single pass through the array.

Input

Line 1: N. Line 2: N integers.

Output

2nd Largest=.., 2nd Smallest=.. - using DISTINCT values; print None for a value that does not exist.

Constraints

1 ≤ N ≤ 10^5
-10^9 ≤ arr[i] ≤ 10^9*/




#include<bits/stdc++.h>
using namespace std;

int display(int N, long long  arr[]){
    long long  max=INT_MIN ,min=INT_MAX , second_min=INT_MAX, second_max=INT_MIN;;
    for(int i=0;i<N;i++){
        if(arr[i] > max ){
            second_max = max;
            max = arr[i];
        }else if(arr[i] > second_max && arr[i] != second_max){
            second_max = arr[i];
        }
        
        if(arr[i] < min){
            second_min = min;
            min = arr[i];
        }else if(arr[i] < second_min && arr[i] != second_min){
            second_min = arr[i];
        }
    
    }

    cout<<"Second_Largest :"<<second_max<<"   Second_smallest :"<<second_min<<endl;


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