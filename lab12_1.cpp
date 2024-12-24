#include <iostream>
using namespace std;

// Function Prototype
int fibonacci(int x);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}

// Function Definition
int fibonacci(int x) {
    if (x == 0) {
        return 0;
    } else if (x == 1) {
        return 1;
    } else {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}
