
/*
Check voter eligibility with three rules: must be 18+ AND a citizen AND not disqualified. Given age A, citizenship C (1/0), and disqualification D (1/0), print an eligibility result with a specific reason for rejection. Practice combining AND with specific failure messages.

Input

Three integers: age A, citizen flag C (1 = citizen, 0 = not) and disqualified flag D (1 = disqualified, 0 = not).

Output

Eligible, or 'Not Eligible - ' followed by every failed rule, comma-separated, in the order: Too young, Not a citizen, Disqualified.

Constraints

0 ≤ A ≤ 150
C, D ∈ {0, 1}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,C,D;
    cin>>A>>C>>D;

    vector<string>v;
    if(A < 18) v.push_back("Too Young");
    if(C == 0) v.push_back("Not a Citizen");
    if(D == 1) v.push_back("Disqualified");

    if(v.empty()){
        cout<<"Eligible\n";
    }else{
        cout<<"Not Eligible - ";

        for(size_t i=0;i<v.size();i++){
            if(i>0)cout<<" , ";
            cout<<v[i];
        }
        cout<<"\n";
    }
    return 0;
} 