#include <stdio.h>
int main()
{
	char key;
	printf("Press a key on your keyboard:");
	key=getchar();
	printf("You pressed the ā%cā key.\n",key);
	printf("Its ASCII value is %d.\n",key);
	return(0);
}
