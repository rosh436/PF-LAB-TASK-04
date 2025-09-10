#include<stdio.h>
int main(){
	int userAge;
	printf("Enter your age: ");
	scanf("%d", &userAge);
	if(userAge>=18)
	printf("\"Eligible to Vote\"");
	else
	printf("\"Not Eligible\"");
	return 0;
}
