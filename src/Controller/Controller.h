/*
 * Controller.h
 *
 *  Created on: Jan 23, 2018
 *      Author: ben
 */

#ifndef SRC_CONTROLLER_CONTROLLER_H_
#define SRC_CONTROLLER_CONTROLLER_H_

#include <iostream>
#include <vector>

#include "../Model/CrimeData.h"
#include "../Util/Timer.h"
#include "../Util/Util.h"

using namespace std;

class Controller {
public:
	Controller();
	void start();
	virtual ~Controller();
	void findMaxAndMin();

private:
	vector<CrimeData> crimeData;
};

#endif /* SRC_CONTROLLER_CONTROLLER_H_ */
