#include <iostream>
using namespace std;

void reverse(int a[], int n) {
    int s=0;
    int e=n-1;
    while (s<=e) {
        swap(a[s],a[e]);
        s++;
        e--;
    }
}

int main() {
    int a[5] = {1,2,3,4,5};
    reverse(a,5);
    for (int i=0; i<5; i++) {
        cout << a[i] << " ";
    }
}