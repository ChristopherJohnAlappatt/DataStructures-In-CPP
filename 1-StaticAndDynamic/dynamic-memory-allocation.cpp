#include <iostream>

using namespace std;

int main() {

    int *ptr;
    int size;
    cout << "Enter the number of values you wish to enter : " << endl;
    cin >> size;
    ptr = new int[size];
    cout << "Enter values : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> ptr[i];
    }
    cout << "Entered values are as follows : " << endl;
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << endl;
    }
    return 0;
}
