#include<stdio.h>

#define TOTAL_BITS ((sizeof(int)*8)-1)

int main()
{
		int num, count=0;;
		printf("Enter num value : ");
		scanf("%d", &num);

		for(int i=0;i<TOTAL_BITS;i++)
		{
				if((num>>i)&1)
				{
                  break;
				}
				count++;
		}
		printf("trailing zeros = %d\n", count);
}
