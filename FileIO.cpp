/*
 * FileReader.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */
#include <iostream>
#include <fstream>
#include "../327_proj3_test/includes/FileIO.h"
#include "../327_proj3_test/includes/constants.h"
#include <string>

using namespace std;
using namespace KP_FileIO;

//trys to open filename, and return its contents in contents
//it will strip out only \n's (char return\line feed)
//returns:
//SUCCESS all worked, contents string contains all in the file
//COULD_NOT_OPEN_FILE_TO_READ contents string is cleared
int KP_FileIO::getFileContents(const std::string &filename, std::string &contents)
{
	ifstream myFile;
	myFile.open(filename);
	if (!myFile.is_open()){
		return COULD_NOT_OPEN_FILE_TO_READ;
	}

	string line;

	while (getline(myFile, line)){
		contents+=line;
	}

	myFile.close();
	return SUCCESS;
}

//trys to open filename, and serialize  myEntryVector contents to it
//returns:
//SUCCESS all worked, filename contains myEntryVector strings
//COULD_NOT_OPEN_FILE_TO_WRITE
int KP_FileIO::writeVectortoFile(const std::string filename,std::vector<std::string> &myEntryVector)
{
	ofstream myFile;
	myFile.open(filename);
	if (!myFile.is_open()){
		return COULD_NOT_OPEN_FILE_TO_WRITE;
	}

	vector<string>::iterator myStringVectorIterator;
	for(myStringVectorIterator = myEntryVector.begin();
			myStringVectorIterator != myEntryVector.end();
			myStringVectorIterator++){
		myFile << *myStringVectorIterator + "\n";
	}

	return SUCCESS;
}


