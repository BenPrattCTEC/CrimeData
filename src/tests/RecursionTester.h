/*
 * RecursionTester.h
 *
 *  Created on: Mar 5, 2018
 *      Author: ben
 */

#ifndef SRC_TESTS_RECURSIONTESTER_H_
#define SRC_TESTS_RECURSIONTESTER_H_

#include <iostream>
#include  <string>
#include "../Util/Timer.h"

using namespace std;

class RecursionTester {
public:
	RecursionTester();
	virtual ~RecursionTester();
	void testRecursionNumbers();
	void testRecursionString();
private:
	int fib(int start);
	string mystery(string word);
};


#endif /* SRC_TESTS_RECURSIONTESTER_H_ */
