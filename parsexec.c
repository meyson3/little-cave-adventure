#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "location.h"
#include "inventory.h"

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
            executeLook(noun);
        }
        else if (strcmp(verb, "go") == 0)
        {
            executeGo(noun);
        }
        else if(strcmp(verb, "get") == 0)
        {
            executeGet(noun);
        }
        else if (strcmp(verb, "drop") == 0)
        {
            executeDrop(noun);
        }
        else if (strcmp(verb, "give") == 0)
        {
            executeGive(noun);
        }
        else if (strcmp(verb, "ask") == 0)
        {
            executeAsk(noun);
        }
        else if (strcmp(verb, "inventory") == 0)
        {
            executeInventory();
        }
        else
        {
            printf("I don't know how to '%s'.\n", verb);
        }
    }
    return true;
}