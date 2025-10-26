#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool parseAndExecute(char *input)
{
    char *verb = strok(input, " \n");
    char *noun = strok(NULL," \n");
    if(verb != NULL)
    {
        if(strcmp(verb, "quit") == 0){
            return false;
        }
        else if(strcmp(verb, "look") == 0){
            printf("It is very dark in here.\n");
        }
        else if (strcmp(verb, "go") == 0)
        {
            printf("It's to dark to go anywhere.\n");
        }
        else
        {
            printf("I don't know how to '%s'.\n", verb);
        }
    }
    return true;
}