//Piotr Milewski
//Systems pd10
//HW04 -- Demonstringing Code
//2017-09-28

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *src = "Hi, I'm the original string!";
    char dest[250] = "Who did you say I was? Am I some science guy?";
    //char dest[250] = "";

    printf("\n\"strcpy\" copies the array of characters(string) at a pointer to another pointer.\n");
    printf("The syntax of the function strcpy is as follows:\n\n");
    
    printf("strcpy(char *dest, char *src)\n");
    printf("-src -- this is the pointer to the string to be copied\n");
    printf("-dest -- this is the pointer to the destination array where the content is to be copied\n\n");

    printf("Source: %s\n", src); 
    printf("Destination: %s\n\n", dest);

    printf("Running strcpy( dest, src)\n\n");
    strcpy( dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n\n", dest);

    printf("------------------------------------------------\n");

    char dest2[250] = "Ey, what about me?";
    //char dest2[250] = "";

    printf("\n\"strncpy\" copies up to n characters from the array of characters(string) at a pointer to another pointer.\n");
    printf("When the length of the source is less than that of n, the remainder of the destination will be padded with null bytes.\n");
    printf("The syntax of the function strncpy is as follows:\n\n");

    printf("strncpy(char *dest, char *srs, int n)\n");
    printf("-src -- this is the pointer to the string to be copied\n");
    printf("-dest -- this is the pointer to the destination array where the content is to be copied\n");
    printf("-n -- the number of characters to be copied from source.\n\n");

    printf("Source: %s\n", src); 
    printf("Destination: %s\n\n", dest2);

    printf("Running strncpy( dest2, src, 11)\n\n");
    strncpy( dest2, src, 11);

    printf("Source: %s\n", src);
    printf("Destination: %s\n\n", dest2);

    return 0;
}
