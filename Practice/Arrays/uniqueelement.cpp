#include <iostream>
using namespace std;

int uniqueElement(int a[], int n) {
    int ans=0;
    for (int i=0; i<n; i++) {
        ans = ans^a[i];
    }
    return ans;
}

int main() {
    int a[5] = {1,1,3,4,4};
    cout << uniqueElement(a,5);
}