#include<stdio.h>
int main(){
	int ticketPrice, userAge;
	printf("Enter your age: ");
	scanf("%d", &userAge);
	if(userAge<12)
	printf("the ticket price would be 200");
	    else{
	    if(userAge>=12&&userAge<18)
	    printf("The ticket price would be 300");
	     else
	     if(userAge>=18&&userAge<=60)
	     printf("The ticket price would be 500");
	     else
	     printf("The ticket price would be 250");
    }
}
