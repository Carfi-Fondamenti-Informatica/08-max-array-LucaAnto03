#include <iostream>
#include "lib.h"

using namespace std;
int main() {
    int d=0;
    cin >> d;
    float a[d];
    for (int i=0; i<d; i++) {
        cin >> a[i];
        }
    cout << massimo (a, d);
    return 0;
}
