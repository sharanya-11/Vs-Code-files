#include<stdio.h>
#include<string.h>
void parser(char *string)
{
  int i,index=0,in;
  for(i=0;i<strlen(string);i++)
  {
    if(string[i]=='<')
    {
      in=0;
      continue;
    }
    else if(string[i]=='>')
    {
      in=1;
      continue;
    }
    if(in==1)
    {
      string[index]=string[i];index++;
    }
  }
  string[index]='\0';
  while(string[0]==' ')
  {
    for(i=0;i<strlen(string);i++)
    {
        string[i]=string[i+1];
    }
  }
  while(string[strlen(string)-1]==' ')
  {
    string[strlen(string)-1]='\0';
  }
}
int main()

{
  char str[] ="<h1><span><ul>@   hello there!    </span></h1>";
  parser(str);
  printf("the parsed string is:%s",str);
}
