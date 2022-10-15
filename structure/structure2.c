#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
};

void main(void)
{
	int i;

	struct student s[3];
	printf("Hey! Enter students info according to their NAMES and MARKS: ");
	
	
	i =0;
	while (i < 3)
	{
		scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
		i++;
	}

	i = 0;
	while (i < 3)
	{
		printf("%d. %s %.2f\n", s[i].rollno, s[i].name, s[i].marks);
		i++;
	}

	/*for(i = 0, i < 3, i=i+1)
	{
		scanf("%s %f", s[i].name, &s[i].marks);
	}
	for(i = 0, i < 3, i++)
	{
		printf("%d. %s %.2f", i, s[i].name, s[i].marks);
	}&*/

	return (0);
}
