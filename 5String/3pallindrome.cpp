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

    string s,orignal,ss,temp;
    getline(cin,s);


    orignal = s;

    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == ' ')
           continue;
        
        ss += tolower(s[i]);
    }

    temp = "";

    for(int i=0;i<orignal.size();i++){
        if(orignal[i] == ' ')
           continue;
        temp += tolower(orignal[i]);
    }
    orignal = temp;

    if(orignal == ss)
      cout<<"True"<<endl;
    else
      cout<<"False"<<endl;

}