/*
A school system auto-assigns grades. Score 90-100=A, 75-89=B, 60-74=C, 50-59=D, below 50=F. What happens at exactly 75? at exactly 90? Boundary values are where bugs live - test your conditions at the exact threshold values*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int S;
    cin>>S;
    if(S >=90 && S<=100){
        cout<<"A"<<endl;
    }else if(S >=75 && S <= 89){
        cout<<"B"<<endl;
    }else if(S >= 60 && S <= 74){
        cout<<"C"<<endl;
    }else if(S >= 50 && S <= 59){
        cout<<"D"<<endl;
    }else if( S <= 50){
        cout<<"F"<<endl;
    }else{
        cout<<"Invalid Score"<<endl;
    }
}