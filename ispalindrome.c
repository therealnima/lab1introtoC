#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void reverse_string(char *str){
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
    char temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
}}



int main() {

    char userinput[100];

    printf("Enter a string: ");

    fgets(userinput, 100, stdin);

    userinput[strcspn(userinput, "\n")] = '\0';

    printf("you entered %s.\n", userinput);

    int length = strlen(userinput);
    printf("Length: %d\n", length);

    char rev[100];
    strcpy(rev,userinput);
    reverse_string(rev);

    if (strcmp(userinput, rev)==0){

        printf("It is a palindrome\n");
        return 0;}
    else{
        printf("It is not a palindrome\n");
        return 0;
    }


    return 0;
}
