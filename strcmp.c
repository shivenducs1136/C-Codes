#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	char a[100],b[100];
	gets(a);
	gets(b);

	strcmp(a,b);
	printf("%d",strcmp(a,b));
	return 0;
}