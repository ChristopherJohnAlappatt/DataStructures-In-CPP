#include <iostream>

using namespace std;

int fun(int n) {
    if (n > 0) {
        return (fun(n - 1) + n);
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
