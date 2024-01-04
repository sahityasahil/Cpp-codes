#include <iostream>
using namespace std;

bool linearSearch(int a[], int n, int key) {
    for (int i=0; i<n; i++) {
        if (a[i] == key) return 1;
    }
    return 0;
}

int main() {
    int a[5] = {1,2,3,4,5};

    // int sum=0;
    // for (int i=0; i<5; i++) {
    //     sum = sum + a[i];
    // } 
    
    cout << linearSearch(a,5,6);

}