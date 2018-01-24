/*
 * Person.h
 *
 *  Created on: Jan 21, 2018
 *      Author: tamer
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>

    class Person
    {

    private:
        std::string firstName;
        std::string lastName;

        int age;

    public:
        Person();

        Person(std::string fName, std::string lName);

        Person(std::string fName, std::string lName, int age);

        ~Person();

        void SayHello();
    };
#endif /* PERSON_H_ */
