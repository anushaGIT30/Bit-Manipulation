#include<bits/stdc++.h>
using namespace std;

int convert_Binary_to_decimal(string s) {
    // We are traversing in a backward direction, i.e., from right to left
    int len = s.length();
    int num = 0, p = 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            num += p;
        }
        p *= 2;
    }
    return num;
}

int main() {
    string s;
    cin >> s;
    int ans = convert_Binary_to_decimal(s);
    cout << ans;
    return 0;
}
