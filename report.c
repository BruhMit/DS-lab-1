#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	char name[20];
		char id[10];
			char cname[20];
				char ccode[10];
				char grade[10];
			int credit; 
};

int main(int argc, char *argv[]) {
	int size,counter;
	printf("please enter the number of students\n");
	scanf("%d",&size);
	struct student *st;
	st=(struct student*)malloc(size*sizeof(struct student));
	for(counter=0;counter<size;counter++){
			printf("please enter sudent name,id,course code,course title ,grade and credit for student %d\n",counter+1);
	scanf("%s%s%s%s%s%d",&st[counter].name,&st[counter].id, st[counter].ccode,&st[counter].cname,&st[counter].grade,&st[counter].credit);
		
	}
	display(st,size);
	return 0;
	
}
void display(struct student *st,int num){
	
int	counter;   
printf("Mekelle university grade report\n------------------------------------------------\n\n");
for(counter=0;counter<num;counter++){
			printf("Name        %s    \n",st->name);
			printf("Id        %s  \n------------------------------------------------\n",st->id);
			printf("course code      grade          \n");
			printf("%s              %s \n------------------------------------------------\n ",	st->ccode,st->grade);
		
			printf("	course matrix   \n\n ");
			printf("course name     course code         credit  \n");
				printf("      %s            %s              %d   ",st->cname,	st->ccode,st->credit);
				printf("\n");
        
		st++;
	}
	free(st);
	
}
