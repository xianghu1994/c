#include<stdio.h>
#include<string.h>

char* get_str1(void)
{
	char p[] = "abcd";
	return p;
}

int main(void)
{
	char buf[120];
	strcpy(buf,get_str1());
	printf("%s\n",buf);
	
	char *p;
	p = get_str1();
	printf("%s\n",p);
	return 0;
}
