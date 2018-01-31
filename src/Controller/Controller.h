/*
 * Controller.h
 *
 *  Created on: Jan 23, 2018
 *      Author: ben
 */

#ifndef SRC_CONTROLLER_CONTROLLER_H_
#define SRC_CONTROLLER_CONTROLLER_H_

#include <iostream>
#include "../Model/ConsoleOutput.h"
#include "../Model/Arrays.h"
#include "../Model/VectorAssignment.h"

using namespace std;

class Controller {
public:
	Controller();
	void start();
	virtual ~Controller();
};

#endif /* SRC_CONTROLLER_CONTROLLER_H_ */
