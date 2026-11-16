/*
Basic compression: replace consecutive identical characters with char+count. 'AAABBBCC'-'A3B3C2'. Walk the string, count consecutive same characters, emit char+count when character changes. If count=1, omit the number.

Input

A single string S of letters.

Output

The run-length encoding: each run as the character followed by its length (length omitted when it is 1).

Constraints

1 ≤ |S| ≤ 10^5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,newss="";
    getline(cin, s);

    
    int count = 1;

    for(int i=0;i<s.size();i++){
        if(i+1 < s.size()  && s[i] == s[i+1]){
            count++;
        }else{
            newss +=s[i];
            newss += to_string(count);
            count = 1;
        }
    }
    cout<<newss<<" ";
}