#include "pch.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include "Table.h"

Table::Table(CString filename) 
{
	CString message; 
	vector<string> text_file; 
	ifstream ifs(filename); // opens file
	if(ifs.fail())
	{
		message.Format(_T("Unable to read the datafile"));
		AfxMessageBox(message);
		exit(1);
	}
	string temp, temp1, temp2; 
	short temp3; 
	while (getline(ifs, temp))
		//vector with the lines of the file
		text_file.push_back(temp);
	for(unsigned int i=0;i<text_file.size();i++)
	{
		//read strings from each line
		istringstream ss(text_file[i]);
		// attribute each string to a variable
		ss>>temp1 >>temp2 >>temp3;
		Name.push_back(temp1);
		BirthCity.push_back(temp2);
		BirthYear.push_back(temp3);
	}
	ifs.close();
}

Table::~Table(void)
{
}