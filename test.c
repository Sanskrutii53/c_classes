#include<stdio.h>
int main()
{
    int x;
    printf ("Enter the positive number\n");
    scanf ("%d",&x);
    if (x>0)
    {
	    printf("%d/n",x);
    }
    else
    {
	    printf("error");
    }


    int y=x%10;
    printf("unit place digit is: %d\n",y);

return 0;
}




