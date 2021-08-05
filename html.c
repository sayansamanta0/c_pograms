#include <stdio.h>
#include <string.h>

void parser(char *ptr)
{
    int n = 0, index = 0;
    for (int i = 0; i < strlen(ptr); i++)
    {
        if (ptr[i] == '<')
        {
            n = 1;
            continue;
        }
        else if (ptr[i] == '>')
        {
            n = 0;
            continue;
        }
        if (n == 0)
        {
            ptr[index] = ptr[i];
            index++;
        }
        
    }
    ptr [index]='\0';

while (ptr[0]==' ')
{
    for (int i = 0; i < strlen(ptr); i++)
    {
     ptr[i]=ptr[i+1];
    }
}
while (ptr[strlen(ptr)-1]==' ')
{
    ptr[strlen(ptr)-1]='\0';
}




}


int main()
{
    char string[] = "<h1>    this is a heading    <h2>";
    printf("%s\n", string);
    parser(string);
    printf("%s", string);

    return 0;
}