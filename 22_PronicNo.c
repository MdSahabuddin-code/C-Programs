#include <stdio.h>    
#include <stdbool.h>        
bool isPronicNumber(int num)
{    
    bool f = false;            
    for(int j = 1; j <= num; j++)
    {       
        if((j*(j+1)) == num)
        {    
            f = true;    
            break;    
        }    
    }    
    return f;    
}    
int main()    
{   
    int n; 
    printf("Enter the number to check for Pronic number \n");
    scanf("%d",&n); 
    if(isPronicNumber(n))  
    {  
            printf("The Number %d is Pronic Number", n);    
    }   
    else
    {
        printf("The Number %d is not Pronic Number", n);
    }
    return 0;    
}