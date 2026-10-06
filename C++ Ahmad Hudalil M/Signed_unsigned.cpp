#include <iostream>
using namespace std;

int main() {
    int signedInt = -10;
    unsigned int unsignedInt = 5;

    cout << "Signed Integer: " << signedInt << endl;
    cout << "Unsigned Integer: " << unsignedInt << endl;

    // Comparing signed and unsigned integers
    if (signedInt < unsignedInt) {
        cout << "Signed integer is less than unsigned integer." << endl;
    } else {
        cout << "Signed integer is not less than unsigned integer." << endl;
    }

    // Demonstrating implicit conversion
    unsigned int result = signedInt + unsignedInt; // signedInt is converted to unsigned
    cout << "Result of adding signed and unsigned: " << result << endl;

    return 0;
}