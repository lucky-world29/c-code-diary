//
// Created by abina on 19-08-2025.
//


/*                         Method 1 */
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c",&ch);
//     switch(ch){
//         case 'a' : case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
//             printf("LowerCase");break;
//         case 'A' : case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
//             printf("UpperCase");
//
//
//     }
// }

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    switch(ch) {
        case 'a' ... 'z':   // GCC extension (not standard C)
            printf("LowerCase");
            break;

        case 'A' ... 'Z':   // GCC extension
            printf("UpperCase");
            break;

        default:
            printf("Not an alphabet");
    }
    return 0;
}