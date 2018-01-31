/*
 * Arrays.cpp
 *
 *  Created on: Jan 25, 2018
 *      Author: ben
 */

#include "Arrays.h"

using namespace std;

Arrays::Arrays() {
	// TODO Auto-generated constructor stub

}

void Arrays::start(){
	int intArr[5];
	double doubleArr[5];
	string stringArr[5];

	intArr[0] = 0;
	intArr[1] = 1;
	intArr[2] = 2;
	intArr[3] = 3;
	intArr[4] = 4;

	doubleArr[0] = 0;
	doubleArr[1] = 1;
	doubleArr[2] = 2;
	doubleArr[3] = 3;
	doubleArr[4] = 4;

	stringArr[0] = "0";
	stringArr[1] = "1";
	stringArr[2] = "2";
	stringArr[3] = "3";
	stringArr[4] = "4";

	for(int i=0; i<sizeof(intArr)/sizeof(intArr[0]); i++){
		cout << "int:    " << intArr[i] << endl;
		cout << "double: " << doubleArr[i] << endl;
		cout << "string: " << stringArr[i] << endl;
	}


}

Arrays::~Arrays() {
	// TODO Auto-generated destructor stub
}
