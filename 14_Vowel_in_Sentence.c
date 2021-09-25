#include<stdio.h>
#include<string.h>
int main()
{
	char str[200],ch;
	int i,v=0,space=0,c=0;
	printf("Enter the Sentence to find vowel and consonent and space and sentence end with '.'\n");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		ch=str[i];
		if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U')
			v++;
		else if(ch==' ')
			space++;
		else if(ch=='.')
			continue;
		else 
			c++;
	}
	printf("Total Vowels= %d Space= %d Consonent=%d\n",v,space,c);
	return 0;
}
