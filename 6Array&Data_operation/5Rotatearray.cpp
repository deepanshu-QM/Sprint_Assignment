/*
A circular conveyor belt shifts items K steps right (last K elements move to front). Classic in-place trick: reverse the whole array, then reverse first K elements, then reverse the remaining N-K elements. Three reversals = one rotation, O(1) space.

Input

Line 1: N and K. Line 2: N integers.

Output

The array rotated K steps to the right, as [a,b,c].

Constraints

1 ≤ N ≤ 10^5
0 ≤ K ≤ 10^9*/

#include<bits/stdc++.h>
using namespace std;

int reversearray(int arr[], int left , int right){

    while(left < right){                     /*[5,4,3,2,1]*/
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int N;
    cin>>N;

    int k;
    cin>>k;

    int arr[N];
    for(int i=0;i<N;i++){                          
        cin>>arr[i];
    }
                                           

    reversearray(arr, 0, N-1);
    reversearray(arr, 0, k-1);
    reversearray(arr, k, N-1);

    cout<<"[";
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";

    
}