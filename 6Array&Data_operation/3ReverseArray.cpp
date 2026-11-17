/*
Reverse the array in-place: one pointer at start, one at end, swap elements, move inward. O(1) extra space - no new array. The two-pointer swap technique is used in dozens of algorithms.

Input

Line 1: N. Line 2: N integers.

Output

The reversed array as [a,b,c].

Constraints

1 ≤ N ≤ 10^5
-10^9 ≤ arr[i] ≤ 10^9*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    int left = 0 , right = N-1;
    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout<<"[";

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}