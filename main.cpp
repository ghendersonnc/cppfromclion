#include <iostream>
#include "Person.h"


int main() {
    std::cout << "testing clion vcs" << std::endl;

    Person person1("John Smith", 22);

    std::cout << person1.getName() << std::endl;
    std::cout << person1.getAge() << std::endl;
}
