

#include<stdio.h>
#include<math.h>
sum();
main(){
	
	
sum();	
	
	
}
sum(){
	int arr1[10]={};
	int arr2[10]={};
	int arr3[10]={};
	int arr4[10]={};
	int i;
	printf("enter x1 coordinates \n \n");            
	for(i=0;i<=10;i++)
	{
			scanf("%d",&arr1[i]);                                                       
}
	printf("enter x2 coordinates \n ");            
	for(i=0;i<=10;i++)
	{
			scanf("%d",&arr2[i]);                                                       
	}
	printf("enter y1 coordinates \n");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&arr3[i]);
	}
	printf("enter y2 coordinates \n");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&arr4[i]);
	}
	
	
for(i=0;i<=10;i++)	
{
		int jj, j,bb,aa,cc,summ;
	aa=(arr2[i]-arr1[i]);
	
	cc=arr4[i]-arr3[i];
j=(pow(aa,2)+pow(cc,2));
	
	bb=pow(j,0.5);
	jj=jj+1;
	printf("%d",jj);
	printf("%d",bb);
	printf("\n");
}


	
		
}

	

