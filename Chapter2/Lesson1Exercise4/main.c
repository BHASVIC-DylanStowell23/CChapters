#include <stdio.h>
#include <string.h>

int main()
{
    char legs;
    char bird;
    char ocean;
    char insect;
    char fly;
    char cold;
    char groups;
    char mounds;
    char pollinate;
    char tenticles;
    char smart;
    char land;
    char farm;
    char grass;
    char big;
    char ridden;
    char feline;
    char stripes;

    printf("y for yes, n for no \n");
    printf("Does the animal have 4 legs? \n");
    scanf("%c", &legs);
    if (legs == 'y')
    {
        printf("Is the animal a farm animal? \n");
        fflush(stdin);
        scanf("%c", &farm);
        if (farm == 'y')
        {
            printf("Does the animal eat grass? \n");
            fflush(stdin);
            scanf("%c", &grass);
            if (grass == 'y')
            {
                printf("Is the animal big? \n");
                fflush(stdin);
                scanf("%c", &big);
                if (big == 'y')
                {
                    printf("Is it ridden? \n");
                    fflush(stdin);
                    scanf("%c", &ridden);
                    if (ridden == 'y')
                    {
                        printf("horse");
                    }
                    else
                    {
                        printf("cow");
                    }
                }
                else
                {
                    printf("sheep");
                }
            }
            else
            {
                printf("pig");
            }
        }
        else
        {
            printf("Is it feline? \n");
            fflush(stdin);
            scanf("%c", &feline);
            if (feline == 'y')
            {
                printf("Is the animal big? \n");
                fflush(stdin);
                scanf("%c", &big);
                if (big == 'y')
                {
                    printf("Does the animal have stripes? \n");
                    fflush(stdin);
                    scanf("%c", &stripes);
                    if (stripes == 'y')
                    {
                        printf("tiger");
                    }
                    else
                    {
                        printf("lion");
                    }
                }
                else
                {
                    printf("cat");
                }
            }
            else
            {
                printf("dog");
            }
        }
    }
    else
    {
        printf("Is the animal a bird \n");
        fflush(stdin);
        scanf("%c", &bird);
        if (bird == 'y')
        {
            printf("Can it fly \n");
            fflush(stdin);
            scanf("%c", &fly);
            if (fly == 'y')
            {
                printf("sparrow");
            }
            else
            {
                printf("Does the animal live in a cold environment? \n");
                fflush(stdin);
                scanf("%c", &cold);
                if (cold == 'y')
                {
                    printf("penguin");
                }
                else
                {
                    printf("ostrich");
                }
            }
        }
        else
        {
            printf("Does the animal live in the ocean? \n");
            fflush(stdin);
            scanf("%c", &ocean);
            if (ocean == 'y')
            {
                printf("Does the animal have tenticles? \n");
                fflush(stdin);
                scanf("%c", &tenticles);
                if (tenticles == 'y')
                {
                    printf("Is the animal intelligent? \n");
                    fflush(stdin);
                    scanf("%c", &smart);
                    if (smart == 'y')
                    {
                        printf("octopus");
                    }
                    else
                    {
                        printf("squid");
                    }
                }
                else
                {
                    printf("Does the animal go on land? \n");
                    fflush(stdin);
                    scanf("%c", &land);
                    if (land == 'y')
                    {
                        printf("seal");
                    }
                    else
                    {
                        printf("Is the animal large? \n");
                        fflush(stdin);
                        scanf("%c", &big);
                        if (big == 'y')
                        {
                            printf("whale");
                        }
                        else
                        {
                            printf("dolphin");
                        }
                    }
                }
            }
            else
            {
                printf("Does the animal fly? \n");
                fflush(stdin);
                scanf("%c", &fly);
                if (fly == 'y')
                {
                    printf("Does the animal pollinate flowers? \n");
                    fflush(stdin);
                    scanf("%c", &pollinate);
                    if (pollinate == 'y')
                    {
                        printf("bee");
                    }
                    else
                    {
                        printf("wasp");
                    }
                }
                else
                {
                    printf("Do they work in groups? \n");
                    fflush(stdin);
                    scanf("%c", &groups);
                    if (groups == 'y')
                    {
                        printf("Does the animal live in mounds? \n");
                        fflush(stdin);
                        scanf("%c", &mounds);
                        if (mounds == 'y')
                        {
                            printf("termite");
                        }
                        else
                        {
                            printf("ant");
                        }
                    }
                    else
                    {
                        printf("spider");
                    }
                }
            }
        }
    }
}