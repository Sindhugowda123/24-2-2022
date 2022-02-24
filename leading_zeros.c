#include<stdio.h>

#define TOTAL_BITS sizeof(int)*8

int main()
{
		int num, count=0;;
		printf("Enter num value : \n");
		scanf("%d", &num);

		for(int i=TOTAL_BITS-1;i>=0;i--)
		{
				if((num>>i)&1)
				{
                  break;
				}
				count++;
		}
		printf("leading zeros = %d\n", count);
}
