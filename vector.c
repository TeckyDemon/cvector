#include "vector.h"
#include "vector_item.h"
#include "xalloc/xalloc.h"
#include <stdlib.h>
#include <string.h>
#include <tgmath.h>
#include <stdbool.h>

Vector* Vector_new(VectorItem** items,size_t items_count){
	Vector* self=malloc(sizeof*self);
	if(items==NULL){
		self->size=0;
		self->capacity=items_count;
		self->items=NULL;
	}else{
		self->size=items_count;
		self->capacity=(size_t)pow(2,ceil(log2((float)self->size)));
		self->items=calloc(self->capacity,sizeof**items);
		for(unsigned int i=0;i<items_count;++i){
			self->items[i]=VectorItem_dump(items[i]);
		}
	}
	return self;
}
Vector* Vector_dump(Vector* self){
	Vector* copy=Vector_new(self->items,self->size);
	copy->capacity=self->capacity;
	return copy;
}
void Vector_copy(Vector* destination,Vector* source){
	*destination=*Vector_dump(source);
}
bool Vector_equal(Vector* a,Vector* b){
	if(a->size==b->size){
		for(unsigned int i=0;i<a->size;++i){
			if(!VectorItem_equal(a->items[i],b->items[i])){
				return false;
			}
		}
		return true;
	}else{
		return false;
	}
}
void Vector_free(Vector* self){
	for(unsigned int i=0;i<self->size;++i){
		VectorItem_free(self->items[i]);
	}
	free(self->items);
	free(self);
}
void Vector_contract(Vector* self){
	self->capacity/=2;
	self->items=realloc(self->items,sizeof**self->items*self->capacity);
}
void Vector_expand(Vector* self){
	self->capacity*=2;
	self->items=realloc(self->items,sizeof**self->items*self->capacity);
}
VectorItem* Vector_get(Vector* self,unsigned int index){
	if(index<self->size){
		return self->items[index];
	}else{
		return NULL;
	}
}
void Vector_push(Vector* self,VectorItem* item){
	self->items[self->size++]=VectorItem_dump(item);
	if(self->size>self->capacity){
		Vector_expand(self);
	}
}
VectorItem* Vector_pop(Vector* self){
	--self->size;
	VectorItem* item=VectorItem_dump(self->items[self->size]);
	VectorItem_free(self->items[self->size]);
	if(self->size*2<=self->capacity){
		Vector_contract(self);
	}
	return item;
}
unsigned int Vector_find(Vector* self,VectorItem* item){
	for(unsigned int i=0;i<self->size;++i){
		if(VectorItem_equal(self->items[i],item)){
			return i;
		}
	}
	return (unsigned int)self->capacity;
}
