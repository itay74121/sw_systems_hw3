#ifndef _STRING_FUNCS
#define _STRING_FUNCS

#define LINE 256
#define WORD 30

int getline_(char s[]); // good
int getword_(char w[]); // good
int substring_( char * str1, char * str2); // good
int similar_(char *s, char *t, int n); // good
void print_lines_(char * str);  
void print_similar_words_(char * str);
int strlen_(char * str); // good 
#endif