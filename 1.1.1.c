#include <stdio.h>
#include <string.h>

int main ()
{
  char input[100] = "abcdefh";
  char charList[256];
  int i = 0, flag = 0;
  int l = strlen (input);
  printf (" the value of l = %d ", l);
  while (i < 256)
    charList[i++] = 0;

  i = 0;

  while (i < l)
    {
      charList[input[i]]++;
      if (charList[input[i++]] > 1)
	{
	  flag = 1;
	  break;
	}
    }
  i = 0;
  while (i < 256)
    printf ("%4d", charList[i++]);
  if (flag == 0)
    printf ("\n The string contains unique characters only");
  else
    printf ("\n The string DOES NOT contain unique characters only");
  return 0;
}
