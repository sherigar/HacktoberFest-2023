#include <stdio.h>
#include <windows.h>

void yellow()
{
    printf("\033[0;33m");
};

int main()
{

    int h, m, s;
    int d = 1000;
    char am[] = "AM";
    char pm[] = "PM";
    int a = 0, p = 0;

   
    printf("----------------Type the time from which clock with start (12 hr format)---------\n");
    printf("Type Hour(max: 12) : ");
    scanf("%d", &h);
    printf("Type Minutes(max: 60) : ");
    scanf("%d", &m);
     printf("Type Seconds(max: 60) :");
    scanf("%d", &s);

    if (h > 12 || m > 60 || s > 60)
    {
        printf("****Type Valid No's**** ");
        exit(0);
    }

    while (a < 13)
    {
        a++;
        p++;
    }
    while (p < 25)
    {
        p++;
    }

    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            a++;
            p++;
            m = 0;
        }
        if (h > 12)
        {
            m = 0;
            h = 1;
            s = 0;
        }

        yellow();

    

       
        
            printf("Clock :  %02d:%02d:%02d ", h, m, s);
       

        Sleep(d);
        system("cls");
    }
}
