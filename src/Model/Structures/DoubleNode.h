/*
 * DoubleNode.h
 *
 *  Created on: Feb 26, 2018
 *      Author: ben
 */

#ifndef SRC_MODEL_STRUCTURES_DOUBLENODE_H_
#define SRC_MODEL_STRUCTURES_DOUBLENODE_H_

#include "Node.h"

template<class Type>
class DoubleNode: public Node<Type> {
protected:
	DoubleNode<Type>* previous;
	DoubleNode<Type>* next;
public:
	DoubleNode();
	DoubleNode(Type data);
	DoubleNode(Type data, DoubleNode<Type>* previous, DoubleNode<Type>* next);

	DoubleNode<Type>* getPrevious();
	DoubleNode<Type>* getNext();

	void setPrevious(DoubleNode<Type>* previous);
	void setNext(DoubleNode<Type>* next);

};

template<class Type>
DoubleNode<Type>::DoubleNode() :
		Node<Type>() {
	previous = nullptr;
	next = nullptr;
}

template<class Type>
DoubleNode<Type>::DoubleNode(Type data) :
		Node<Type>() {
	previous = nullptr;
	next = nullptr;
}

template<class Type>
DoubleNode<Type>::DoubleNode(Type data, DoubleNode<Type>* previous, DoubleNode<Type>* next) {
	this->previous = previous;
	this->next = next;
}

template<class Type>
void DoubleNode<Type>::setNext(DoubleNode<Type>* next){
	this->next = next;
}

template<class Type>
void DoubleNode<Type>::setPrevious(DoubleNode<Type>* next){
	this->previous = previous;
}

template<class Type>
DoubleNode<Type>* DoubleNode<Type>::getPrevious(){
	return previous;
}

template<class Type>
DoubleNode<Type>* DoubleNode<Type>::getNext(){
	return next;
}

#endif /* SRC_MODEL_STRUCTURES_DOUBLENODE_H_ */
