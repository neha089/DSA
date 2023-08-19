#include <iostream>
using  namespace std;
#include <bits/stdc++.h> 
// int main(){
//     int i=0;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n-1;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     for(i=0;i<n-1;i++){
//         if(a[i]+1!=a[i+1]){
//             cout<<"MISSING NUM IS"<<a[i]+1<<endl;
//             break;
//         }
        
//     }

//     if(i==n-1){
//         cout<<"MISSING NOT FOUND"<<endl;
//     }

// }
//!unother way O(N)    O(1)
// int main(){
//     int i=0;
//     int n;
//     cin>>n;
//     int a[n];
//     int sum=0;
//     for(int i=0;i<n-1;i++){
//         cin>>a[i];
//         sum+=a[i];
//     }
//     int ans=(n*(n+1))/2;
//     cout<<"MISSING IS "<<ans-sum;

// }
//! O(N)  O(N)
// int main(){
//     int i=0;
//     int n;
//     cin>>n;
//     int a[n];
//     int temp[n];
//     for(int i=0;i<n-1;i++){
//         cin>>a[i];
//         temp[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         temp[a[i]-1]=1;
//     }
//     int ans;
//     for(int i=0;i<n;i++){
//         if(temp[i]==0)
//         ans=i+1;

//     }
//     cout<<"MISSING NUM"<<ans;
    
// }
//! O(N)  O(1)
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++) {
        std::cin >> a[i];
    }

   int x1 = a[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
    int i;
 
    for (i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 

    std::cout << (x1 ^ x2);

    return 0;
}
