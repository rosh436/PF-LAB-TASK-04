#include<stdio.h>
int main(){
	int userSalary, userAge;
	printf("Enter your salary:");
	scanf("%d", &userSalary);
	printf("Enter your age:");
	scanf("%d", &userAge);
	if(userSalary>=40000 && userAge>=25)
	printf("Loan has been approved");
	else
	printf("Loan has not been approved");
	return 0;
}
