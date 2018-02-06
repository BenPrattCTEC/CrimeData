/*
 * Util.h
 *
 *  Created on: Nov 16, 2017
 *      Author: ben
 */

#include <string>
#include <fstream>
//#include <streambuf>
//#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>
//#include <mutex>
//#include <cmath>


#include "../Model/CrimeData.h"

#ifndef MODEL_UTIL_H_
#define MODEL_UTIL_H_

using namespace std;

class Util {
public:
	Util();
	virtual ~Util();
	static int countOccurences(string&, string);
	static vector<CrimeData> fileToCrimeDataVector(string);
	static string readFile(string);
	static void writeFile(string, string&);
	static void toLower(string&);
private:

};

#endif /* MODEL_UTIL_H_ */
