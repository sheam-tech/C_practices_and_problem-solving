#include <stdio.h>
int main()
{
    char string[1000];
    gets(string);
    int vowel,consonant,word,digit,small,capital,other,i;
    vowel=consonant=digit=small=capital=other=i=0;
    word=1;
    char ch;
    for(i=0; string[i]!='\0'; i++)
    {
        ch=string[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
        else if((ch>'a'&&ch<='z')||(ch>'A'&&ch<='Z'))
            consonant++;
        else if(ch<='9'&&ch>='0')
            digit++;
        else if(ch==' ')
            word++;
        else
            other++;
        if(ch>='A'&&ch<='Z')
            capital++;
        if(ch>='a'&&ch<='z')
            small++;
    }
    printf("vowel=%d\n",vowel);
    printf("consonant=%d\n",consonant);
    printf("digit=%d\n",digit);
    printf("word=%d\n",word);
    printf("other=%d\n",other);
    printf("capital=%d\n",capital);
    printf("small=%d\n",small);
}
