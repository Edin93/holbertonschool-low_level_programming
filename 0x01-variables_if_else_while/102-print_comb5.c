#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i;
  int j;
  int k;
  int m;
  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
	  for (k = 0; k < 10; k++)
	    {
	      for (m = 0; m < 10; m++)
		{
		  putchar(i + '0');
		  putchar(j + '0');
		  putchar(' ');
		  putchar(k + '0');
		  putchar(m + '0');
		  putchar(',');
		  putchar(' ');
		}
	    }
	}
    }
  putchar('\n');
  return (0);
}
