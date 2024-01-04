#include <iostream>
using namespace std;

// We have to assume that the array passed is sorted either in asc or desc order

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    
    while(start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        else if (key < arr[mid]) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main() {
    int a[5];
    int k;
    cout << "Enter your array :";
    for(int i=0; i<5; i++) {
        cin >> a[i];
    }
    cout << "Enter the element to be searched :";
    cin >> k;
    int index = binarySearch(a, 5, k);
    cout << index << endl;
}