// string reverse using recursion
// #include<stdio.h>
// int rev_str(){
//      char ch;
//     scanf("%c",&ch);
//         if(ch!='\n'){
//             rev_str();
//         }
//     printf("%c",ch);
// }


// int main(){
//      printf("Enter string:");
//     rev_str();
// }

#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char *str, int start, int end) {
    if (start >= end) {
        return;
    }
    // Swap the characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call with next set of indices
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Store the original string
    char originalStr[100];
    strcpy(originalStr, str);

    // Get the length of the string
    int len = strlen(str);

    // Reverse the string
    reverseString(str, 0, len - 1);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    // Print the original string
    printf("Original string: %s\n", originalStr);

    return 0;
}
