// Program using pointer to structure to initialize the members in a structure / 2students

#include <stdio.h>
struct student
{
	int s_no;
	float fees;
};

int main(int argc, char**argv) 
{
	struct student stu1,stu2,*ps1,*ps2;
	ps1 = &stu1;
	ps2 = &stu2;
	
	ps1->s_no =1;                    //  initialized the values for student 1
	ps1->fees =800;
	
	printf("\nEnter the details of another student:"); // Take input from the user for another student 
	printf("\n\nEnter the student number:");
	scanf("%d", &ps2->s_no);
	
	printf("Enter the fees:");
	scanf("%f", &ps2->fees);

	printf("\n\nDetails of first student:");
	printf("\n--------------------------------------");
	printf("\n Student Number= %d", ps1->s_no);
	printf("\n Fees = %f", ps1->fees);
	
	printf("\n\nDetails of second student:");      
	printf("\n--------------------------------------");
	printf("\n Student Number= %d", ps2->s_no);
	printf("\n Fees = %f", ps2->fees);
}
