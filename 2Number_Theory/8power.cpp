
/*
Compute base^exponent without any built-in power function. First: loop multiplying base by itself E times. Then: rewrite recursively - power(B,0)=1, power(B,E)=B×power(B,E-1). Same result, different thinking. Understanding both is essential.*/

#include<bits/stdc++.h>
using namespace std;

int power(int B,int E){
    if(E == 0){
        return 1;
    }
    return B * power(B,E-1);
}
int main(){
    int B,E,res = 1,recurssive;
    cin>>B>>E;
    recurssive = power(B,E);
    for(int i=1;i<=E;i++){
        res *=B;
    }

    cout<<"Iterative:"<<res<<endl;
    cout<<"Recursive:"<<recurssive<<endl;
}

