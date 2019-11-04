#include<stdio.h>
#include<conio.h>
#define SIZE 5
int top =-1;
struct book{
	int id;
	int year;
	char author[20];
	char title[20];
};
struct book bk[SIZE];
int i=0;
void main()
{
	
   int choice;
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the author,id,year,title consquntley to be insert: ");
		 scanf("%s \t %d \t %d \t %s",&bk[i].author,&bk[i].id,&bk[i].year,&bk[i].title);
		 push(bk);
		 i++;
		 break; 
		 
	 case 2: pop();
	 	 i--;
		 break;
	 case 3: display();
		 break;
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void push(struct book bk[]){
   if(top == SIZE-1)
      printf("\nStack overflow is occured cannot insert!!");
   else{
      top++;
      bk[top] = bk[i];
      printf("\nInsertion successfully!!!");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty or underflow is occured!!Deletion is not possible!");
   else{
      printf("\nDeleted : %d\t %d\t %s\t %s\n",bk[top].id,bk[top].year,bk[top].title,bk[top].author);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\t %d\t %s\t %s %\n",bk[i].id,bk[i].year,bk[i].title,bk[i].author);
   }
}
