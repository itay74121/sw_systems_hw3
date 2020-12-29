#ifndef _STRING_FUNCS
#define _STRING_FUNCS

#define LINE 256
#define WORD 30

int getline_(char s[]); // gets line
int getword_(char w[]); // gets word
int substring_( char * str1, char * str2); // checking if str1 included in str 2
int similar_(char *s, char *t, int n); // checking if 2 words are simmilar or different in max n letters
void print_lines_(char * str);  // printing the lines where the word is exist
void print_similar_words_(char * str);  // printing sll the words that wimmilar to the given str or different in only 1 letter
int strlen_(char * str); // returning the length of a string
#endif