
/*
Leap year rule: divisible by 4 AND (not divisible by 100 OR divisible by 400). Draw a decision tree before coding - the order of conditions changes the result. 1900 is NOT a leap year. 2000 IS. Why? The 400 rule overrides the 100 rule.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int  Y;
	cin>>Y;
	
	if(Y % 4 == 0 && (Y % 100 != 0 || Y % 400 == 0 )){
	    cout<<"Leap Year"<<endl;
	}else{
	    cout<<"Not a Leap Year"<<endl;
	}
}
