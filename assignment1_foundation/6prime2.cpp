

//Approch 2 :
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;

    if(N < 2){
        cout<<"Not Prime"<<endl;
        return 0;
    }

    if(N == 2){
        cout<<"Prime"<<endl;
    }
    
    bool IsPrime = true;
    
    for(long long i=3;i<=sqrt(N);i+=2){
        if(i % 2 == 0){
            continue;
        }else if (N % i == 0){
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