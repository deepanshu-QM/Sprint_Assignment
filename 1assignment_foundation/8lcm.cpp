
/*
LCM is the smallest number both A and B divide into evenly. Formula: LCM(A,B)=(A×B)/GCD(A,B). Reuse your GCD function from Problem 7 - this is function composition: building bigger tools from smaller ones.
Input
Two positive integers A and B.
Output
Print LCM(A, B).
Constraints
1 ≤ A, B ≤ 10^9 (the LCM fits in 64 bits)
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A,B,rem,mul;
    cin>>A>>B;
    
    mul = A * B;
    while(B != 0){
        rem = A % B;
        A = B;
        B = rem;
    }
    
    cout<<mul/A<<endl;
    return 0;
}