#include<stdio.h>
#include<string.h>
int main()
{
    char m[4],n[4];
    int i,j,b=0,c=0;
    scanf("%s %s",m,n);
    for (i=0;i<4;i++)
    {if(m[i]==n[0])
         b++;
    else if
        (m[i]==n[1])
         c++;
    else if
        (m[i]==n[2])
         c++;
    else if
        (m[i]==n[3])
         c++;}

  /* if(m[1]==n[1])
         b++;
    else if
        (m[1]==n[0])
         c++;
    else if
        (m[1]==n[2])
         c++;
    else if
        (m[1]==n[3])
         c++;
   if(m[2]==n[2])
         b++;
    else if
        (m[2]==n[1])
         c++;
    else if
        (m[2]==n[0])
         c++;
    else if
        (m[2]==n[3])
         c++;
   if(m[3]==n[3])
         b++;
    else if
        (m[3]==n[1])
         c++;
    else if
        (m[3]==n[2])
         c++;
    else if
        (m[3]==n[0])
         c++;*/
  printf("%d %d",b,c);

}
void doLettersMatch(char userInput[], char letters[])
{
    int i;
    int j;
    for(i=0;i<6;i++)
    {
       for(j = 0; userInput[j] != '\0'; ++j) {
           if(userInput[j] == letters[i]) {
               ++found;
               printf("success! the letters matched from the user input");
               return;
           }
       }
    }
    noMatch();
}
