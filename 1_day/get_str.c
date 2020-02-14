#include<stdio.h>
#include<string.h>

char* get_str1(void)
{
	char *p = "abcd";
	return p;
}

char* get_str2(void)
{
	char *q = "abcd";
	return q;
}

int main(void)
{
	char *p;
	char *q;
	p = get_str1();
	q = get_str2();
	
	printf("%s,%d\n",p,p);
	printf("%s,%d\n",q,q);
	return 0;
}
