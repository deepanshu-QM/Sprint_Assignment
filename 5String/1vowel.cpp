/*
A language processor categorises letters. Given string S (lowercase only), count vowels (a,e,i,o,u) and consonants. Iterate character by character, check if each is in the vowel set. Skip spaces if present.

Input

A single line: a lowercase string S (may contain spaces).

Output

Vowels=<count>, Consonants=<count>

Constraints

1 ≤ |S| ≤ 10^5
S contains lowercase letters a-z and spaces only.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int vowel=0,conso=0;

    for(int i=0;i<s.size();i++){
        char ss = tolower(s[i]);
        
        if(ss == ' ')
           continue;

        if(ss == 'a' || ss == 'e' || ss == 'i' || ss== 'o' || ss== 'u')
            vowel++;
        else if(ss >= 'a' && ss <= 'z')
            conso++;
    }

    cout<<" Vowels="<<vowel<<", Consonants="<<conso<<endl;

}