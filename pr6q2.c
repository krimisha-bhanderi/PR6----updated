#include<stdio.h>

main() {
    char string[1000];
    int i;

    printf("Enter any string:");
 	gets(string);

    int frequency[26] = {0};
    for (i=0;string[i]!=0;i++) {

        frequency[string[i]-'a']+=1;
    }

    printf("The frequency of letter is:\n");
    for (i = 0; i < 26; i++) {

        if (frequency[i]!=0) {

            char ch = 'a' + i;
            printf("\t%c = %d\n", ch, frequency[i]);
        }
    }
}
