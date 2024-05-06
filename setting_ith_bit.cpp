#include<iostream>
#include<string>
using namespace std;

int setting_the_ithbit(int n, int i) {
    // Create a mask with only the ith bit set to 1
    int mask = 1 << i;
    
    // Perform bitwise OR operation between n and the mask
    // This sets the ith bit of n to 1 if it was previously 0
    return n | mask;
}

int main() {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position to set (0-indexed): ";
    cin >> i;
    
    int result = setting_the_ithbit(n, i);
    cout << "After setting the " << i << "th bit, the number is: " << result << endl;
    
    return 0;
}
