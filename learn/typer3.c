#include <stdio.h>

int main()
{
        char ch;
        puts("Start typing");
        puts("Press ~ then to stop");

        while (getchar() != '~')
        {
                ch = getchar();
        }
        printf("Thanks!\n");
        return(0);
}
