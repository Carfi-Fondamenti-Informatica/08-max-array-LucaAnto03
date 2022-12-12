#include <iostream>
#include "lib.h"

using namespace std;
float massimo ( float a [], int d) {
    cin >> d;
    if (d>0){
        for (int i=0; i<d; i++) {
            cin >> a[i];
        }
    }
float max=0; int p;
a[0]=max;
p=0;
for (int i=0; i<d; i++){
    if (a[i]>max) {
    max=a[i];
    p=i;
    }
} return max;
}
