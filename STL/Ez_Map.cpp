#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

void addMarks(map<string, int> *m, string name, int marks){
    map<string, int>::iterator itr = m->find(name);
    if(itr == m->end()){
        m->insert(make_pair(name, marks));
    }else{
        itr->second = itr->second + marks;
    }
};

void eraseMarks(map<string, int> *m, string name){
    m->erase(name);
};

void printMarks(map<string, int> *m, string name){
    map<string, int>::iterator itr = m->find(name);
    if(itr == m->end()){
        cout<<0<<endl;
    }else{
        cout<<itr->second<<endl;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    map<string, int> m;
    cin>>q;
    while(q--){
        string name;
        int marks, type;
        cin>>type>>name;
        if(type == 1){
            cin>>marks;
        }
        switch(type){
            case 1:
                addMarks(&m, name, marks);
                break;
            case 2:
                eraseMarks(&m, name);
                break;
            case 3:
                printMarks(&m, name);
                break;
        }
    }
    return 0;
}



