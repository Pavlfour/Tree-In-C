#include <stdio.h>

main()
{
    char s[]="Merry Christmas!";
    int i,j,co=1,color_star=7;
    register int speed_tree=20;
    while (1)
    {

        printf("\033[0;3%dm",color_star);
        printf("\n\n");
        for(i=10;i<20;i++)
        {
            printf("%*c",20-co,' ');
            for(j=0;j<co;j++)
            {
                printf("*");
                Sleep(speed_tree);
            }
            for(j=0;j<co;j++)
            {
                printf("*");
                Sleep(speed_tree);
            }
            printf("\n");co++;
        }
        for(i=0;i<3;i++)
        {
              printf("%*c",17,' ');
              for(j=0;j<5;j++)
              {
                printf("*");
                Sleep(speed_tree);
              }
              printf("\n");
        }
        printf("\n\n%*c",12,' ');
        for(i=0;i<16;i++)
        {
            printf("%c",s[i]);
            Sleep(speed_tree);
        }
        co=1;
        speed_tree=0;
        color_star+=1;
        if(color_star==8)
           color_star=1;
        Beep(523,500);
        Sleep(40);
        system("cls");
    }
}