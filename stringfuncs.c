#include "stringfuncs.h"
#include <stdio.h>
#include <unistd.h>

int getline_(char s[])
{
    int i = 0;
    char temp;
    while (i<LINE)
    {
        if(scanf("%c",&temp)!=1)
            return -1;
        if(temp=='\n' || temp == EOF)
        {
            s[i]='\0';
            break;
        }
        s[i] = temp;
        i++;
    }
    return 1;
}
int getword_(char w[])
{
    int i = 0;
    char temp;
    while (i<WORD)
    {
        if(scanf("%c",&temp)!=1)
            return 0;
        if(temp=='\n'|| temp=='\t'||temp==' ' || temp==EOF)
        {
            w[i]='\0';
            break;
        }
        w[i] = temp;
        i++;
    }
    return 1;
}

int strlen_(char * str1)
{
    int c = 0;
    while(*(str1+c)!='\0')
    {
        c++;
    }
    return c;
}

int substring_( char * str1, char * str2)
{
    int lenstr1 = strlen_(str1);
    int lenstr2 = strlen_(str2);
    if (lenstr1<lenstr2)
        return 0;  
    for(int i = 0;i<=lenstr1-lenstr2;i++)
    {
        int j;
        for(j = i;j<i+lenstr2;j++)
        {
            if(str1[j]!=str2[j-i])
                break;
        }
        if(j==i+lenstr2)
            return 1;
    }
    return 0;
}
int getmin(int a , int b)
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
    if(lens<lent)
    {
        return 0;
    }
    int i = 0,j = 0;
    while(n>=0&&i!=lens)
    {
        if(s[i]==t[j])
        {
            if(i<lens)
                i++;
            if(j<lent-1)
                j++;
        }
        else
        {
            if(i<lens)
                i++;
            n--;
        }
    }
    if(n>=0)
        return 1;
    else
        return 0;
}

void print_lines_(char * str)
{
    char line[LINE];
    while(getline_(line)!=-1)
    {
        if(substring_(line,str))
        {
            printf("%s\n",line);
        }
    }
}
void print_similar_words_(char * str)
{
    char word [WORD];
    while(getword_(word))
    {
        //printf("%s\n",word); 
        if(similar_(word,str,1))
        {
            printf("%s\n",word);
        }
    }
}