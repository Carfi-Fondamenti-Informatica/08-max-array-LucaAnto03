#include <iostream>
#include "lib.h"

using namespace std;
float massimo (float b [], int d) {
    float max=b[0];
    for (int i=0; i<d; i++){
        if (b[i]>max){
            max=b[i];
        }
    } return max;
}
