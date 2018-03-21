/*
 * Graph.h
 *
 *  Created on: Mar 19, 2018
 *      Author: ben
 */

#ifndef SRC_MODEL_STRUCTURES_NONLINEAR_GRAPH_H_
#define SRC_MODEL_STRUCTURES_NONLINEAR_GRAPH_H_

#include <set>
#include <queue>
#include <assert.h>
#include <iostream>

using namespace std;

template<class Type>
class Graph {
private:
	static const int MAXIMUM = 20;
	bool adjacencyMatrix[MAXIMUM][MAXIMUM];
	int weightCostMatrix[MAXIMUM][MAXIMUM];
	Type graphData[MAXIMUM];
	int vertexCount;
	void depthFirstTraversal(Graph<Type>& graph, int vertex, bool markedVerticies[])
public:
	Graph();
	virtual ~Graph();

	void addVertex(const Type& value);

	void addEdge(int source, int target);
	void addEdgeUndirected(int source, int target);
	void addEdgeCost(int source, int target, int cost);

	void removeEdge(int source, int target);
	void removeEdgeUndirected(int source, int target);
	void removeEdgeCost(int source, int target);

	Type& operator[](int vertex);
	Type operator[](int vertex) const;
	int size() const;

	bool hasUndirectedConnection(int source, int target);
	bool areConneced(int source, int target);
	set<int> neighbors(int vertex);

	void depthFirstTraversal(Graph<Type>& graph, int vertex);
	void bredthFirstTraversal(Graph<Type>& graph, int vertex);
	int costTraversal(Graph<Type>& graph, int vertex);
};

template<class Type>
const int Graph<Type>::MAXIMUM;

template<class Type>
Graph<Type>::Graph() {
	this->vertexCount = 0;
}

template<class Type>
int Graph<Type>::size() const {
	return vertexCount;
}

template<class Type>
Type& Graph<Type>::operator[](int vertex) {
	assert(vertex < vertexCount);
	return graphData[vertex];
}

template<class Type>
Type Graph<Type>::operator[](int vertex) const {
	assert(vertex < vertexCount);
	return graphData[vertex];
}

template<class Type>
void Graph<Type>::addVertex(const Type& value) {
	assert(vertexCount < MAXIMUM);
	int newVertexNumber = vertexCount;
	vertexCount++;

	for (int i = 0; i < vertexCount; i++) {
		adjacencyMatrix[i][newVertexNumber] = false;
		adjacencyMatrix[newVertexNumber][i] = false;
	}
	graphData[newVertexNumber] = value;
}

template<class Type>
void Graph<Type>::removeEdge(int source, int target) {
	assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
	adjacencyMatrix[source][target] = false;
}

template<class Type>
void Graph<Type>::removeEdgeUndirected(int source, int target) {
	assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
	adjacencyMatrix[source][target] = false;
	adjacencyMatrix[target][source] = false;

}

template<class Type>
void Graph<Type>::removeEdgeCost(int source, int target) {
	assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
	weightCostMatrix[source][target] = 0;
	weightCostMatrix[target][source] = 0;

}

template<class Type>
void Graph<Type>::addEdge(int source, int target) {
	assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
	adjacencyMatrix[source][target] = true;

}

template<class Type>
void Graph<Type>::addEdgeUndirected(int source, int target) {
	assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
	adjacencyMatrix[source][target] = true;
	adjacencyMatrix[target][source] = true;

}

template<class Type>
void Graph<Type>::addEdgeCost(int source, int target, int cost) {
	assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
	weightCostMatrix[source][target] = cost;
	weightCostMatrix[target][source] = cost;

}

template<class Type>
bool Graph<Type>::hasUndirectedConnection(int source, int target) {
	assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
	return adjacencyMatrix[source][target] || adjacencyMatrix[target][source];
}

template<class Type>
bool Graph<Type>::areConneced(int source, int target) {
	assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
	return adjacencyMatrix[source][target];
}

template<class Type>
set<int> Graph<Type>::neighbors(int vertex){
	assert(vertex<vertexCount);
	set<int> vertexNeighbors;

	for(int i=0; i<vertexCount; i++){
		if(adjacencyMatrix[vertex][i]){
			vertexNeighbors.insert(i);
		}
	}
	return vertexNeighbors;
}

template<class Type>
void Graph<Type>::depthFirstTraversal(Graph<Type>&currentGraph, int vertex){
	bool visitedVerticies[MAXIMUM];
	assert(vertex<currentGraph.size());
	fill_n(visitedVerticies, currentGraph.size(), false);
	depthFirstTraversal(currentGraph, vertex, visitedVerticies);
}

template<class Type>
void Graph<Type>::depthFirstTraversal(Graph<Type>& currentGraph, int vertex, bool* visited){
	set<int> connections = currentGraph.neighbors(vertex);
	set<int>::iterator setIterator;

	visited[vertex] = true;
	cout << currentGraph[vertex] << ", " << endl;

	for(setIterator = connections.begin(); setIterator !=connections.end(); setIterator++){
		if(!visited[setIterator]){
			depthFirstTraversal(currentGraph, *setIterator, visited);
		}
	}
}

template<class Type>
int Graph<Type>::costTraversal(Graph<Type>& currentGraph, int vertex){
	assert(vertex < currentGraph.size());
	int cost = 0;
	bool visited[MAXIMUM];
	set<int> connections;
	set<int>::iterator setIterator;
	queue<int> vertexQueue;

	fill_n(visited, currentGraph.size(), false);
	visited[vertex] = true;

	vertexQueue.push(vertex);
	while(!vertexQueue.empty()){
		connections = currentGraph.neighbors(vertexQueue.front());
		vertexQueue.pop();

		for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++){
			if(!visited[*setIterator]){
				cost+=weightCostMatrix[vertex][*setIterator];
				visited[*setIterator] = true;
				vertexQueue.push(*setIterator);
			}
		}
	}
	return cost;
}




#endif /* SRC_MODEL_STRUCTURES_NONLINEAR_GRAPH_H_ */
