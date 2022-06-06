#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
char low;
char UP;
for (low = 'a'; low <= 'z'; ++low)
putchar(low);
for (UP = 'A'; UP <= 'Z'; ++UP)
putchar(UP);
putchar('\n');
return (0);
