//WAP to check if the given year is a leap year or not. 
#include<stdio.h>
main(){
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("%d is a leap year",year);
	}
	else{
		printf("%d is not a leap year",year);
	}
}
