
/*
A shopkeeper computes total, discount, quantity, and price. Given two integers A and B: (1) 
compute A+B, A-B, A×B, A÷B. (2) Swap their values - first using a temporary variable (temp=A, A=B, B=temp), then without any extra variable using arithmetic (A=A+B, B=A-B, A=A-B). Swapping is one of the most fundamental operations in all of programming.*/

/*
Constraints
1 ≤ A, B ≤ 10^9
Use 64-bit integers - A×B can reach 10^18     
*/

#include<iostream>
using namespace std;

int main(){

    long long a,b;
    cin>>a>>b;
    cout<<"Sum="<<a+b<<", "<<"Diff="<<a-b<<", "<<"Product="<<a*b<<", "<<"Quotient="<<a/b<<endl;
    long long  temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Swap with temp: A="<<a<<", "<<"B="<<b<<endl;
    cout<<"Swap without temp: A="<<b<<", "<<"B="<<a<<endl;

    return 0;


}