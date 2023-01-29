#ifndef MY_MALLOC_H
#define MY_MALLOC_H

void *MyMalloc(size_t size);
void MyFree(void *ptr);
void PrintMemoryBlocks();

#endif