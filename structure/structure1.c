#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float mark;
};

void main(void)
{
	struct student s1 = {1, "Emy", 90.9362};
	printf("Student %d details\n%s %.2f\n", s1.rollno, s1.name, s1.mark);
	return (0);
}
