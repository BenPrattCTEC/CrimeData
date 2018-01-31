/*
 * ConsoleOutput.cpp
 *
 *  Created on: Jan 25, 2018
 *      Author: ben
 */

#include "ConsoleOutput.h"

using namespace std;

ConsoleOutput::ConsoleOutput() {
	// TODO Auto-generated constructor stub

}

void ConsoleOutput::start() {
	cout << "Ben Pratt" << endl;
	for(int i = 13; i<32; i++){
		cout << i << endl;
	}
}

ConsoleOutput::~ConsoleOutput() {
	// TODO Auto-generated destructor stub
}
