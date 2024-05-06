#include<iostream>
using namespace std;

bool is_setbit(int n, int i) {
    string binary = "";
    
    // Convert the number to binary representation
    while (n > 0) {
        if (n % 2 == 1) {
            binary = '1' + binary;
        } else {
            binary = '0' + binary;
        }
        n = n / 2;
    }
    
    // Check if the ith bit is set
    int len = binary.length() - 1;
    for (int j = len; j >= 0; j--) {
        if (binary[j] == '1' && len - j == i) {
            return true;
        }
    }
    
    return false;
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
