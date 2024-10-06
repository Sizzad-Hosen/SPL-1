
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void concatenate(char* destination, const char* source) {
   
    while (*destination) {
        destination++;
    }
    

    while (*source) {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

int main() {
    char s[100], s2[100];

    cin.getline(s, 100); 

    cin.getline(s2, 100); 

 
    concatenate(s, s2);

    cout << "Concatenated string: " << s << endl;

    return 0;
}
