#include <iostream>
using namespace std;

int getLength(char s[]) {
    int j=0;
    int cnt=0;
    while (s[j] != '\0') {
        cnt++;
        j++;
    }
    return cnt;
}

void reverseString(char ch[], int n) {
    int s=0;
    int e=n-1;
    while (s<=e) {
        swap (ch[s], ch[e]);
        s++;
        e--;
    }
}

int main () {
    char s[10];
    cout << "Enter the string : ";
    cin >> s;
    cout << "Original String : " << s << endl;
    reverseString(s, getLength(s));
    cout << "Reversed String : " << s << endl;
}