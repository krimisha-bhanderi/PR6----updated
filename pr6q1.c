#include<stdio.h>
#include<string.h>

void main()
{

	char string[100];
	int i,length=0;
	int flag=0;


	printf("enter the string of your choice:-");
	scanf("%s",&string);


	for(i=0;string[i]!=NULL;i++){
		length++;
	}

    for(i=0;i<length;i++) {

        if (string[i]==string[length-i-1]) flag=1;

        else flag=0;
    }

    if(flag==1){
    	printf("The given string is palindrome");
	}

	else{
		printf("The given string is not palindrome");
	}

}

