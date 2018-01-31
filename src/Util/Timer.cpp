/*
 * Timer.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: ben
 */

#include "Timer.h"

namespace std {

Timer::Timer() {
	executionTime = 0;

}
void Timer::resetTimer() {
	executionTime = 0;
}
void Timer::startTimer() {
	executionTime = clock();
}
void Timer::stopTimer(){
	assert(executionTime !=0);
	executionTime = clock() - executionTime;
}
void Timer::displayInformation(){
	cout << "The execution time is: " << executionTime << endl;
	cout << "In human time, it is: " << double (executionTime)/CLOCKS_PER_SEC << " Seconds" << endl;
}

long Timer::getTimeInMicroseconds(){
	return executionTime;
}

Timer::~Timer() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
