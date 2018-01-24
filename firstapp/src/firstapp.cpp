//============================================================================
// Name        : firstapp.cpp
// Author      : Tamer Alamiri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
#include "Math.h"
using namespace std;

int passByValue(int num){
	cout << "This is the passByValue function" <<endl;
	num++;
	cout <<num<<endl;
	return 0;
}
int passByRef(int &rNum){
	cout<< "This is the passByRef function" <<endl;
	rNum = 50;
	return 0;
}

int main() {
	 // create a Person instance using default constructor
	 Person *pOne = new Person();
	 cout << pOne << endl;

	 // Create a Person instance using 2 argument constructor
	 Person *pTwo = new Person("Tom", "Thumb");
	 cout << pTwo << endl;
	 // Create a Person instance using 3 argument constructor
	 Person *pThree = new Person("Tom", "Thumb", 15);
	 cout << pThree << endl;
	return 0;
}
