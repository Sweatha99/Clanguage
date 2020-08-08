#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int random,r,n;
    float num,p,a;
    char word[20];
    char cpy[20];
    char cmp[20];
    printf("\nEnter a word:");
    gets(word);
    printf("\nEnter a word with which u want to compare word %s ",&word);
    gets(cmp);
    if(strcmp(word,cmp))
        printf("\n U have entered same sting:");
    else
        printf("\n U have entered different string:");

    strcpy(cpy,word);
    printf("\ncopyied string in cpy is %s:",cpy);

    strrev(word);
    printf("\nreverse of sentence/word %s is %s:",cpy,word);

    n=strlen(cpy);
    printf("\nlength of string %s is %d:",word,n);

    strupr(cpy);
    printf("\nString in upper case is %s:",cpy);

    strlwr(cpy);
    printf("\nString in lower case is %s:",cpy);

    printf("\nEnter a number:");
    scanf("%f",&num);
    printf("\nEnter power of the number:");
    scanf("%f",&p);
    a=pow(num,p);
    printf("\n%f raise to the power %f is %f",num,p,a);

    a=sqrt(num);
    printf("\nSquare root of %f is %f",num,a);

    a=ceil(num);
    printf("\nSmallest number but not less than %f is %f",num,a);

    a=floor(num);
    printf("\nLargest number but not larger than %f is %f",num,a);

    printf("\nEnter a number till which you want random no.");
    scanf("%d",&r);
    random=rand() %r +1;
    printf("\nRandom number in 1 and %d is %d",r,random);
    return 0;
}
