#include <iostream>
#include <vector>
using namespace std;
//!O(log n) or O(n)   space O(1)
// int main(){
//     int n;
//     cin>>n;
//     int x=0;
//     while(n!=0){
      
//         x++;
//         n=n/10;
//     }
//     cout<<x;
// }
//!O(log n) space O(log n)
// int countdigit(long long n){
//    if(n/10 ==0)
//    return 1;
//    cout<<countdigit(n/10)<<endl;
//    return 1+countdigit(n/10);
// }
// int main(){
//  long long  n;
//     cin>>n;
//     cout<<countdigit(n);   
// }
//!O(1) spcae O(1)

// Log based C++ program to count number of
// digits in a number
#include <bits/stdc++.h>
// int main(){
//  long long  n;
//     cin>>n;
// //     cout<<floor(log10(n)+1);
// }
//!O(1) space O(n)
int main(){
 long long  n;
    cin>>n;
    string num;
    num=to_string(n);
    cout<<num.size();
}


