/*
A cipher tool reverses strings. Solve it two ways: (1) built-in slice S[::-1], (2) loop building reversed string character by character. Know both - interviewers often ban built-ins.

Input

A single line: string S.

Output

Two lines - Built-in: reversed S and Manual: reversed S.

Constraints

1 ≤ |S| ≤ 10^5*/

#include<bits/stdc++.h>
using namespace std;

int  main(){
    string s,temp, orignal;
    getline(cin,s);
    
    orignal = s;
    reverse(s.begin(), s.end());
    cout<<"build-in="<<s<<endl;

    for(int i=orignal.size();i>0;i--){
        temp += orignal[i];   //concate 
    }
    cout<<"Manual="<<temp<<endl;


}