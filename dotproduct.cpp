// how are you
#include <iostream>
using namespace std;

int main() {
    double a[3] = {1.0, 3.0, -5.0};
    double b[3] = {4.0, -2.0, -1.0};

    double sum = 0.0;

    for (int i = 0; i < 3; i++) {
        sum += a[i] * b[i];
    }

    cout << "Dot product: " << sum << endl;

    return 0;
}

