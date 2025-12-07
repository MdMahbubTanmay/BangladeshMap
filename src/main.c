#include <stdio.h>
#include "MapHeader.h"

int main()
{

    char *name = "©MAHBUB";

    char encrypted_by_mahbub2[9] = "˲VJQ";
    strcat(encrypted_by_mahbub2, "K^K");

    PrintMap();



    for (int j = 0; j < sizeof(encrypted_by_mahbub2) - 1; j++)
    {
        printf("%c", encrypted_by_mahbub2[j] - 9);
    }

    return 0;
}