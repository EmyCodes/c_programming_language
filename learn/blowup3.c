#include <stdio.h>

int main()
{
        char c;

        printf("Would you like your computer to explode? Y/N\n");
        c=getchar();
        if (c=='Y'|| c=='y')
        {
                printf("Okay: Configuring your computer to explode now...\n");
                printf("Bye!\n");
        }
        else
        {
                printf("Okey.Whew!\n");
        }
        return(0);
}
