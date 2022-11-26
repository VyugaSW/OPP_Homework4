#pragma once
#include <Windows.h>
#include <iostream>
#include "Person.h"

using namespace std;

class Apartment
{
private:
	int size;
	Person* residents = new Person[size];
public:
	Apartment(int size, Person* arr) {
		this->size = size;
		residents = arr;
	}
	Apartment() {
		size = 0;
	}

	void PrintPersons() {
		for (int i = 0; i < size; i++) {
			residents[i].PrintPerson();
			cout << endl;
		}
	}
	void AddPerson() {
		size++;
		Person* tempRes = new Person[size];
		for (int i = 0; i < size - 1; i++) {
			tempRes[i] = residents[i];
		}
		tempRes[size - 1].NewPerson();
		residents = tempRes;
	}
	void PrintNumbers() {
	cout << "Numbers of apartments:\n";
		for (int i = 0; i < size; i++) {
			cout << "|" << i + 1 << "|\n";
		}
	}

	int getSize() {
		return size;
	}
	Person* getResidents() {
		return residents;
	}


	~Apartment() {
		delete[] residents;
	}





};

