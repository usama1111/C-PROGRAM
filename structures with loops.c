#include<stdio.h>
main()
{
	struct book {
	char name[100];
	int price;
	int isbn;
	
	
	
	};
	struct book bt[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter name,pages ,price \n");
		scanf("%s %d %d",&bt[i].name,&bt[i].isbn,&bt[i].price);
		
	}
	for(i=0;i<3;i++)
	{
		printf("%s %d %d ",bt[i].name,bt[i].price,bt[i].isbn);
	
	
}
}
