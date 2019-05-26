#ifndef VECTOR_ITEM_H
#define VECTOR_ITEM_H

#include <stddef.h>
#include <stdbool.h>

typedef struct VectorItem{
	void* value;
	size_t size;
} VectorItem;

VectorItem* VectorItem_new(void* value,size_t size);
VectorItem* VectorItem_dump(VectorItem* self);
void VectorItem_copy(VectorItem* destination,VectorItem* source);
bool VectorItem_equal(VectorItem* a,VectorItem* b);
void VectorItem_free(VectorItem* self);

#endif
