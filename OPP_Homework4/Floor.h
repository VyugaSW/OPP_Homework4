#pragma once
#include <Windows.h>
#include <iostream>
#include "Person.h"
#include "Apartment.h"

using namespace std;
class Floor
{
private:
	int size = 0;
	Apartment* list;
public:
	Floor(int size, Apartment* arr) {
		this->size = size;
		list = new Apartment[size];
		list = arr;
	}
	Floor() {
		size = 0;
		list = new Apartment[size];
	}

	void PrintApartment() {
		for (int i = 0; i < size; i++) {
			cout << "----------------------\n";
			cout << "Number of apartment - " << i + 1 << endl;
			cout << "Persons: \n";
			list[i].PrintPersons();
		}
	}
	void AddApartmentAndPerson() {
		size++;
		Apartment* tempList = new Apartment[size];
		for (int i = 0; i < size - 1; i++) {
			tempList[i] = list[i];
		}
		tempList[size - 1].AddPerson();
		delete[] list;
		list = new Apartment[size];
		list = tempList;
	}
	
	int getSize() {
		return size;
	}
	Apartment* getList() {
		return list;
	}

	~Floor() {
		delete[] list;
	}
};

