/*
Caesar shifted letters K positions forward. 'A'+3='D'. Use ASCII: new=chr((ord(c)-ord('A')+K)%26+ord('A')). The modulo wraps Z back to A. Decode by shifting -K (or equivalently 26-K). Implement both.

Input

Line 1: ENCODE or DECODE. Line 2: shift K. Line 3: the text.

Output

The encoded or decoded text. Letters are shifted (case preserved); everything else stays the same.

Constraints

0 ≤ K ≤ 10^9
1 ≤ |text| ≤ 10^5
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,text,newtext="";
    getline(cin, s);
    getline(cin, text);

    int k;
    cin>>k;

    if(s == "encoder" || s == "ENCODER"){
        for(int i=0;i<text.size();i++){
            if(text[i] >= 'A' && text[i] <= 'Z'){
                newtext += (char)((text[i] - 'A' + k)%26 + 'A');
            }else if(text[i] >= 'a'  && text[i] <= 'z'){
                newtext += (char)((text[i] - 'a' + k )%26 + 'a');
            }
        }

    }else if(s == "decoder" || s == "DECODER"){
        for(int i=0;i<text.size();i++){
            if(text[i] >= 'A' && text[i] <= 'Z'){
                newtext += (char)((text[i] - 'A' - k + 26) % 26 + 'A');
            }else if(text[i] >= 'a'  && text[i] <= 'z'){
                newtext += (char)((text[i] - 'a' - k + 26 )%26 + 'a');
            }
        }
    }
    cout<<newtext;
}