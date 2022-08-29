#include <stdio.h>
#include <string.h>
struct person
{
	int id;
	char name[20];
};
struct person fun(struct person b)
{
	b.id = 10;
	strcpy(b.name, "Nekulol");
	return b;
}
void main()
{
	struct person p1;
	p1 = fun(p1);
	printf("%d\n",p1.id);
	printf("%s\n",p1.name);
	char x;
	gets(x);
	printf("%s",x);
}