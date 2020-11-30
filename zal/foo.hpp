#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > test;
    std::vector< char > test_rev;
    for (Human it : people) {
        std::cout << it.getAge();
        if (it.isMonster() == true) {
            test.emplace_back('n');
        }
        else {
            test.emplace_back('y');
        }
        }    
for (auto it1 = test.crbegin(); it1 != test.crend(); ++it1) {
    test_rev.emplace_back(*it1);
}
for (Human x : people) {
    x.birthday();
    std::cout << x.getName() << " " << x.getAge() << " " << std::endl;
}
    return test_rev;
}
