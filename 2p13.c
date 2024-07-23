//To prepare pay slip using following data. Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross - Pf.
#include<stdio.h>
int main()
{
	float basic,Da,Hra,Ma,Pf,Gross,Nt;
	printf("\nEnter the basic salary = ");
	scanf("%f",&basic);
	printf("Salary Slip!!");
	printf("\n*************");
	Da=(10*basic)/100;
	printf("\nDa  = %f",Da);
	Hra=(7.50*basic)/100;
	printf("\nHra = %f",Hra);
	Ma=300;
	printf("\nMa  = %f",Ma);
	Pf=(12.50*basic)/100;
	printf("\nPf  = %f",Pf);
	Gross=basic+Da+Hra+Ma;
	printf("\nThe Gross Salary = %f",Gross);
	Nt=Gross-Pf;
	printf("\nThe Net Salary = %f",Nt);
	return 0;
}
