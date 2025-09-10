#include<stdio.h>
int main(){
	float billAmount, discountAmount;
	printf("Enter the bill amount:");
	scanf("%f",&billAmount);
	if(billAmount>5000){
	printf("A discount of ten percent would be applied\n");
	discountAmount=billAmount*0.10;
	printf("The final payable amount is %.2f", discountAmount);
    }
    else
    printf("No discount, The final payable amount is %.2f", billAmount);
    return 0;
	
}
