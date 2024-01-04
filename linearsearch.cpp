#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for (int i=0; i<size; i++) {
        if (key==arr[i]) return 1;
    }
    return 0;
}

int main () {
    int a[5];
    int k;
    for (int j=0; j<5; j++) {
        cin >> a[j];
    }
    cout << "Enter the element to be searched : ";
    cin >> k;

    bool item = search(a, 5, k);
    if (item) {
        cout << "Element is present";
    }
    else cout << "Element is absent";
}