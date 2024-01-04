#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
    int max = -9999;
    for (int i=0; i<size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int getMin(int arr[], int size) {
    int min = 9999;
    for (int i=0; i<size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int main () {
    int a[5] = {2, 5, 87, -14, 54};
    int maxi = getMax(a, 5);
    int mini = getMin(a, 5);

    cout << "Max Value : " << maxi << endl;
    cout << "Min Value : " << mini << endl;
}