#include "../include/conveniencestore.h"
#include <stdlib.h>

bool changeEnough(int *change, double totalDue)
{
    double total = 0;
    double coinValue[4] = {0.25, 0.10, 0.05, 0.01};

    for (int i=0; i < 4; i++)
    {
        total += change[i] * coinValue[i];
    }

    if (total >= totalDue)
    {
        return true;
    }
    else
    {
        return false;
    }
}