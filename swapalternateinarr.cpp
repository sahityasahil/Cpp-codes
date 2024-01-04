#include <iostream>
using namespace std;

void swapalt(int arr[], int size) {
    for(int i=0; i<size; i++) {
        if(i<size) {
            swap(arr[i], arr[i+1]);
        }
        i+=2;
    }
    }
    
int main () {
    int a[5] = {2, 5, 8, 11, 15};
    cout << "Original Array :" << endl;
    for (int j=0; j<5; j++) {
        cout << a[j] << " ";
    }
        cout << endl;

    swapalt(a, 5);
    cout << "Swapped Array :" << endl;
    for (int j=0; j<5; j++) {
        cout << a[j] << " ";
    }
    cout << endl;
}