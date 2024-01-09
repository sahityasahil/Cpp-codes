#include <iostream>
using namespace std;

void mergeArray(int *arr, int s, int e) {
    // in this function we will find the left and right arrays and also merge it together

    int mid = s + (e-s)/2;
    int len1 = mid - s + 1; //size of left array
    int len2 = e - mid; //size of right array

    int* left = new int[len1]; //creating left array dynamically in heap memory
    int* right = new int[len2]; //creating right array dynamically in heap memory

    int originalArrayIndex = s; //initialising the original array index to starting value to start copying

    //copying values from original array to the left array
    for (int i=0; i<len1; i++) {
        left[i] = arr[originalArrayIndex++];
    }

    originalArrayIndex = mid+1; // as till the mid index the values copied belongs to left array
    //copying values from original array to the right array
    for (int i=0; i<len2; i++) {
        right[i] = arr[originalArrayIndex++];
    }

    //begin to merge the two sorted arrays
    int indexLeft = 0;
    int indexRight = 0;
    originalArrayIndex = s;

    while (indexLeft < len1 && indexRight < len2) {
        if (left[indexLeft] < right[indexRight]) {
            arr[originalArrayIndex++] = left[indexLeft++];
        }
        else {
            arr[originalArrayIndex++] = right[indexRight++];
        }
    }

    while (indexLeft < len1) {
        arr[originalArrayIndex++] = left[indexLeft++];
    }

    while (indexRight < len2) {
        arr[originalArrayIndex++] = right[indexRight++];
    }
}

void mergeSort(int *arr, int s, int e) {

    // base case
    if (s >= e) return;

    int mid = s + (e-s)/2;

    //sorting left array
    mergeSort(arr, s, mid);

    //sorting right array
    mergeSort(arr, mid+1, e);

    //merging two sorted arrays (left and right)
    mergeArray(arr, s, e);
}


int main() {
    int arr[7] = {5, 21, 5, 66, 74, 1, 0};
    mergeSort(arr, 0, 6);
    for (int i=0; i<6; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}