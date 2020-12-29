#include "stringfuncs.h"
#include <stdio.h>
#include <unistd.h>

int getline_(char s[])
{
    int i = 0;
    char temp;
    while (i<LINE) // until the line is full
    {
        if(scanf("%c",&temp)!=1) // checking if the input 
            return -1;
        if(temp=='\n' || temp == EOF) // if the input is somthing that ends the inputs then break the loop
        {
            s[i]='\0'; // placing it in the array as the end of the line
            break;
        }
        s[i] = temp; // placing temp in the array
        i++;
    }
    return 1;
}
int getword_(char w[])
{
    int i = 0;
    char temp;
    while (i<WORD) // until the word is full
    {
        if(scanf("%c",&temp)!=1)
            return 0;
        if(temp=='\n'|| temp=='\t'||temp==' ' || temp==EOF) // if we entered something that end the word then break the loop
        {
            w[i]='\0'; // placing it in the array as the end of the word
            break;
        }
        w[i] = temp; // puting temp in the array
        i++;
    }
    return 1;
}

int strlen_(char * str1) // returning the length of a string
{
    int c = 0;
    while(*(str1+c)!='\0') // making c++ until we get to the end of the string
    {
        c++;
    }
    return c;
}

int substring_( char * str1, char * str2) // checking if str1 included in str 2
{
    int lenstr1 = strlen_(str1); // getting the string length
    int lenstr2 = strlen_(str2); // getting the string length
    if (lenstr1<lenstr2) // if the first string is smaller than the second stop the function
        return 0;  
    for(int i = 0;i<=lenstr1-lenstr2;i++) // checking if the first string is included in the second string
    {
        int j;
        for(j = i;j<i+lenstr2;j++)
        {
            if(str1[j]!=str2[j-i]) // if there is no simmilar letter in the strings then break the loop
                break;
        }
        if(j==i+lenstr2) // if we found that ther first string included in the second
            return 1;
    }
    return 0;
}
int getmin(int a , int b) // returning the smaller int between 2
{
    if(a<b)
        return a;
    else
        return b;
}

int similar_(char *s, char *t, int n)
{
    int lens = strlen_(s);
    int lent = strlen_(t);
    if(lens<lent) // lent cant be bigger then lens
    {
        return 0;
    }
    int i = 0,j = 0; // i is to go through s and j to go through t
    while(n>=0&&i!=lens) // going through the s
    {
        if(s[i]==t[j]) // if we fount 2 simmilar letters then go forward in s and t
        {
            if(i<lens) // if we not came to the end
                i++;
            if(j<lent-1) // if we not came to the end
                j++;
        }
        else // if 2 letters arent simmilar then go forward in s but not in t
        {
            if(i<lens) // if we not came to the end
                i++;
            n--; // the can be max n letters that that not in t so we n in the end smaller than 0 that means there is more letters in s that not in t
        }
    } 
    if(n>=0) // return 1 if there were max n letters that exist in s and not in t
        return 1;
    else
        return 0;
}

void print_lines_(char * str) // printing the lines where the word is exist
{
    char line[LINE];
    while(getline_(line)!=-1) // going through the lines
    {
        if(substring_(line,str)) // if the word exist in the specific line then print the line
        {
            printf("%s\n",line);
        }
    }
}
void print_similar_words_(char * str)  // printing sll the words that wimmilar to the given str or different in only 1 letter
{
    char word [WORD];
    while(getword_(word))
    {
        if(similar_(word,str,1)) // if different by max 1 letter and all the other letters the same then print
        {
            printf("%s\n",word);
        }
    }
}