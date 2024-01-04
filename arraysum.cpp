#include <iostream>
using namespace std;

int getSum(int arr[], int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int a[5] = {2, 5, 3, 7, 1};
    int ans = getSum(a, 5);
    cout << "Sum is : " << ans << endl;
}