// https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box {
    private:
        int l;
        int b;
        int h;
    public:
        Box();
        Box(int l, int b, int h);
        Box(const Box &B);
        int getLength() {return l;};
        int getBreadth() {return b;};
        int getHeight() {return h;};
        long long CalculateVolume();
        bool operator < (Box &b);
        friend ostream& operator << (ostream& out, Box& B){
            out << B.l << " " << B.b << " " << B.h;
            return out;
        };
};

Box::Box() {
    l = 0;
    b = 0;
    h = 0;
}

Box::Box(int l, int b, int h){
    this->l = l;
    this->b = b;
    this->h = h;
}

Box::Box(const Box &B) {
    this->l = B.l;
    this->b = B.b;
    this->h = B.h;
}

long long Box::CalculateVolume(){
    unsigned long x = b*h;
    unsigned long y = x*l;
    return y;
}

// bool Box::operator<(Box &b){
//     cout<<b<<endl;
//     if(this->l > b.l){ cout << "case 1"; return false;};
//     if(this->b > b.b || this->l != b.l){ cout << "case 2"; return false;};
//     if(this->h > b.h || this->b != b.b || this->l != b.l){cout << "case 3"; return false;};
//     return true;
// }

bool Box::operator<(Box &b){
    if(this->l < b.l){ return true;};
    if(this->b < b.b && this->l == b.l){ return true;};
    if(this->h < b.h && this->b == b.b && this->l == b.l){return true;};
    return false;
}

// ostream& operator<<(ostream& out, Box &B){
//     out << B.
// }

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}