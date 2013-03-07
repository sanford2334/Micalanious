#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	double Time, Strain, Stress;
	FILE *input;
	FILE *output1;
	FILE *output2;

	input = fopen("Compression5.txt","r");
	output1 = fopen("Tensilestress5.xls","w");
	output2 = fopen("Tensilestrain5.xls","w");

	if(input==NULL) printf("Error Opening File!");
	else printf("File Found!\n\n");

	//fprintf(output," Strain        Stress");


	while((fscanf(input,"%lf %lf %lf", &Time, &Strain, &Stress))==3)
	{
		fprintf(output1,"\n %lf", Strain);
		fprintf(output2,"\n %lf", Stress);
	}





	system("pause");
}