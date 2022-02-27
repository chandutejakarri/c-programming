#include <stdio.h>
#define SUCCESS 0

void modify(int *var_1,int *var_2)
{
	printf("Enter the updated two numbers: ");
	scanf("%d %d",var_1,var_2);
}

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
	modify(&a,&b);
	printf("Updated values of a and b is : %d %d\n",a,b);
	return SUCCESS;
}
