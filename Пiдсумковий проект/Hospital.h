#pragma once
#include<iostream>
#include<cstring>
using namespace std;

struct Hospital
{
	char department[31] = " ";
	int number_of_chambers = 0;

	void showHospital(){
		cout << "Department: " << department << endl;
	}

	

};
