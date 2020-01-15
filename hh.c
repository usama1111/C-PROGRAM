#include<stdio.h>
int main(){
	
	int i,j;
	int customer=0;
	int arr1[5][5]={};
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("|_%d_|",arr1[i][j]);
		}
		printf("\n");
	}
	int row,column;
char kk;	
do{
FILE *ptr;
ptr=fopen("data4.txt","a");
	printf("enter seat num to book \n");
	//fprintf(ptr,"enter seat num to book \n");
	scanf("%d %d",&row,&column);
	
			if (arr1[row-1][column-1] == 0)
			{
				arr1[row-1][column-1] = 1;
				}
	
		else
			printf("this seat is booked\n");

customer ++;
fprintf(ptr,"CUSTOMER = %d",customer);
fprintf(ptr,"\n");

for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{	printf("%d",arr1[i][j]);
          fprintf(ptr,"%d ",arr1[i][j]);
	}
	
	
	fprintf(ptr,"\n");
	printf("\n");
	
}
fprintf(ptr,"\n");
printf("do you want book more seats ??? \n");
fflush(stdin);
scanf("%c",&kk);
fclose(ptr);}
while(kk == 'Y' || kk == 'y');
}
