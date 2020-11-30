#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > test;
    std::vector< char > test_rev;
    for (Human it : people) {
        it.birthday();
        if (it.isMonster() == true) {
            test.emplace_back('n');
        }
        else {
            test.emplace_back('y');
        }
    }

    for (auto it1 = test.crbegin(); it1 != test.crend(); ++it1) {
        test_rev.push_back(*it1);
    }
    return test_rev;
}
