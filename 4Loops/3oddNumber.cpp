
/*
An auditor sums only odd-numbered invoices. Given [A, B], find the sum of all odd numbers. Use a loop with N%2==1 check, or step by 2 starting from the first odd number in the range - same result, the second is more efficient.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A,B,sum=0;
    cin>>A>>B;

    for(long long i=A;i<=B;i++){
        if(i % 2 == 1){
            sum += i;
        }
    }
    cout<<sum<<" ";
    return 0;
}

//Approch 2 :

#include<bits/stdc++.h>
using namespace std;

int main(){
    
}