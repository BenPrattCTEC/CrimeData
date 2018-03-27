/*
 * Controller.cpp
 *
 *  Created on: Jan 23, 2018
 *      Author: ben
 */

#include "Controller.h"


Controller::Controller() {
	// TODO Auto-generated constructor stub

}

void Controller::start(){
//	Timer readTimer;
//	readTimer.startTimer();
//	crimeData = Util::fileToCrimeDataVector("/home/ben/eclipse-workspaceCTEC-C++/CrimeData/crime.csv");
//	readTimer.stopTimer();
//	readTimer.displayInformation();
//	cout << "Finding max and min" << endl;
//	findMaxAndMin();
//
//	RecursionTester recursion;
//	recursion.testRecursionNumbers();

//	SortingTester sort;
//	sort.testSorts();

	GraphTester graph;
	graph.testGraphs();

}




void Controller::findMaxAndMin(){
	Timer searchTimer;
	searchTimer.startTimer();

	int minIndex = 0;
	int maxIndex = 0;

	for(unsigned int i = 0; i<crimeData.size(); i++){
		if(crimeData[minIndex] > crimeData[i]){
			minIndex = i;
		}
		if(crimeData[maxIndex] < crimeData[i]){
			maxIndex = i;
		}
	}
	searchTimer.stopTimer();
	cout << "Smallest is at " << minIndex << ", and is: " << crimeData[minIndex] << endl;
	cout << "Largest is at  " << maxIndex << ", and is: " << crimeData[maxIndex] << endl;
	searchTimer.displayInformation();
}


Controller::~Controller() {
	// TODO Auto-generated destructor stub
}
