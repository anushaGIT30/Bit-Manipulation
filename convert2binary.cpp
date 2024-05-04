#include <bits/stdc++.h>
using namespace std;

string convert2Binary(int n) {
    string res = "";
    while (n > 0) {
        if (n % 2 == 1) {
            res += '1';
        } else {
            res += '0';
        }
        n = n / 2;
    }
    
    // Reverse the string
    int start = 0, end = res.length() - 1;
    while (start < end) {
        swap(res[start], res[end]);
        start++;
        end--;
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    string s = convert2Binary(n);
    cout << s;
    return 0;
}
// tc : O(log₂n) because of using division operator