#include <iostream>

using namespace std;

bool checkPrimeOrNotPrime(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            if (count > 1) {
                cout << i << endl;
                return false;
            }
            count++;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    if (!checkPrimeOrNotPrime(n)) {
        cout << n << " is not a prime number" << endl;
    } else {
        cout << n << " is a prime number" << endl;
    }
    return 0;
}
