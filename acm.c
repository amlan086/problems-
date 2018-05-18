#include<stdio.h>
int main()
{  char userInput[4];
   char letters[4];
    int i,j,k,b=0,c=0;
    gets(userInput);
    gets(letters);
    for(i=0;i<4;i++)
    {
       for(j = 0; userInput[j]; j++) {
           if(userInput[j] == letters[i]) {
               c++;

           }
       }
    }
    for(k=0;k<4;k++)
    {
       if(userInput[k] == letters[k]) {
           b++;

    }

}
printf("%d %d",b,c);
return 0;
}
