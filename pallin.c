#include<stdio.h>
int main()
    {
        int rev=0;
        int rem;
        int num;
        printf("Enter any Number :  ");
        scanf("%d",&num);
        while(num!=0)
            {
                rem=num%10;
                rev=(rev*10)+rem;
                num=rem;
            }
        if(num==rev)
            {
                printf("NUMBER IS PALLINDOME %d ",rev);
            }
        else 
            {
                printf("NOT PALLINDROME ");
            }
        return 0;
    }