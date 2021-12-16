// https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(){
	cout<<"Hello World!";
}

int main(){
	void (*fp)(); // Declaration of pointer to function
	fp = display; // Initialization
	(*fp)(); // Function call
}
