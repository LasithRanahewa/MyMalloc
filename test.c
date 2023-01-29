#include <stdio.h>
#include "mymalloc.h"

int main(int argc, char const *argv[])
{
    int *p1 = MyMalloc(sizeof(int) * 5);
    PrintMemoryBlocks();
    char *p2 = MyMalloc(sizeof(char) * 34);
    PrintMemoryBlocks();
    char *p3 = MyMalloc(sizeof(double));
    PrintMemoryBlocks();
    MyFree(p2);
    PrintMemoryBlocks();

    return 0;
}
