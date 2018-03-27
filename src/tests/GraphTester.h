/*
 * GraphTester.h
 *
 *  Created on: Mar 23, 2018
 *      Author: ben
 */

#ifndef SRC_TESTS_GRAPHTESTER_H_
#define SRC_TESTS_GRAPHTESTER_H_

#include "../Model/Structures/NonLinear/Graph.h"
#include "../Util/Timer.h"

using namespace std;

class GraphTester {
public:
	GraphTester();
	void testGraphs();
	virtual ~GraphTester();
private:
	Graph<string> puzzle;
	void setup();
	void compareTraversals();
	void findCheapestTraversals();
};

#endif /* SRC_TESTS_GRAPHTESTER_H_ */
