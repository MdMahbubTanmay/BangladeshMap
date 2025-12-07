#include <stdio.h>
#include "MapHeader.h"

void PrintMap()

{

    char encrypted_by_mahbub[] = "51x44x73y23x59y01x39y05y62x29y09y06x29y09y05x59y09y03x79y09y01x90y39y05x90y59y05y90y90y35x79y09y09y09y09y05x69y09y09y09y09y07x31y19y09y09y09y07y07x29y09y09y09y09y08x09y09y09y09y09y08y11x39y09y09y09y09y03x69y09y09y09y09x90y29y09y09y09x90y19y09y09y05x99y09y09y04x69y09y09y05x79y09y09y04y90y54x89y09y09y03y90y54x90y19y09y09y02y90y18x99y09y09y04y90y17x90y49y09y09y11y88x90y39y09y09y04y19y05x90y39y09y09y04y09y07x90y19y09y09y04y19y09x90y19y09y09y02y48y09x90y29y09y06y31y69y06x90y29y09y06y90y23y29y01x90y39y09y05y90y21y59x90y39y09y05y90y30y59x90y32y29y05y90y90y39y01x90y32y24y12y23y90y90y59y01x90y41y90y90y90y90y29y90y90y90y90y90y50y88x90y90y90y90y90y72y71x";

    for (int i = 0; i < sizeof(encrypted_by_mahbub) - 1; i += 3)
    {

        for (int j = 0; j < encrypted_by_mahbub[i] - '0'; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < encrypted_by_mahbub[i + 1] - '0'; k++)
        {
            printf("*");
        }

        if (encrypted_by_mahbub[i + 2] == 'x')
        {
            printf("\n");
        }
    }
}