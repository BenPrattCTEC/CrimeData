/*
 * SortingTester.cpp
 *
 *  Created on: Mar 15, 2018
 *      Author: ben
 */

#include "SortingTester.h"

SortingTester::SortingTester() {
	// TODO Auto-generated constructor stub

}

void SortingTester::quickSort(vector<CrimeData>& data, int low, int high){
	if(low<high){
		int partitionPoint = partition(data, low, high);
		quickSort(data, low, partitionPoint-1);
		quickSort(data, partitionPoint+1, high);
	}
}

int SortingTester::partition(vector<CrimeData>& data, int low, int high){
	CrimeData pivotValue = data[high];

	int smallest = low-1;
	for(int i=low; i<high-1; i++){
		if(data[i] < pivotValue){
			smallest++;
			swap(data, smallest, i);

		}
	}
	swap(data, smallest+1, high);
	return smallest+1;

}

void SortingTester::swap(vector<CrimeData>& data, int small, int large){
	CrimeData temp = data[small];
	data[small] = data[large];
	data[large] = temp;
	swapCount++;
}

void SortingTester::testSorts(){
	Timer sortTimer;
	swapCount = 0;
	vector<CrimeData> crimeData = Util::fileToCrimeDataVector("/home/ben/eclipse-workspaceCTEC-C++/CrimeData/crime.csv");
	sortTimer.startTimer();
	quickSort(crimeData, 0, crimeData.size());
	sortTimer.stopTimer();
	sortTimer.displayInformation();
	cout << "swaps: " << swapCount << endl;

}

SortingTester::~SortingTester() {
	// TODO Auto-generated destructor stub
}

