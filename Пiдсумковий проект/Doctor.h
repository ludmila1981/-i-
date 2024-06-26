#pragma once
#include<iostream>
#include<cstring>
using namespace std;

struct Doctor
{
	char name[53] = " ";
	int age = 0;
	char department[51] = " ";
	int number_of_chambers = 0;
	int phone = 0;
};
void display(struct Doctor st) {
	cout << "Name: " << st.name << endl;
	cout << "Age: " << st.age << endl;
	cout << "Department: " << st.department << endl;
	cout << "Number_of_chambers: " << st.number_of_chambers << endl;
	cout << "Phone: " << st.phone << endl;
}