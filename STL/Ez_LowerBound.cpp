// https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// void checkIfElementIsPresent(vector<int> arr, int value){
//     vector<int>::iterator index = lower_bound(arr.begin(), arr.end(), value);
//     if(arr[index - arr.begin()] == value){
//         cout<<"Yes "<<(index - arr.begin() + 1)<<endl;
//     }else{
//         cout<<"No "<<(index - arr.begin() + 1)<<endl;
//     }
// };

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n,q,x;
//     vector<int> arr;
//     cin>>n;
//     for (int i = 0; i < n; i++) {
//         cin>>x;
//         arr.push_back(x);
//     }
//     cin>>q;
//     for (int i = 0; i < q; i++) {
//         cin>>x;
//         checkIfElementIsPresent(arr, x);
//     }
//     return 0;
// }

int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int m, num;
   cin >> m;
   vector<int> v;
   for (int i=0; i<m; i++){
       cin >> num;
       v.push_back(num);
   }
   int n, val;
   cin >> n;
   for (int i=0; i<n; i++){
       cin >> val;
       vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
       if (v[low - v.begin()] == val)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
   }
   return 0;
}
