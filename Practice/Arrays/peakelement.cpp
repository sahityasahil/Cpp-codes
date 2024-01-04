#include <iostream>
using namespace std;

int peakIndex(int a[], int n) {
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    while (s<e) { 
        if (a[mid] < a[mid+1]) {
            s = mid+1;
        }
        else e = mid;
        mid = s + (e-s)/2;
    }
    return s;
}

int main() {
    int a[7] = {1,2,4,10,9,5,3};
    int i = peakIndex(a,7);
    cout << i << endl;
    cout << "Peak element is : " << a[i];
}