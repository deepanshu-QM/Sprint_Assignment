
/*
Build a calculator. Read two numbers and an operator (+,-,*,/,%). Perform the correct operation. Handle division by zero - print an error instead of crashing. This is your first taste of defensive programming: always anticipate bad inputs.

Input

A single line: A op B, where op is one of + - * / % (separated by spaces).

Output

The result. + - * % print integers; / prints the result with 2 decimals. Division or modulo by zero prints Error: Division by zero; an unknown operator prints Error: Invalid operator.

Constraints

0 ≤ A, B ≤ 10^9 (non-negative, so % behaves the same in every language)
Examples*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin>>A>>B;

    string op;
    cin>>op;
    if(op == "+"){
        cout<<A+B<<endl;
    }else if(op == "-"){
        cout<<A-B<<endl;
    }else if(op == "*"){
        cout<<A*B<<endl;
    }else if(op == "/"){
        if(B == 0){
            cout<<"Error: Division by zero"<<endl;
        }
    }else if(op == "%"){
        cout<<A%B<<endl;
    }else{
        cout<<"Error: Invalid operator"<<endl;
    }
}