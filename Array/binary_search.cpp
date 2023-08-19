#include <iostream>
#include <algorithm>
using namespace std;
//! time o(logn)  space o(1)
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    int find;
    cin >> find;
    
    int left = 0;
    int right = n - 1;
    int index = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == find) {
            index = mid;
            break;
        } else if (find < a[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    if (index != -1) {
        cout << "Index is " << index << endl;
    } else {
        cout << "Not found!" << endl;
    }
    
    return 0;
}
