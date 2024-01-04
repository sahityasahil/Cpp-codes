#include <iostream>
using namespace std;

bool binarySearch(int* arr, int start, int end, int key) {
    // base case
    if (start > end) 
        return false;
    
    int mid = start + (end-start)/2;
    // recursion
    bool ans;
    if (arr[mid] > key)
        ans = binarySearch(arr, start, mid-1, key);
    if (arr[mid] < key)
        ans = binarySearch(arr, mid+1, end, key);
    return ans;
}

int main() {
    int a[6] = {2,9,4,1,12,11};
    int k = 4;
    bool ans = binarySearch(a, 0, 5, k);
    if (ans) 
        cout << "Key is present" << endl;
    else cout << "Key is absent" << endl;
}