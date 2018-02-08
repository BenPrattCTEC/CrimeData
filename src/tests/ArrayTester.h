/*
 * ArrayTester.h
 *
 *  Created on: Feb 6, 2018
 *      Author: ben
 */

#ifndef SRC_TESTS_ARRAYTESTER_H_
#define SRC_TESTS_ARRAYTESTER_H_

#include "../Util/Array.h"
#include "../Util/Util.h"
#include "../Util/Timer.h"

using namespace std;

class ArrayTester {
public:
	ArrayTester();
	void testArrayUse();
	void testAdvancedArray();
	virtual ~ArrayTester();
};

#endif /* SRC_TESTS_ARRAYTESTER_H_ */
