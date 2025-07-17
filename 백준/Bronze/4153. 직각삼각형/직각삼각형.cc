#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int bot, hig, sid;

    while (1)
    {
        scanf("%d %d %d", &bot, &hig, &sid);

        if (bot == 0 && hig == 0 && sid == 0)
        {
            break;
        }

        else if (sid > bot && sid > hig)
        {
            if ((sid * sid) == (bot * bot) + (hig * hig))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }

        else if (bot > sid && bot > hig)
        {
            if ((bot * bot) == (sid * sid) + (hig * hig))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }

        else
        {
            if ((hig * hig) == (bot * bot) + (sid * sid))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
    }
}