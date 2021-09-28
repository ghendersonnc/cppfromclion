//
// Created by gabe on 9/27/2021.
//

#include "Person.h"


Person::Person(std::string name, int age) {
    this->name = name;
    this->age = age;
}

std::string Person::getName() { return name; }

int Person::getAge() { return age; }