#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *startPtr = str; 
    char *endPtr = str + strlen(str) - 1; 
    char temp;


    while (endPtr > startPtr) {

        temp = *endPtr;
        *endPtr = *startPtr;
        *startPtr = temp;


        startPtr++;
        endPtr--;
    }
}

int main() {
    char str[100]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    reverseString(str); 

    printf("Reversed string: %s\n", str); 

    return 0;
}
