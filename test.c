#include <stdio.h>
#include "mymalloc.h"

int main(int argc, char const *argv[])
{
    int *p1 = MyMalloc(sizeof(int) * 5);
    // printf("p1: %p\n",p1);
    PrintMemoryBlocks();
    char *p2 = MyMalloc(sizeof(char) * 34);
    PrintMemoryBlocks();
    char *p3 = MyMalloc(sizeof(double));
    PrintMemoryBlocks();
    char *p4 = MyMalloc(sizeof(double) * 24);
    PrintMemoryBlocks();
    int *p5 = MyMalloc(sizeof(int) * 5);
    PrintMemoryBlocks();
    MyFree(p2);
    PrintMemoryBlocks();
    MyFree(p4);
    PrintMemoryBlocks();
    MyFree(p3);
    PrintMemoryBlocks();
    int *p6 = MyMalloc(sizeof(int));
    PrintMemoryBlocks();

    return 0;
}
