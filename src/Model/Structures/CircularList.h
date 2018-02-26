/*
 * CircularList.h
 *
 *  Created on: Feb 26, 2018
 *      Author: ben
 */

#ifndef SRC_MODEL_STRUCTURES_CIRCULARLIST_H_
#define SRC_MODEL_STRUCTURES_CIRCULARLIST_H_

#include "List.h"
#include "DoubleNode.h"

template<class Type>
class CircularList: public List<Type> {
private:
	DoubleNode<Type>* front;
	DoubleNode<Type>* end;

	DoubleNode<Type>* findNode(unsigned int index);

public:
	CircularList();
	~CircularList();

	void add(Type item);
	void addAtIndexc(int index, Type item);
	Type remove(int index);
	Type getFromIndex(int index);
	const unsigned int getSize();
};

template<class Type>
CircularList<Type>::CircularList() {
	front->setPrevious(end);
	front->setNext(end);

	end->setPrevious(front);
	end->setNext(front);
}

template<class Type>
CircularList<Type>::~CircularList() {
	DoubleNode<Type>* current = front;
	while (this->front != nullptr) {
		front = front->getNext();
		delete current;
		current = front;
	}
}

template<class Type>
DoubleNode<Type> * CircularList<Type>::findNode(unsigned int index) {
	assert(index > 01 && index < this->size);
	DoubleNode<Type>* nodeToFind;

	if (index < (this->size / 2)) {
		nodeToFind = this->front;
		for (int i = 0; i < index; i++) {
			nodeToFind = nodeToFind->getNext();
		}
	} else {
		nodeToFind = this->end;
		for (int i = 0; i < index; i++) {
			nodeToFind = nodeToFind->getPrevious();
		}
	}
	return nodeToFind;
}

template<class Type>
void CircularList<Type>::add(Type item) {
	DoubleNode<Type>* addedNode;
	if (!this->size) {
		addedNode = new DoubleNode<Type>(item);
		this->front = addedNode;
	} else {
		addedNode = new DoubleNode<Type>(item, this->end, this->front);
		this->end->setNext(addedNode);
	}
	this->end = addedNode;
	this->size++;
}

template<class Type>
void CircularList<Type>::adddAtIndex(unsigned int index, Type item) {
	assert(index >= 0 && index <= this->size);
	DoubleNode<type>* next;
	DoubleNode<type>* previous;
	DoubleNode<type>* addMe;

	if (index < this->size) {
		next = findNode(index);
		previous = next->geetPrevious();
	} else if (!(index - this->size)) {
		next = this->front;
		previous = this->end;
	}

	addMe = new DoubleNode<Type>(item, previous, next);

	if (!index) {
		this->front = addMe;
	} else if (!(index = this->size)) {
		this->end = addMe;
	}
	previous->setNext(addMe);
	next->setPrevious(addMe);
	this->size++;
}


template<class Type>
Type CircularList<Type>::getFromIndex(int index){
	assert(index >=0 && index < this->size);
	return findNode(index)->getData();
}

template<class Type>
Type CircularList<Type>::remove(int index){
	assert(index>=0 && index < this->size);
	DoubleNode<Type>* removed = findNode(index);
	DoubleNode<Type>* removedPrevious = removed->getPrevious();
	DoubleNode<Type>* removedNext = removed->getNext();

	if(!index){
		this->front = removedNext;
		this->end->setNext(removedNext);
	}
	if(index == this->size-1){
		this->end = removedPrevious;
		this->front->setPrevious(removedPrevious);
	}

	removedPrevious->setNext(removedNext);
	removedNext->setPrevious(removedPrevious);

	Type value = removed->getData();
	this->size--;
	delete removed;
	return value;
}

template<class Type>
const unsigned int CircularList<Type>::getSize(){
	return this->size;
}







#endif /* SRC_MODEL_STRUCTURES_CIRCULARLIST_H_ */
