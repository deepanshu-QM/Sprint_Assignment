
//Approch 1 :
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;

    if(N < 2){
        cout<<"Not Prime"<<endl;
        return 0;
    }
    
    bool IsPrime = true;
    
    for(int i=2;i<=sqrt(N);i++){
        if(N % i == 0){
            IsPrime = false;
            break;
        }
    }
    
    if(IsPrime){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}