#include "xalloc.h"
#include <stdio.h>
#include <stdlib.h>

void
check_ptr(void* ptr,size_t size){
	if(ptr==NULL){
		fprintf(stderr,"Fatal: failed to allocate %zu bytes\n",size);
		abort();
	}
}
void*
__real_malloc(size_t size);
void*
__wrap_malloc(size_t size){
	void* ptr=__real_malloc(size);
	check_ptr(ptr,size);
	return ptr;
}
void*
__old_malloc(size_t size){
	return __real_malloc(size);
}
void*
__real_calloc(size_t nitems,size_t size);
void*
__wrap_calloc(size_t nitems,size_t size){
	void* ptr=__real_calloc(nitems,size);
	check_ptr(ptr,nitems*size);
	return ptr;
}
void*
__old_calloc(size_t nitems,size_t size){
	return __real_calloc(nitems,size);
}
void*
__real_realloc(void* ptr,size_t size);
void*
__wrap_realloc(void* ptr,size_t size){
	void* new_ptr=__real_realloc(ptr,size);
	check_ptr(new_ptr,size);
	return new_ptr;
}
void*
__old_realloc(void* ptr,size_t size){
	return __real_realloc(ptr,size);
}
FILE*
__real_fopen(const char* filename,const char* mode);
FILE*
__wrap_fopen(const char* filename,const char* mode){
	FILE* ptr=__real_fopen(filename,mode);
	if(ptr==NULL){
		fprintf(stderr,"Fatal: failed to open file \"%s\" with mode \"%s\"\n",filename,mode);
		abort();
	}
	return ptr;
}
FILE*
__old_fopen(const char* filename,const char* mode){
	return __real_fopen(filename,mode);
}
