#include<stdio.h>
int main()
    {
        int i,j,Num,range,rev=0,save;
        printf("ENTER NUMBER : ");
        scanf("%d",&Num);
        printf("HOW MANY TYPES TO PRINT SERIES: ");
        scanf("%d",&range);
        for(i=1;i<=range;i++)
            {
                save=rev*10+Num;
                printf("%d + ",save);
                rev=save;

            }
    }