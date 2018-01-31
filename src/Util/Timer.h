/*
 * Timer.h
 *
 *  Created on: Jan 31, 2018
 *      Author: ben
 */

#ifndef SRC_UTIL_TIMER_H_
#define SRC_UTIL_TIMER_H_

#include <time.h>
#include <assert.h>
#include <iostream>

namespace std {

class Timer {
public:
	Timer();
	void startTimer();
	void stopTimer();
	void resetTimer();
	void displayInformation();
	long getTimeInMicroseconds();
	virtual ~Timer();
private:
	clock_t executionTime;
};

} /* namespace std */

#endif /* SRC_UTIL_TIMER_H_ */
