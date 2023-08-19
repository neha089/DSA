#include <iostream>
using  namespace std;
#include <bits/stdc++.h> 
//! O(N)  O(1)
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     int zero=0,one=0,two=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(a[i]==0)
//         zero++;
//         if(a[i]==1)
//         one++;
//         if(a[i]==2)
//         two++;
//     }
//     for(int i=0;i<zero;i++){
//         cout<<"0"<<" ";
//     }
//     for(int i=0;i<one;i++){
//         cout<<"1"<<" ";
//     }
//     for(int i=0;i<two;i++){
//         cout<<"2"<<" ";
//     }

    
// }
//!unother way  o(N)    O(1)
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int h=n-1,l=0,m=0;
    while(m<=h){
        if(a[m]==1){
            m++;
        }
        else if(a[m]==0){
            swap(a[m],a[l]);
            m++;
            l++;
        }
        else{
            swap(a[m],a[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
