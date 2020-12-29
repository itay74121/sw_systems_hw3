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
    if(scanf("%c",&letter)!=1) // if there is no letter at all
    {
        printf("Failed reading a or b\n");
        exit(1);
    }
    if(letter != 'a' && letter != 'b') // if the entered letter isnt a or b then ask to enter a or b
    {
        printf("Input letter isn't a or b\n");
        exit(2);
    }
    if(letter=='a') // if the letter is a then print the lines where the word exist
    {
        print_lines_(word);
    }
    if(letter=='b') // if the letter is b then print similar words
    {
        print_similar_words_(word);
    }
    return 0;
}