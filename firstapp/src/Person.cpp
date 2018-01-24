/*
 * Person.cpp
 *
 *  Created on: Jan 21, 2018
 *      Author: tamer
 */

#include "Person.h"
#include <iostream>

    Person::Person()
    {

    }

    Person::Person(std::string fName, std::string lName)
    {
        firstName = fName;
        lastName = lName;
    }

    Person::Person(std::string fName, std::string lName, int age1)
    {
        firstName = fName;
        lastName = lName;

        age = age1;
    }


    Person::~Person()
    {
    }

