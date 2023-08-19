#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
//! 1
int main(){
    int n;
    cin>>n;
    int a[n];
    int flag=1;
    if(n==1){
        cout<<"smax not exist ";
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=1;
    
    for(int i=n-2;i>=0;i--){
    if(a[i]!=a[n-1]){
        cout<<"smax is"<<a[i];
        break;

    }

    }
    
    if(i==1)
    cout<<"smax not exist";
}
//!2
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    int smax=a[1];
    int i;
    for( i=0;i<n;i++){
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax && a[i]!=max)
        smax=a[i];
    
    }
    if(i==a[1])
   cout<<"smax not exist";
   else 
   cout<<smax;
}
