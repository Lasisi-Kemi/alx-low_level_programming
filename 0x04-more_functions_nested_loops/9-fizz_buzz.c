#include <stdio.h>
/**
* main - prints fizz for int divisible by 3 and buzz for 5
*
* Return: int
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("fizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
putchar(' ');
else
putchar('\n');
}
return (0);
}
