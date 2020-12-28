#include <stdio.h>
#include "stringfuncs.h"
#include <string.h>
#include <stdlib.h>

int main()
{
    // scan a word and a letter 
    char word [WORD];
    char letter;
    getword_(word);
    if(scanf("%c",&letter)!=1)
    {
        printf("Failed reading a or b\n");
        exit(1);
    }
//    printf("word=%s letter=%c\n",word,letter);
    if(letter != 'a' && letter != 'b')
    {
        printf("Input letter isn't a or b\n");
        exit(2);
    }
    if(letter=='a')
    {
        print_lines_(word);
    }
    if(letter=='b')
    {
        print_similar_words_(word);
    }
    return 0;
}