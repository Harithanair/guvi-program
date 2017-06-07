#include<stdio.h>
void reverse(char *begin,char *end);
void reverseWords(char *s)
{
char *word_begin=s;
char *temp=s;
while(*temp)
{
temp++;
if(*temp=='\0')
{
reverse(word_begin,temp-1);
}
elseif(*temp=='')
{
reverse(word_begin,temp-1);
word_begin=temp+1;
}
}
reverse(s,temp-1);
]
