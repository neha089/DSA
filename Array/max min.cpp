#include <iostream>
#include<bits/stdc++.h>
using  namespace std;
//!o(N) O(N)
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"ARRAY"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i];
//     }
//    int min=a[0];
//    int max=a[0];

//     for(int i=n-1;i>=0;i--){
//         cout<<a[i];
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//         if(a[i]<min){
//             min=a[i];
//         }
//     }
//     cout<<"MAX IS"<<max<<endl;
//     cout<<"MIN IS"<<min<<endl;

   
// }
//! unother way O(N)   o(N)
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"ARRAY"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i];
//     }
//     int i=0;
//     int max,min;
//     if(n%2==0){
//         if(a[i]>a[i+1]){
//             max=a[i+1];
//             min=a[i];
//         }
//         else{
//             max=a[i];
//             min=a[i+1];
//         }
//     }
//     else{
//         max=a[i];
//         min=a[i];
//         i=1;
//     }
//     while(i<n-1){
//         if(a[i]>a[i+1]){
//             if(a[i]>max){
//                 max=a[i];

//             }
//             if(a[i+1]<min){
//                 min=a[i+1];
//             }
//         }
//         else{
//             if(a[i+1]>max){
//                 max=a[i+1];
//             }
//             if(a[i]<min){
//                 min=a[i];
//             }
//         }
//         i+=2;
//     }
//      cout<<"MAX IS"<<max<<endl;
//     cout<<"MIN IS"<<min<<endl;
    
// }
//!other way O(nlonn) O(N)

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     cout<<"MIN"<<a[0];
//     cout<<"MAX"<<a[n-1];
    
// }
//!other way O(n) O(1)

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"MIN"<<*min_element(a,a+n);
    cout<<"MAX"<<*max_element(a,a+n);
}

    