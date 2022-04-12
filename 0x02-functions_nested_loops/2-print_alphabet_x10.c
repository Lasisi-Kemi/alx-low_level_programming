#include main.h

/**
* print_alphabet - prints ten times the alphabet
*/
void print_alphabet_x10(void)
{
int count = 0;
char smalletter;

while (count++ <= 9)
{
for (smalletter = 'a'; smalletter = 'z'; smalletter++)
_putchar(smalletter);
_putchar('\n');
}
}
