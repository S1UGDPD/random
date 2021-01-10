#include <iostream>
using namespace std;

int mult(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + mult(a, b-1);
    }
}

int main() {
    int a = 4;
    int b = 3;
    cout << mult(a, b);

    return 0;
}