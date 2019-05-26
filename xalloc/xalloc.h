#ifndef XALLOC_H
#define XALLOC_H

#include <stdio.h>

#define malloc(x) __wrap_malloc(x)
#define calloc(x,y) __wrap_calloc(x,y)
#define realloc(x,y) __wrap_realloc(x,y)
#define fopen(x,y) __wrap_fopen(x,y)

void*
__wrap_malloc(size_t size);
void*
__old_malloc(size_t size);
void*
__wrap_calloc(size_t nitems,size_t size);
void*
__old_calloc(size_t nitems,size_t size);
void*
__wrap_realloc(void* ptr,size_t size);
void*
__old_realloc(void* ptr,size_t size);
FILE*
__wrap_fopen(const char* filename,const char* mode);
FILE*
__old_fopen(const char* filename,const char* mode);

#endif
