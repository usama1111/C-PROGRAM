#include<stdio.h>
struct book{
		char name[30];
		int pages;
		float price;
		struct address homeaddress;
	};
struct address{
	char street[40];
	int houseno;
};
	
int main(){
	struct book itclab={"Inventions",400,650.5};
	struct book cp;
	
	printf("Enter name");
	scanf("%s",&cp.name);
	printf(" \nEnter pages");	
	scanf("%d",&cp.pages);
	printf("\n Enter price");
	scanf("%f",&cp.price);
	printf("\n Enter house no");
	scanf("%d",&cp.homeaddress.houseno);
	printf("\n Enter Street");
	scanf("%s",&cp.homeaddress.street);

	printf("\n ITC BOOK");
	printf("\n Name is %s",itclab.name);
	printf("\n pages are %d \n price: %f",itclab.pages,itclab.price);
	

	printf("\n CP BOOK");
	printf("\n Name is %s",cp.name);
	printf("\n pages are %d \n price: %f",cp.pages,cp.price);	
	
}
