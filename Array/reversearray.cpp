#include <iostream>
using  namespace std;
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
//     cout<<" REVERCE ARRAY"<<endl;
//     for(int i=n-1;i>=0;i--){
//         cout<<a[i];
//     }

   
// }
//! unother way

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     cout<<"ARRAY ";
//     for(int i=0;i<n;i++){
//         cout<<a[i];
//     }
//     cout<<"REVERCE ARRAY ";
//     for(int i=0;i<n/2;i++){
//         int temp;
//         temp=a[i];
//         a[i]=a[n-i-1];
//         a[n-i-1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i];
//     }

// }
//! O(N)   O(1)
#include <algorithm>
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"ARRAY ";
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    reverse(a,a+n);
     for(int i=0;i<n;i++){
        cout<<a[i];
    }

}