#include <stdio.h>
/**
  *main function included
  *return 0 to success
  */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("\nSize of a int: %lu byte(s)", sizeof(int));
	printf("\nSize of a long int: %lu byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %lu byte(s)", sizeof(long long int));
	printf("\nSize of a float: %lu byte(s)", sizeof(float));
	return (0);
}
