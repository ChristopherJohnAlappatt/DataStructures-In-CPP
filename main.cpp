#include <iostream>

using namespace std;

int main() {

//    Dynamic declaration of Array
    int *p;
    p = new int[4];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;

//    printing P
    cout << "p = ";
    for (int i = 0; i < 4; i++) {
        cout << p[i] << "  ";
    }
//    Increase size of an Array
    int *q = new int[10];
    for (int i = 0; i < 4; i++) {
        q[i] = p[i];
    }
    q[4] = 5;
//    printing Q
    cout << endl << "q = ";
    for (int i = 0; i < 5; i++) {
        cout << q[i] << "  ";
    }
    delete[]p;
    p = q;
    q = NULL;
    return 0;
}