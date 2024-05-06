#include<iostream>
using namespace std;

bool is_setbit(int n, int i) {
    
    int k = 1 << i;
    
    
    return (n & k) != 0;
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
