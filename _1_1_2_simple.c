#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    int i = 0, n, k=0;
    char arr[MAX], reverse[MAX];
    
    printf("Please enter the string: ");
    scanf(" %s",arr);
    
    n = strlen(arr);
    for(i = n-1; i >= 0; i--)
        reverse[k++] = arr[i];
    
    reverse[k] = '\0';
    
    printf("Reversed string = %s\n",reverse);
    
    return 0;
}

