/*
 * Util.cpp
 *
 *  Created on: Nov 16, 2017
 *      Author: ben
 */

#include "Util.h"

Util::Util() {
	// TODO Auto-generated constructor stub

}

int Util::countOccurences(string& sample, string pattern) {
	int index = sample.find(pattern);
	int count = 0;
	while (index != -1) {
		count++;
		sample = sample.substr(index + 1);
		index = sample.find(pattern);
	}
	return count;
}

string Util::readFile(string file) {
	string strBuffer = "";

	std::ifstream fileStream;
	fileStream.open(file);
	ostringstream ss = ostringstream { };
	ss << fileStream.rdbuf();
	fileStream.close();

	if (ss.str().size() == 0) {
		cout << file << " Was empty, Exiting..." << endl;
		exit(1);
	}

	return ss.str();
}

vector<CrimeData> Util::fileToCrimeDataVector(string file) {
	std::vector<CrimeData> crimeVector;
	string line;
	istringstream fileText(Util::readFile(file));

	//throw out header line
	getline(fileText, line);

	//read lines
	while (getline(fileText, line)) {
		crimeVector.push_back(line);
	}

	return crimeVector;

}

void Util::writeFile(string file, string& input) {
	std::ofstream out(file);
	out << input;
	out.close();
}

void Util::toLower(string& text) {
	for (unsigned int i = 0; i < text.length(); ++i) {
		text[i] = tolower(text[i]);
	}
}

Util::~Util() {
// TODO Auto-generated destructor stub
}
