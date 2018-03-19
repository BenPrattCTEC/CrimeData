/*
 * RecursionTester.cpp
 *
 *  Created on: Mar 5, 2018
 *      Author: ben
 */

#include "RecursionTester.h"

RecursionTester::RecursionTester() {
	// TODO Auto-generated constructor stub

}

int RecursionTester::fib(int number){
	if(number == 0 || number == 1){
		return 1;
	}
	return fib(number-1) + fib(number-2);
}

string RecursionTester::mystery(string word){

}

void RecursionTester::testRecursionNumbers(){
	Timer recursionTimer;
	cout << "fib(50) = ";
	recursionTimer.startTimer();
	cout << fib(50) << endl;
	recursionTimer.stopTimer();
	recursionTimer.displayInformation();
}

RecursionTester::~RecursionTester() {
	// TODO Auto-generated destructor stub
}
