/*
 * Stack.h
 *
 *  Created on: Feb 22, 2018
 *      Author: ben
 */

#ifndef SRC_MODEL_STRUCTURES_STACK_H_
#define SRC_MODEL_STRUCTURES_STACK_H_

#include "LinkedList.h"

template<class Type>
class Stack: public LinkedList<Type> {

public:
	Stack() = default;
	virtual ~Stack();
	void push(Type data);
	Type Pop();
	Type Peek();

	void add(Type data);
	void addAtIndex(int index, Type data);
	Type getFromIndex(int index);
	Type remove(int index);
};

template<class Type>
Stack<Type>::~Stack() {
	while (!size) {
		pop();
	}
}

template<class Type>
void Stack<Type>::push(Type data) {
	LinearNode<Type>*add = new LinearNode<Type>(data);

	if (!size) {
		end = add;
	} else {
		add->setNextNode(front);
	}

	front = add;
	size++;
}

template<class Type>
void Stack<Type>::add(Type data) {
	push(data);
}

template<class Type>
void Stack<Type>::addAtIndex(int index, Type data) {
	assert(!index);
	push(data);
}

template<class Type>
Type Stack<Type>::pop() {
	assert(size > 0);
	Type removed = front->getData();
	LinearNode<Type> * removedNode = getFront();
	front = removedNode->getNextNode();
	delete removedNode;
	size--;
	return removed;
}

template<class Type>
Type Stack<Type> :: remove(int index){
	assert(!index);
	return pop();
}

template<class Type>
Type Stack<Type>::peek(){
	assert(size>0);
	return getFront()->getData();
}

template<class Type>
Type Stack<Type> :: getFromIndex(int index){
	assert(!index);
	return peek();
}

#endif /* SRC_MODEL_STRUCTURES_STACK_H_ */





