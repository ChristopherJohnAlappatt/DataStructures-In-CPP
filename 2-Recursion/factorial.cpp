#include <iostream>

using namespace std;

int factorial(int n) {
    if (n > 0) {
        return (factorial(n - 1) * n);
    } else if (n <= 1) {
        return 1;
    }
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}

