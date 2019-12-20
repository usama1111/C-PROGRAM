#include<stdio.h>
array();
inverse();
main(){
	

	
	
	array();
	inverse();
	
	
	
}
array(){
	int arr[5][5];
	int count;
	int i ,j,max=0;
	printf("enter elements of an array \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
	if (arr[i][j] > max)
	{
	
	max=arr[i][j]; }
}
 

}
printf("The largest number is %d \n",max);

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			count=count+arr[i][j];
			
}

}
printf("the count is %d \n",count);
}

inverse(){
	float pp[2][2];
	int c[2][2]={};
	int f,q;
	printf("enter elements of an array \n");
	for(f=0;f<2;f++)
	{
		for(q=0;q<2;q++)
		{
	scanf("%d",&c[f][q]);
}
printf("\n");
}
int k =c[0][0]*c[1][1];
int m =c[1][0]*c[0][1];

int l =k-m;
printf("the determenent is %d \n",l);
int o =c[0][0];
int s = c[1][1];
c[0][0]=s;
c[1][1]=o;
c[0][0]=c[1][1];
c[1][1]=s;
c[0][1]*-1;
c[1][0]*-1;

for(f=0;f<2;f++)
	{
		for(q=0;q<2;q++)
		{
pp[f][q]=c[f][q]/l;

}
printf("\n");
}
printf("the inverse is \n");
for(f=0;f<2;f++)
	{
		for(q=0;q<2;q++)
		{
			printf("%f",pp[f][q]);
}
printf("\n");
}
}
