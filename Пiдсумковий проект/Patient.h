#pragma once
#include<iostream>
#include<cstring>
using namespace std;

struct Patient
{
	char name[71] = " ";
	int age = 0;
	int primary_diagnosis = 0;
	int date_of_admission = 0;
	int analyses = 0;
	int date_of_discharge = 0;
};
