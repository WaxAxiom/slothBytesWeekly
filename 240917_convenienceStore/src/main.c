#include "../include/conveniencestore.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int change1[4] = {2, 100, 0, 0};
    int change2[4] = {0, 0, 20, 5};
    int change3[4] = {30, 40, 20, 5};
    int change4[4] = {10, 0, 0, 50};
    int change5[4] = {1, 0, 5, 219};

    fprintf(stdout, "%s\n", changeEnough(change1, 14.11)    ? "true" : "false");
    fprintf(stdout, "%s\n", changeEnough(change2, 0.75)     ? "true" : "false");
    fprintf(stdout, "%s\n", changeEnough(change3, 12.55)    ? "true" : "false");
    fprintf(stdout, "%s\n", changeEnough(change4, 3.85)     ? "true" : "false");
    fprintf(stdout, "%s\n", changeEnough(change5, 19.99)    ? "true" : "false");
    return 0;
}
