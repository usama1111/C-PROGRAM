#include<stdio.h>

void rang();
main(){
	rang();
}
void rang(){
	int gross[5];
	  int i,j=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
	  int salary[5];
	printf("Enter Gross:\n");
	for(i=0;i<5;i++){
		scanf("%d",&gross[i]);
	}
	  for(i=0;i<5;i++){
	  	salary[i]=200+(0.09*gross[i]);
	  	printf("Salary: %d\n",salary[i]);
	  }
      for(i=0;i<5;i++){
      	if(salary[i]<=299){
      		a=a+1;
		  }
		else if(salary[i]>=300&&salary[i]<=399){
      		b=b+1;
		  }
		else if(salary[i]>=400&&salary[i]<=499){
      		c=c+1;
		  }
		else if(salary[i]>=500&&salary[i]<=599){
      		d=d+1;
		  }
		else if(salary[i]>=600&&salary[i]<=699){
      		e=e+1;
		  }
		else if(salary[i]>=700&&salary[i]<=799){
      		f=f+1;
		  }
		else if(salary[i]>=800&&salary[i]<=899){
      		g=g+1;
		  }
		else if(salary[i]>=900&&salary[i]<=999){
      		h=h+1;
		  } 
		else if(salary[i]>=1000){
		 	j=j+1;
		 }            
	  }
	  printf("a) 200-299\t%d persons\n",a);
	  printf("b) 300-399\t%d persons\n",b);
	  printf("c) 400-499\t%d persons\n",c);
	  printf("d) 500-599\t%d persons\n",d);
	  printf("e) 600-699\t%d persons\n",e);
	  printf("f) 700-799\t%d persons\n",f);
	  printf("g) 800-899\t%d persons\n",g);
	  printf("h) 900-999\t%d persons\n",h);
	  printf("i) 1000 and over\t%d persons\n",j);
