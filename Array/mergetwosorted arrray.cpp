#include <iostream>
using  namespace std;
#include <bits/stdc++.h> 
//!O(N^2) 
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int a[n],b[m];
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     for(int i=0;i<m;i++){
//         cin>>b[i];

//     }
//     int i=0,j=0,k=0;
//   int ans[m+n];
// for(int i=0;i<n;){
//     for(int j=0;j<m;){
//         if(a[i]<b[j])
//         ans[k++]=a[i++];
//         else
//         ans[k++]=b[j++];
     
       
//     }
// }
//  for(int i=0;i<k;i++){
//     cout<<ans[i]<<" ";
//  }
          
// }
//!O(N+M * LOG(M+N))   O(1)
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int a[n],b[m];
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     for(int i=0;i<m;i++){
//         cin>>b[i];

//     }
//     int i=0,j=0,k=0;
//     int ans[m+n];
//     while(i<n){
//         ans[k++]=a[i++];
//     }
//     while(j<m){
//         ans[k++]=b[j++];
//     }
//     sort(ans,ans+n+m);
//     for(int i=0;i<k;i++){
//     cout<<ans[i]<<" ";
//  }

// }
//!O(N+M)   O(N+M)
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int a[n],b[m];
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     for(int i=0;i<m;i++){
//         cin>>b[i];

//     }
//     int i=0,j=0,k=0;
//   int ans[m+n];

// while(i<n && j<m){
//     if(a[i] < b[j])
//     ans[k++]=a[i++];
//     else
//     ans[k++]=b[j++];
// }
// while(i<n){
//         ans[k++]=a[i++];
//     }
//     while(j<m){
//         ans[k++]=b[j++];
//     }

//  for(int i=0;i<k;i++){
//     cout<<ans[i]<<" ";
//  }
          
// }
//!O(NLONG + MLOGM)    O(N)
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<m;i++){
        cin>>b[i];

    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++){
        mp[b[i]]++;
    }
    for(auto j:mp){
        for(int i=0;i<j.second;i++){
            cout<<j.first<<" ";
        }
    }
}