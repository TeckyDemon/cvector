#include "vector_item.h"
#include "xalloc/xalloc.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

VectorItem* VectorItem_new(void* value,size_t size){
	VectorItem* self=malloc(sizeof*self);
	self->size=size;
	self->value=malloc(self->size);
	memcpy(self->value,value,size);
	return self;
}
VectorItem* VectorItem_dump(VectorItem* self){
	return VectorItem_new(self->value,self->size);
}
void VectorItem_copy(VectorItem* destination,VectorItem* source){
	*destination=*VectorItem_dump(source);
}
bool VectorItem_equal(VectorItem* a,VectorItem* b){
	if(a->size==b->size){
		return (memcmp(a->value,b->value,a->size)==0);
	}else{
		return false;
	}
}
void VectorItem_free(VectorItem* self){
	free(self->value);
	free(self);
}
