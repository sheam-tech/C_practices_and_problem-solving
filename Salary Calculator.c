#include <stdio.h>
#include<string.h>
int main()
{

    char name[1000];
    int workhour,wtime,otime,wh,oh;

    printf("Normal Work Time Hour: ");
    scanf("%d",&workhour);
    printf("Work Time Salary(per hour): ");
    scanf("%d",&wtime);
    printf("Over Time Salary(per hour): ");
    scanf("%d",&otime);

    while(1)
    {
        printf("------Name: ");
        scanf("%s",name);
        printf("Total Work Hour: ");
        scanf("%d",&wh);

        if(wh>workhour)
        {
            oh=wh-workhour;
            wh=wh-oh;
            printf("Over time is: %d\n",oh);
            printf("Total work Hour salary: %d x %d=%d BDT\n",wh,wtime,wh*wtime);
            printf("Total overtime salary:  %d x %d=%d BDT\n",oh,otime,oh*otime);
            printf("Total salary is===============%d BDT\n",(wh*wtime)+(oh*otime));
        }
        else
        {
            printf("Over Time is: 0\n");
            printf("Total Salary is: %d x %d = %d BDT\n",wh,wtime,wh*wtime);
        }
    }
    return 0;
}
