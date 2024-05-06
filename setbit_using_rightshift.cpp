#include<iostream>
using namespace std;

bool is_setbit(int n, int i) {
    // Right shift the number 'n' by 'i' positions
    // If the ith bit is set, the result will be non-zero
    return (n >> i) & 1;
}

int main() {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position to check (0-indexed): ";
    cin >> i;
    
    bool result = is_setbit(n, i);
    if (result) {
        cout << "The " << i << "th bit is set." << endl;
    } else {
        cout << "The " << i << "th bit is not set." << endl;
    }
    
    return 0;
}
