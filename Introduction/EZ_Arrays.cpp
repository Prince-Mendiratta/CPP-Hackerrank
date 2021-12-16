// https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, x;
    int arr[n];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x;
        arr[i] = x;
    }
    // for (int j = 0; j<n; j++) {
    //     cout<<arr[j];
    // }
    for(int j = 0; j < n; j++){
        cout<<arr[n-j-1]<< " ";
    }
    return 0;
}
