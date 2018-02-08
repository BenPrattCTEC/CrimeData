/*
 * List
 *
 *  Created on: Feb 8, 2018
 *      Author: ben
 */

#ifndef SRC_MODEL_STRUCTURES_LIST_H_
#define SRC_MODEL_STRUCTURES_LIST_H_

#include <assert.h>
#include "LinearNode.h"

template <class Type>
class List{
protected:
	int size;
public:
	virtual void add(Type item) = 0;
	virtual void addAtIndex(int index, Type item) = 0;
	virtual Type remove(int index) = 0;
	virtual Type getFromIndex(int index) = 0;

	virtual int getSize() const = 0;
	virtual LinearNode<Type> * getFront() = 0;
	virtual LinearNode<Type> * getEnd() = 0;

};

#endif /* SRC_MODEL_STRUCTURES_LIST_H_ */
