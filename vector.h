#ifndef VECTOR_H
#define VECTOR_H

#include "vector_item.h"
#include <stddef.h>
#include <stdbool.h>

typedef struct Vector{
	VectorItem** items;
	size_t size;
	size_t capacity;
} Vector;

Vector* Vector_new(VectorItem** items,size_t items_count);
Vector* Vector_dump(Vector* self);
void Vector_copy(Vector* destination,Vector* source);
bool Vector_equal(Vector* a,Vector* b);
void Vector_free(Vector* self);
void Vector_contract(Vector* self);
void Vector_expand(Vector* self);
VectorItem* Vector_get(Vector* self,unsigned int index);
void Vector_push(Vector* self,VectorItem* item);
VectorItem* Vector_pop(Vector* self);
unsigned int Vector_find(Vector* self,VectorItem* item);

#endif
