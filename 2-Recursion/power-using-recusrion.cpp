#include <iostream>

using namespace std;

int power(int m, int n) {
    if (n == 0) {
        return 1;
    } else {
        return m * power(m, n - 1);
    }
}

int main() {
    int m, n;
    cout << "Enter a base number : " << endl;
    cin >> m;
    cout << "Enter a exponent number : " << endl;
    cin >> n;

    cout << power(m, n) << endl;
    return 0;
}

