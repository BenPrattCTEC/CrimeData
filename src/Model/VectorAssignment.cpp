/*
 * VectorAssignment.cpp
 *
 *  Created on: Jan 29, 2018
 *      Author: ben
 */

#include "VectorAssignment.h"

namespace std {

VectorAssignment::VectorAssignment() {
	// TODO Auto-generated constructor stub

}

void VectorAssignment::start() {
	vector<int> ints;
	vector<string> strings;
	for(int i=0; i<10; i++){
		ints.push_back(i);
		strings.push_back(to_string(i));
	}
	for(int i=0; i<10; i++){
			cout << ints.at(i) << endl;
			cout << strings.at(i) << endl;
	}
}

VectorAssignment::~VectorAssignment() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
