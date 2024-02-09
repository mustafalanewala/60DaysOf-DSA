#include <iostream>
using namespace std;

int main() {
    long long int number;
    
    cout << "Enter a positive decimal number: ";
    cin >> number;

    cout << "Digits of the number from right to left: ";
    while (number > 0) {
        int digit = number % 10;
        cout << digit << " ";
        number /= 10;
    }
    cout << endl;

    return 0;
}
