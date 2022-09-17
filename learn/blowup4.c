#include <stdio.h>

int main()
{
        char c,d;

        printf("Enter character code for self-destruct? ");
        c=getchar();
	fflush(stdin);

	printf("Input number code to confirm self-destruct? ");
	d=getchar();

        if (c=='G'|| c=='g'|| d=='0')
        {
                printf("AUTO DESTRUCT ENABLED!\n");
                printf("Bye!\n");
        }
        else
        {
                printf("Okey.Whew!\n");
        }
        return(0);
}
