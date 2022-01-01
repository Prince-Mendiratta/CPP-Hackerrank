// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream s(str);
    vector<int> ints;
    char ch;
    int a;
    while(s>>a){
        ints.push_back(a);
        s>>ch;
    }
    return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}