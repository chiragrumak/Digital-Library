#include <stdio.h>
#include <string.h>
#define MAX 100

void reverse(char *);

int main()
{
    int i = 0, n, k=0;
    char arr[MAX];
    
    printf("Please enter the string: ");
    scanf(" %s",arr);
    reverse(arr);
        
    printf("Reversed string = %s\n",arr);
    
    return 0;
}

void reverse (char *str){
    char *end = str;
    char tmp;
    
    if(str){
        while(*end){
            end++;
        }
        end--;
        
        while(str < end){
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
    
}
