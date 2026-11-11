/*
A username validator strips repeated characters, keeping first occurrence. Given S, print a version with each character appearing only once, in order of first encounter. Use a set to track seen characters efficiently.

Input

A single string S.

Output

S with every repeated character removed, keeping the first occurrence of each, in original order.

Constraints

1 ≤ |S| ≤ 10^5
S contains printable ASCII characters (no spaces)*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, newss="";
    getline(cin,s);


    for(int i=0;i<s.size();i++){
        s[i] = tolower((unsigned char)s[i]);
    }

    for(int i=0;i<s.size();i++){
        if(i+1 < s.size() && s[i] != s[i+1]){
            newss += s[i];
        }
    }

    if(!s.empty()){
        newss += s.back();
    }

    cout<<newss<<" ";
}