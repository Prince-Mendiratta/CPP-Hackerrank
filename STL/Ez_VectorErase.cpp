// https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true

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
    cin>>x;
    uns.erase(uns.begin()+x-1);
    cin>>x>>n;
    uns.erase(uns.begin()+x-1, uns.begin()+n-1);
    cout<<uns.size()<<endl;
    for(int j = 0; j < uns.size(); j++){
        cout<<uns[j]<<" ";
    }
    return 0;
}
