#include <iostream>
using  namespace std;
#include <bits/stdc++.h> 
//! check continously present or not
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int m;
//     cin>>m;
//     int b[m];
//     for(int i=0;i<m;i++){
//         cin>>b[i];
//     }
//     int flag=0,i,j;
//         for(int i=0;i<n-m;i++){
//             flag=1;
//             for(int j=0;j<m;j++){
                
//                 if(a[i+j]!=b[j]){
                    
//                    flag=0;
//                    break;
//                 }
//             }
//             if(flag==1)
//             break;
//         }
        
    
//     if(flag){
//         cout<<" FOUND";
//     }
//     else
//     cout<<"NOT FOUND";
    
// }
//! check if present or not  //! o(n^2)
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int m;
//     cin>>m;
//     int b[m];
//     for(int i=0;i<m;i++){
//         cin>>b[i];
//     }
//     int c=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i]==b[j]){
//                 c++;
//             }

//         }
//     }
//     if(c==m){
//         cout<<"FOUND";

//     }
//     else
//     cout<<"NOT FOUND";
// }
//! check if present or not  //! o(nlogn)
 #include <iostream>
#include <algorithm>

// int main() {
//     int n;
//     std::cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }

//     int m;
//     std::cin >> m;
//     int b[m];
//     for (int i = 0; i < m; i++) {
//         std::cin >> b[i];
//     }

//     std::sort(a, a + n);
//     std::sort(b, b + m);

//     int i = 0, j = 0;
//     while (i < n && j < m) {
//         if (a[i] == b[j]) {
//             i++;
//             j++;
//         } else if (a[i] < b[j]) {
//             i++;
//         } else {
//             std::cout << " FOUND";
//             return 0;
//         }
//     }

//     if (i < n) {
//         std::cout << " FOUND";
//     } else {
//         std::cout << " NOT FOUND";
//     }

//     return 0;
// }

// //! check if present or not  //! o(n)
#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int m;
    std::cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    int i;
    for (i = 0; i < m; i++) {
        if (freq[b[i]] > 0) {
            freq[b[i]]--;
        } else {
            std::cout << "NOT FOUND";
            break;
        }
    }

    if (i == m) {
        std::cout << "FOUND";
    }

    return 0;
}
