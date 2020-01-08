
#include<stdio.h>
struct data{
	char name[40];
	int salary;
	int hours;
}em[1];
main(){
	int i;
	
	printf("enter your  working hours \n");
	printf("enter your name \n");
	printf("enter your salary \n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&em[i].hours);
		scanf("%s",&em[i].name);
			scanf("%d",&em[i].salary);
		
}
for(i=0;i<2;i++)
	{
if(em[i].hours >= 8 && em[i].hours < 10 )
	{ int f;
	f=em[i].salary + 50;
		printf("name of employe :%s  \n your final salary is : %d \n",em[i].name,f);
	}
	
if(em[i].hours == 10 )
	{ int f;
	f=em[i].salary + 100;
		printf("name of employe :%s  \n your final salary is : %d \n",em[i].name,f);
	} 
		
	if(em[i].hours > 10 && em[i].hours <= 12 )
	{ int f;
	f=em[i].salary + 150;
		printf("name of employe :%s  \n your final salary is : %d \n",em[i].name,f);
	}
	
}
}
