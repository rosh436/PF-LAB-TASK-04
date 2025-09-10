#include<stdio.h>
int main(){
	int balance=50000, withDrawal;
	printf("Enter the amount that you would like to withdraw: ");
	scanf("%d", &withDrawal);
	if(balance>withDrawal && (withDrawal%500==0))
	printf("Withdrawal is allowed");
	else
	printf("Withdrawal rejected");
	return 0;
}
