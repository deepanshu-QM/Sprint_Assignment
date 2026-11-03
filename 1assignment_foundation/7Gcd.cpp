
/*
GCD(A,B) is the largest number that divides both. The Euclidean algorithm: GCD(A,B)=GCD(B, A%B), stop when B=0. This 2300-year-old algorithm is one of the most elegant in mathematics - two lines of logic that work for any pair of numbers.

Input
Two non-negative integers A and B.
Output
Print GCD(A, B).
Constraints
0 ≤ A, B ≤ 10^18
A and B are not both 0
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A,B,rem;
    cin>>A>>B;

    while(B != 0){
        rem = A % B;
        A = B;
        B = rem;
    }

    cout<<A<<endl;
}