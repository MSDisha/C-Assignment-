//WAP Find out length of string without using inbuilt function  
#include<stdio.h>
main(){
	char a[5];
	int i,len=0;
	printf("Enter Name: ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
	len++;	
	}
	printf("Length of string: %d",len);
}
