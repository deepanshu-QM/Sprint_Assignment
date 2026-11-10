/*
Check if a string reads the same forwards and backwards. Basic version: compare S with reversed(S). Advanced version: ignore spaces and case ('A man a plan a canal Panama' is a palindrome). Normalise first: lowercase + remove spaces.

Input

A single line: string S (letters and spaces).

Output

True if S is a palindrome ignoring spaces and letter case, otherwise False.

Constraints

1 ≤ |S| ≤ 10^5*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,orignal,ss;
    getline(cin,s);

    bool isPalindorm = true;

    orignal = s;

    for(int i=s.size();i>0;i--){
        ss = tolower(s[i]);
        if(ss == " ")
           continue;
        if(ss == orignal)
           isPalindorm = false;
           break;
        
    }

    if(isPalindorm)
       cout<<"True"<<endl;
    else
       cout<<"False"<<endl;


}