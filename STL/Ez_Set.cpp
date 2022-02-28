#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void addElement(set<int> *s, int ele){
    s->insert(ele);
};

void deleteElement(set<int> *s, int ele){
    s->erase(ele);
};

void searchElement(set<int> *s, int ele){
    set<int>::iterator itr = s->find(ele);
    if(itr == s->end()){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    set<int> s;
    cin>>q;
    while(q--){
        int y,x;
        cin>>y>>x;
        switch(y){
            case 1:
                addElement(&s, x);
                break;
            case 2:
                deleteElement(&s, x);
                break;
            default:
                searchElement(&s, x);
                break;
        }
    }
    return 0;
}
