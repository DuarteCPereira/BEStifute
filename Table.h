#pragma once
#include <vector>
#include <string>
#include "pch.h"
using namespace std;

class Table
{
	public:
		vector<short> BirthYear; 
		vector<string> Name, BirthCity; 
		Table(CString filename); 
		virtual ~Table(void);
};
