#include "revert_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void RevertString(char *str)
{
	// your code here
    int len=strlen(str) - 1;
    char *new_str=(char*)malloc(sizeof(char)*len);
    int i;
    for(i = 0; i <= len; i++){
    new_str[i]=str[len-i];
    }
    strcpy(str, new_str);
    free(new_str);
}

