#include <bits/stdc++.h>
using namespace std;

void palindrome(char s[]) 
{ 
    int flag = 1;  
    int first = 0;
    int last = strlen(s) - 1;

    while (first <= last) {
        if (s[first] != s[last]) {
            flag = 0;  
            break;
        }
        first++;
        last--;
    }

    if (flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    char s[10];
    cin >> s;

    palindrome(s);

    return 0;
}
