/*
 * ConsoleOutput.h
 *
 *  Created on: Jan 25, 2018
 *      Author: ben
 */

#ifndef SRC_CONTROLLER_CONSOLEOUTPUT_H_
#define SRC_CONTROLLER_CONSOLEOUTPUT_H_

#include <iostream>

namespace std {

class ConsoleOutput {
public:
	ConsoleOutput();
	void start();
	virtual ~ConsoleOutput();
};

} /* namespace std */

#endif /* SRC_CONTROLLER_CONSOLEOUTPUT_H_ */
