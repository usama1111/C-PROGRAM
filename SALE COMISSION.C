#include<stdio.h>

int sales_person_earnings(gross_sale);

int main (){
	float sales_person_earnings, salary;
	while (sales_person_earnings!=0){
	printf("Enter sales");
	scanf("%f",&sales_person_earnings);
	if (sales_person_earnings==0)
	 break;
	salary=200+sales_person_earnings*0.09;
    printf("Salary is: %.2f\n",salary);
}
    return 0;

}
