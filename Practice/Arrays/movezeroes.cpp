#include <iostream>
using namespace std;

void moveZeroes(int a[], int n) {
    int j=0;
    for (int i=0; i<n; i++) {
        if(a[j] != 0)
        swap(a[j],a[i]);
        j++;
    }
}

int main () {
    int a[7] = {1,4,0,5,0,0,6};
    moveZeroes(a,7);
    for (int i=0; i<7; i++) {
        cout << a[i] << " ";
    }
}


/*    
void moveZeroes(vector<int>& nums) {
    int i=0;
    for (int j=0; j<nums.size(); j++) {
        if (nums[j] != 0) {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}
*/