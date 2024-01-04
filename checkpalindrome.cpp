#include <iostream>
using namespace std;


char lowerCase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c;
    }
    else {
        char temp = c - 'A' + 'a';
        return temp;
    }   
}

bool checkPalindrome(char ch[], int n) {
    int s=0;
    int e=n-1;
    while (s<=e) {
        if (lowerCase(ch[s]) != lowerCase(ch[e])) return 0;
        else {
            s++;
            e--;
        }
    }
    return 1;
}

int main() {
    char ch[4];
    cout << "Enter the string : ";
    cin >> ch;
    if (checkPalindrome(ch, 4)) {
        cout << "Palindrome" << endl;
    }
    else cout << "Not a Palindrome" << endl;
}