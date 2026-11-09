
/*
Convert between Celsius, Fahrenheit and Kelvin. F=(C×9/5)+32. K=C+273.15. Given a temperature value and its scale (C/F/K), convert to the other two. Three cases in your conditional - one per input scale.

Input

A temperature value T and its scale (C, F or K), separated by a space.

Output

The other two scales with 2 decimals, e.g. F=212.00, K=373.15.

Constraints

-1000 ≤ T ≤ 1000
Scale is one of C, F, K (uppercase).*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    double t, f, c, k;
    char scale;

    cin >> t >> scale;

    //cout << fixed << setprecision(2);

    if(scale == 'C'){
        f = (t * 9.0/5.0) + 32;
        k = t + 273.15;

        cout << "F=" << f << ", K=" << k;
    }
    else if(scale == 'F'){
        c = (t - 32) * 5.0/9.0;
        k = c + 273.15;

        cout << "C=" << c << ", K=" << k;
    }
    else if(scale == 'K'){
        c = t - 273.15;
        f = (c * 9.0/5.0) + 32;

        cout << "C=" << c << ", F=" << f;
    }

    cout << endl;
}
