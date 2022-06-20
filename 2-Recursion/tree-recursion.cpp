#include <iostream>

using namespace std;

int fun(int n) {
    if (n > 0) {
        cout << n << endl;
        fun(n - 1);
        fun(n - 1);
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
