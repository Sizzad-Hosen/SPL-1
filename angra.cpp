#include <iostream>
#include <cstring>
using namespace std;

bool areAnagrams(string str1, string str2) {
  

    if (str1.length() != str2.length()) {
        return false;
    }

 
    int count[256] = {0}; 


    for (int i = 0; i < str1.length(); i++) {
        count[str1[i]]++; 
        count[str2[i]]--;  
    }

  
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false; 
        }
    }

    return true;  
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
