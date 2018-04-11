/*
 * Tree.h
 *
 *  Created on: Mar 27, 2018
 *      Author: ben
 */

#ifndef SRC_MODEL_STRUCTURES_NONLINEAR_BINARYTREE_TREE_H_
#define SRC_MODEL_STRUCTURES_NONLINEAR_BINARYTREE_TREE_H_

#include "BinaryTreeNode.h"

template<class Type>
class Tree{
protected:
	BinaryTreeNode<Type> * root;
public:
	virtual int getSize() = 0;
	virtual int getHeight() = 0;
	virtual bool isComplete() = 0;
	virtual bool isBalanced() = 0;

	virtual void insert(Type data) = 0;
	virtual bool contrains(Type data) = 0;
	virtual void remove(Type data) = 0;

	virtual void inOrderTraversal() = 0;
	virtual void preOrderTraversal() = 0;
	virtual void postOrderTraversal() = 0;

};

#endif /* SRC_MODEL_STRUCTURES_NONLINEAR_BINARYTREE_TREE_H_ */
