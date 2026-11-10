/*
A text analyser counts keyword occurrences. Given sentence S and target word W, count how many times W appears (case-insensitive). Split S into words, lowercase each, then compare to lowercase(W).

Input

Line 1: sentence S. Line 2: target word W.

Output

How many words of S equal W, ignoring letter case.

Constraints

1 ≤ |S| ≤ 10^5
Words are separated by single or multiple spaces; no punctuation.*/

/* approch 1 :*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,w,word;
    getline(cin,s);
    getline(cin, w);

    transform(w.begin(), w.end(), w.begin(), ::tolower);

    int count = 0;
    stringstream ss(s);

    while(ss >> word){
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        if(word == w){
            count++;
        }
    }
    cout<<count<<endl;

}

