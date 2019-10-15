#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1=0,num2=1,sum=0,num,inc=0;
	printf("enter a number of terms after num1 and num2\n");
	scanf("%d",&num);
	printf("the result is\n");
//	printing out the values of num1 and num2 which are first terms in this game
		printf("%d\n",num1);
			printf("%d\n",num2);
			
	for(;inc<num;inc++){
		//summing up the first terms to find the next terms
		sum=num1+num2;
		//assigning the first term to next term because it can be incremented to sum up these terms till the max one
		num1=num2;
		num2=sum;
		//pop out the result in this final stage
			printf("%d\n",sum);
	}
	return 0;
}
