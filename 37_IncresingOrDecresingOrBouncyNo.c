#include<stdio.h>

int main()
{
    int n,s,i=0,j,up,down,a[10];
    printf("\nEnter the Number : \n");
    scanf("%d",&n);
    s=n;
    while(s>0)
    {
        a[i]=s%10;
        s=s/10;
        i++;
    }
    up=0;
    down=0;
    for(j=0;j<i-1;j++)
    {
        if(a[j]>a[j+1])
            up=1;
        if(a[j]<a[j+1])
            down=1;
    }
    if(up == 1 && down == 1)
    {
        printf("\n\t%d is a Bouncing Number\n\n",n);
    }
    if(up == 1 && down == 0)
    {
        printf("\n\t%d is an Increasing Number\n\n",n);
    }
    if(up == 0 && down == 1)
    {
        printf("\n\t%d is a Decreasing Number\n\n",n);
    }
    if(up == 0 && down == 0)
    {
        printf("\n\t%d is neither Increasing nor Decreasing\n\n",n);
    }
    return 0;
}