/*
A machine stamps items 'EVEN' or 'ODD' based on serial number. Given N, print 'Even' if divisible by 2, else 'Odd'. The modulo operator % gives the remainder - if N%2 equals 0, the number is even.
Input
A single integer N.
Output
Print Even if N is divisible by 2, otherwise Odd.
Constraints
-10^9 ≤ N ≤ 10^9
*/

#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    if(N % 2 == 0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
}