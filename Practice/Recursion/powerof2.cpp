#include <iostream>
using namespace std;

int powerOfTwo(int n) {
    //We know 2^n = 2 * (2^n-1)
    if (n==0)
        return 1;
    int ans = 2 * powerOfTwo(n-1);
    return ans;
}

int main() {
    int num;
    cin >> num;
    cout << powerOfTwo(num) << endl;
}