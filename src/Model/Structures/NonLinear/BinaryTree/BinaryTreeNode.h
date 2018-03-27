/*
 * BinaryTreeNode.h
 *
 *  Created on: Mar 27, 2018
 *      Author: ben
 */

#ifndef SRC_MODEL_STRUCTURES_NONLINEAR_BINARYTREE_BINARYTREENODE_H_
#define SRC_MODEL_STRUCTURES_NONLINEAR_BINARYTREE_BINARYTREENODE_H_

#include <iostream>
#include "../../Node.h"

using namespace std;

template<class Type>
class BinaryTreeNode: protected Node<Type>{
public:
	BinaryTreeNode();
	BinaryTreeNode(Type data);

	void setRootNode(BinaryTreeNode<Type> * root);
	void setRightNode(BinaryTreeNode<Type> * right);
	void setLeftNode(BinaryTreeNode<Type> * left);

	BinaryTreeNode<Type> getLeftNode();
	BinaryTreeNode<Type> getRightNode();
	BinaryTreeNode<Type> getRootNode();

private:
	BinaryTreeNode<Type> * root;
	BinaryTreeNode<Type> * left;
	BinaryTreeNode<Type> * right;



};



template<class Type>
BinaryTreeNode<Type>::BinaryTreeNode(): Node<Type>(){
	root = nullptr;
	right = nullptr;
	left = nullptr;
}

template<class Type>
BinaryTreeNode<Type>::BinaryTreeNode(Type data): Node<Type>(data){
	root = nullptr;
	right = nullptr;
	left = nullptr;
}

template<class Type>
BinaryTreeNode<Type> BinaryTreeNode<Type>::getRootNode(){
	return this->root;
}

template<class Type>
BinaryTreeNode<Type> BinaryTreeNode<Type>::getLeftNode(){
	return this->left;
}

template<class Type>
BinaryTreeNode<Type> BinaryTreeNode<Type>::getRightNode(){
	return this->right;
}






#endif /* SRC_MODEL_STRUCTURES_NONLINEAR_BINARYTREE_BINARYTREENODE_H_ */
