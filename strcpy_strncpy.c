/*#include<stdio.h>
#include<string.h>

#define STRING_LEN 10

char *my_strcpy(char src[], char dest[])
{
		int i;
		int len = strlen(src);
		for(i=0;i<len;i++)
		{
				dest[i] = src[i];
		}
		dest[i] = '\0';                           //but in memcpy need not to update with null at last
}

int main()
{
		char src[STRING_LEN] = "Hello";
		char dest[STRING_LEN] = "world";
		printf("Before strcpy dest = %s\n", dest);
		my_strcpy(src, dest);
		printf("After strcpy dest = %s\n", dest);
}

//strcpy return type is char*
//memcpy return type is void*

*/


#include<stdio.h>
#include<string.h>

#define STRING_LEN 10

char *my_strncpy(char src[], char dest[], int n)
{
		int i;
		for(i=0;i<n;i++)
		{
				dest[i] = src[i];
		}
		dest[i] = '\0';                           //but in memcpy need not to update with null at last
}

int main()
{
		char src[STRING_LEN] = "Hello";
		char dest[STRING_LEN] = "world";
		int n=4;
		printf("Before strcpy dest = %s\n", dest);
		my_strncpy(src, dest,n);
		printf("After strcpy dest = %s\n", dest);
}

//like memcpy, strncpy also copy n bytes of data from src to dest but in memcpy after copying n bytes the remaining bytes will be filled with old data but in strcpy the old data has gone and will be replaced with new data. 
