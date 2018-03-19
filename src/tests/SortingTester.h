/*
 * SortingTester.h
 *
 *  Created on: Mar 15, 2018
 *      Author: ben
 */

#ifndef SRC_TESTS_SORTINGTESTER_H_
#define SRC_TESTS_SORTINGTESTER_H_

#include <stdio.h>
#include <vector>
#include "../Model/CrimeData.h"
#include "../Util/Timer.h"
#include "../Util/Util.h"


using namespace std;

class SortingTester {
public:
	SortingTester();
	virtual ~SortingTester();
	void testSorts();
private:
	int swapCount;
	void quickSort(vector<CrimeData>& data, int low, int high);
	int partition(vector<CrimeData>& data, int low, int high);
	void swap(vector<CrimeData>& data, int low, int high);
};


#endif /* SRC_TESTS_SORTINGTESTER_H_ */
