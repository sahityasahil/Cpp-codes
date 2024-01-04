#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int s=0, e=size-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s <= e) {
        if(arr[mid] == key) {
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < key) {
            s = mid+1;
        }
        else e = mid-1;

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {
    int s=0, e=size-1
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s <= e) {
        if(arr[mid] == key) {
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] < key) {
            s = mid+1;
        }
        else e = mid-1;

        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int a[7];
    int k;
    cout << "Enter your array :";
    for(int i=0; i<7; i++) {
        cin >> a[i];
    }
    cout << "Enter the key :";
    cin >> k;
    int f = firstOcc(a, 7, k);
    int l = lastOcc(a, 7, k);
    cout << f << " " << l << endl;
}