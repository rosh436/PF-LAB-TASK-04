#include<stdio.h>
int main(){
	int numOne,numTwo,numThree;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &numOne,&numTwo,&numThree);
	if (numOne>numTwo) {
        if (numOne>numThree) 
        printf("The largest number is %d\n", numOne);
        else
        printf("The largest number is %d\n", numThree);

    } else {
        if (numTwo>numThree) 
        printf("The largest number is %d\n", numTwo);
        else
        printf("The largest number is %d\n", numThree);
    
    }

    return 0;
}

    
