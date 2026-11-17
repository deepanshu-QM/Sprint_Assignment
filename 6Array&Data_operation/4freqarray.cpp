/*
A survey app counts how many times each response appears. Given array arr, count the frequency of each distinct element. Use a dictionary: for each element, increment its count. Print each element and its count.

Input

Line 1: N. Line 2: N integers.

Output

Each distinct value with its count as value:count, comma-separated, in order of first appearance.

Constraints

1 ≤ N ≤ 10^5
-10^9 ≤ arr[i] ≤ 10^9*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int count = 1;

    for(int i = 1; i < N; i++) {

        if(arr[i] == arr[i-1]) {
            count++;
        }
        else {
            cout << arr[i-1] << " : " << count << endl;
            count = 1;
        }
    }


    if(N > 0) {
        cout << arr[N-1] << " : " << count << endl;
    }

    return 0;
}
