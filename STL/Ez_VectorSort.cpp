// https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,x;
    vector<int> uns;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>x;
        uns.push_back(x);
    }
    sort(uns.begin(), uns.end());
    for (int j = 0; j < n; j++) {
        cout<<uns[j]<<" ";
    }
    return 0;
}
