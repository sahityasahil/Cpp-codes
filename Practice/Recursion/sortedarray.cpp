#include <iostream>
using namespace std;

bool sorted(int* arr, int n) {
    // base case
    if (n==0 || n==1) 
        return true;
    
    if (arr[1] > arr[0])
        return false;
    
    // recursion
    else {
        bool remaining = sorted(arr+1, n-1);
        return remaining;
    }
}

int main() {
    int arr1[6] = {2,1,3,5,4,0};
    int arr2[6] = {2,5,10,11,13,16};
    int s = 6;

    bool ans = sorted(arr1,s);
    if (ans) 
        cout << "Arr1 is sorted" << endl;
    else cout << "Arr1 is not sorted" << endl;
}