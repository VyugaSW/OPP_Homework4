#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;
class Person
{
private:
	char* name = new char[125];
	char* surname = new char[125];
	int age;
public:
	Person(char* name, char* surname, int age){
		this->name = name;
		this->surname = surname;
		this->age = age;
	}
	Person() {};

	void PrintPerson() {
		cout << "Name - " << name << endl;
		cout << "Surname - " << surname << endl;
		cout << "Age - " << age << endl;
	}
	void NewPerson() {
		cout << "Enter a name\n";
		setName();
		cout << "Enter a surname\n";
		setSurname();
		cout << "Enter an age\n";
		setAge();
	}

	char* getName() {
		return name;
	}
	char* getSurname() {
		return surname;
	}
	int getAge() {
		return age;
	}

	//I can't fix this, but it causes a write error (oshibka zapisi) 
	void setName() {
		cin >> name;
	}
	void setSurname() {
		cin >> surname;
	}
	void setAge() {
		cin >> age;
	}

	~Person() {
		delete[]name;
		delete[]surname;
	}
};

