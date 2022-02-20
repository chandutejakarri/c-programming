#include <stdio.h>
#define SUCCESS 0

int main()
{
	int a,b;
	printf("Enter the a and b values:");
	scanf("%d %d",&a,&b);
	printf("%d\n",a+b);
	/*multiplication*/
	printf("%d\n",a*b);
	/*subtraction*/
	printf("%d\n",a-b);
	/*division*/
	printf("%d\n",a/b);
	return SUCCESS;
}
