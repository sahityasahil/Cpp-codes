#include <iostream>
using namespace std;

void swapAlt(int a[], int n) {
    for (int i=0; i<n; i+=2) {
        if (i+1 < n)
        swap(a[i],a[i+1]);
    }
}

int main() {
    int a[5] = {1,2,3,4,5};
    swapAlt(a,5);
    for (int i=0; i<5; i++) {
        cout << a[i] << " ";
    }
}