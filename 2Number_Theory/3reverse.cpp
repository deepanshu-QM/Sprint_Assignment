
/*
A verification system generates codes by reversing ID numbers. This is a NATURAL while loop problem: while N > 0: extract last digit with N%10, build reversed number, then N = N//10. The loop stops when N becomes 0. You do not know how many digits N has in advance - that is exactly when while loops shine. Also understand why for loops cannot easily express 'keep going until a condition is me*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,res=0,temp;
    cin>>N;

    while(N > 0){
        temp = N % 10;
        res = (res * 10) + temp;
        N = N/10;
    }
    cout<<res<<endl;
}

/*
 (0 *10) + 5 = 0 + 5 = 5
 (5*10)  + 4 = 50 + 4 = 54
 (54*10) + 3 = 540 + 3 = 543
 (543*10) + 2 = 5430 + 2 = 5432
 (5432*10)+1 = 54320+1 = 54321

*/