//
// Created by gabe on 9/27/2021.
//

#ifndef CPPFROMCLION_PERSON_H
#define CPPFROMCLION_PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int age;
public:
    Person(std::string, int);

    std::string getName();

    int getAge();
};

#endif //CPPFROMCLION_PERSON_H
