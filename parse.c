
#include <stdio.h>
#include <string.h>

void parser(char arg[]){
    int start; // Starting of text
    int end; // ending of the text
    int sizeofarray = strlen(arg);
    for (int i = 0; i < 20; i++) // i < 20 Beacuase a maximum html tag is 20 letters
    {
        if (arg[i] == '>')
        {
            start = i + 1;
            break;
        }
        
    }
    for (int i = start; i < sizeofarray; i++)
    {
        if (arg[i] == '<')
        {
            end = i -1;
            break;
        }
        
    }
    // String extracted

    for (int i = start; i <= end; i++)
    {
        printf("%c",arg[i]);
    }
    printf("\n");
    
    
}
int main(){
    // Using to make a string pecifier
    char a[150];
    strcpy(a,"<h1><span>This is a span</span></h1>");
    parser(a);
    
    return 0;
}

