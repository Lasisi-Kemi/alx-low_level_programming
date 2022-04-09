#include <stdio.h>
/**
*
* main - Entry point
* Return: Always 0 (Success/correct)
*/

int main(void)

{
char alphebet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')	
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n')

return (0);

}
