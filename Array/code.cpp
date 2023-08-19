#include <iostream>
#include <vector>
using namespace std;

// bool checkSubsequence(vector<int>& A, int B) {
//     int n = A.size();

//     for (int mask = 1; mask < (1 << n); mask++) {
//         int bitwiseAND = 0;
//         for (int i = 0; i < n; i++) {
//             if (mask & (1 << i)) {
//                 bitwiseAND &= A[i];
//             }
//         }
//         if (bitwiseAND == B) {
//             return true;
//         }
//     }

//     return false;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, B;
//         cin >> N >> B;

//         vector<int> A(N);
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//         }

//         bool existsSubsequence = checkSubsequence(A, B);
//         if (existsSubsequence) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

// string rotateString(int N, string S, string T, string U) {
//     int K = (T[0] - S[0] + 26) % 26;
//     string rotated = "";
//     for (char c : U) {
//         rotated += (c - 'a' + K) % 26 + 'a';
//     }
//     return rotated;
// }

// int main() {
//     int Q;
//     cin >> Q;
//     while (Q--) {
//         int N;
//         cin >> N;
//         string S, T, U;
//         cin >> S >> T >> U;
//         string result = rotateString(N, S, T, U);
//         cout << result << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <stack>
using namespace std;

// int countSchrodingerSmileys(int N, string S) {
//     int count = 0;
//     stack<char> parentheses;
    
//     for (int i = 0; i < N; i++) {
//         if (S[i] == ':') {
//             while (!parentheses.empty())
//                 parentheses.pop();
//         } else if (S[i] == ')') {
//             int openingCount = 0;
//             for (int j = i + 1; j < N; j++) {
//                 if (S[j] == '(') {
//                     openingCount++;
//                 } else if (S[j] == ':') {
//                     break;
//                 } else if (S[j] == ')' && openingCount > 0) {
//                     count++;
//                     openingCount--;
//                 }
//             }
//         }
//     }
    
//     return count;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         string S;
//         cin >> S;
        
//         int result = countSchrodingerSmileys(N, S);
//         cout << result << endl;
//     }
    
//     return 0;
// }
#include <iostream>
using namespace std;

// int countSchrodingerSmileys(int N, string S) {
//     int count = 0;
    
//     for (int i = 0; i < N; i++) {
//         if (S[i] == ':') {
//             int left = -1, right = -1;
//             for (int j = i - 1; j >= 0; j--) {
//                 if (S[j] == ':') {
//                     left = j;
//                     break;
//                 }
//             }
//             for (int j = i + 1; j < N; j++) {
//                 if (S[j] == ':') {
//                     right = j;
//                     break;
//                 }
//             }
//             if (left != -1 && right != -1) {
//                 bool hasLeftParentheses = false;
//                 for (int j = left + 1; j < right; j++) {
//                     if (S[j] == '(') {
//                         hasLeftParentheses = true;
//                         break;
//                     }
//                 }
//                 if (!hasLeftParentheses) {
//                     count++;
//                 }
//             }
//         }
//     }
    
//     return count;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         string S;
//         cin >> S;
        
//         int result = countSchrodingerSmileys(N, S);
//         cout << result << endl;
//     }
    
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;
int solve(string s) {
    int n = s.length();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == ':') {
            int cnt = 0;
            for (int j = i + 1; j < n; j++) {
                if (s[j] == '(') {
                    cnt += 1;
                } else if (s[j] == ')') {
                    cnt -= 1;
                }
                if (cnt == 0) {
                    ans += 1;
                    break;
                }
            }
        }
    }
    return ans;
}
int main() {
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}