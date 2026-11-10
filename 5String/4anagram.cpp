/*
Two strings are anagrams if they use the exact same letters in any order. Method 1: sort both strings - if equal, anagram. Method 2: frequency map comparison. Both are correct. Method 1 is simpler; Method 2 is O(n) instead of O(n log n).

Input

Two lowercase words A and B separated by a space.

Output

Anagram or Not Anagram.

Constraints

1 ≤ |A|, |B| ≤ 10^5
Only lowercase letters a-z.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);

    map<char,int>freq1,freq2;

    for(int i=0;i<a.size();i++){
        freq1[tolower(a[i])]++;
    }

    for(int i=0;i<b.size();i++){
        freq2[tolower(b[i])]++;
    }

    if(freq1 == freq2)
      cout<<"Anagram"<<endl;
    else
      cout<<"Not Anagram"<<endl;

}