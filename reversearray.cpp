#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start=0;
    int end=size-1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main () {
    int a[5];
    for (int j=0; j<5; j++) {
        cin >> a[j];
    }
    cout << "Original Array :" << endl;
    for (int j=0; j<5; j++) {
        cout << a[j] << " ";
    }
        cout << endl;

    reverse(a, 5);
    cout << "Reversed Array :" << endl;
    for (int j=0; j<5; j++) {
        cout << a[j] << " ";
    }
    cout << endl;
}