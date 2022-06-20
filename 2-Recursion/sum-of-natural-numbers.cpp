#include <iostream>

using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n > 0) {
        return (n + sumOfNaturalNumbers(n - 1));
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << sumOfNaturalNumbers(n) << endl;
    return 0;
}