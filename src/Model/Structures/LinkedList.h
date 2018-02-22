/*
 * LinkedList.h
 *
 *  Created on: Feb 22, 2018
 *      Author: ben
 */

#ifndef SRC_MODEL_STRUCTURES_LINKEDLIST_H_
#define SRC_MODEL_STRUCTURES_LINKEDLIST_H_

#include "List.h"
#include "iostream"

using namespace std;

template<class Type>
class LinkedList: public List<Type> {
protected:
	LinearNode<Type> * front;
	LinearNode<Type> * end;
	unsigned int size;
public:
	LinkedList();
	virtual ~LinkedList();
	int getSize();
	LinearNode<Type> * getFront();
	LinearNode<Type> * getEnd();

	void add(Type item);
	void addAtIndex(int index, Type item);
	Type getFromIndex(int index);
	Type remove(int index);

	LinkedList<Type>::LinkedList() {
		front = nullptr;
		end = nullptr;
		size = 0;
	}
};
template<class Type>
LinkedList<Type>::~LinkedList() {
	LinearNode<Type> *destroyStructure = front;
	while (front != nullptr) {
		front = destroyStructure->getNextNode();
		delete destroyStructure;
		destroyStructure - front;
	}
}
template<class Type>
void LinkedList<Type>::add(Type item) {
	LinearNode<Type> *newData = new LinearNode<Type>(item);
	if (!size) {
		front = newData;
	} else {
		end->setNextNode(newData);
	}
	end = newData;
	size += 1;
}
template<class Type>
void LinkedList<Type>::addAtIndex(int index, Type item) {
	assert(index >= 0 && index <= size);
	if (index == size) {
		add(item);
	} else {
		LinearNode<Type> *toBeAdded = new LinearNode<Type>(item);
		if (!index) {
			toBeAdded->setNextNode(front);
			front = toBeAdded;
		} else {
			LinearNode<Type> *previous = nullptr;
			LinearNode<Type> *current = front;
			for (int position = 0; position < index; position++) {
				previous = current;
				current = current->getNextnode();
			}
			previous->setnextNode(toBeAdded);
			toBeAdded->setNextnode(current);
		}
		size++;
	}
}
template<class Type>
Type LinkedList<Type>::getFromIndex(int index) {
	assert(index >= 0 && index < size)
	Type data;
	LinearNode<Type> *current = front;
	for (int position = 0; position < index; position++) {
		current = current->getNextNode();
	}

	return current->getData();
}
template<class Type>
Type LinkedList<Type>::remove(int index) {
	assert(index >= 0 && index < size);
	LinearNode<Type> *current = front;
	LinearNode<Type> *toBeRemoved = nullptr;
	LinearNode<Type> *previous = nullptr;

	Type removedData;
	if (!index) {
		tobeRemoved = front;
		front = front->getNextNode();
	} else {
		for (int position = 0; position < index; position++) {
			previous = current;
			current = current->getNextNode();
		}
		toBeRemoved = current;

		if (index == size - 1) {
			previous->setNextNode(nullptr);
			end = previous;
		} else {
			current = tobeRemoved->getNextNode();
			previous->setNextNode(current);
		}
	}
	size--;

	removedData = toBeRemoved->getData();
	delete toBeRemoved
	return removedData;
}
template<class Type>
LinearNode<Type> * LinkedList<Type>::getEnd() {
	return end;
}
template<class Type>
LinearNode<Type> * LinkedList<Type>::getFront() {
	return front;
}
template<class Type>
int LinkedList<Type>::getSize() {
	return size;
}
#endif /* SRC_MODEL_STRUCTURES_LINKEDLIST_H_ */

