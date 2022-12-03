#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	a = a * a * a;
	printf("%d", a);

	a = (a - a % 10)/10;
	printf("This is not %d", a);
}
