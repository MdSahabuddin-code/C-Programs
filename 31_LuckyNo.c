#include<stdio.h>
#include<stdbool.h>
bool isLucky(int n)
{
    int counter =2;
    int next_Position=2;
    if(counter>n)
    {
        return 1;
    }
    if (n%counter==0)
    {
        return 0;
    }
    next_Position=next_Position-next_Position/counter;
    counter++;
    return isLucky(next_Position);
}
int main()
{
    int x;
    printf("Enter the number to check for Lucky no\n");
    scanf("%d",&x);
    if (isLucky(x))
    {
        printf("The Number %d is Lucky \n",x);
    }
    else
    {
        printf("The Number %d is not Lucky \n",x);
    }
    
}