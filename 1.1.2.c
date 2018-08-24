#include <stdio.h>
#include <string.h>

int main ()
{
  char input[100] = "abcdefh";
  int l = strlen(input);
  int i = l -1;
  
  while(i>=0)
    printf("%c", input[i--]);
  
  return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
  char input[] = "abcdefhhijk";
  char *str, *end, temp;
  
  str = end = input;
  
  while(*end)
    end++;
  end--;
  
  while(str < end){
    temp = *str;
    *str++ = *end;
    *end-- = temp;
  }
 
 printf("%s", input);
 return 0;
}
