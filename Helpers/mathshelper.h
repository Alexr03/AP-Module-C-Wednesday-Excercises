//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_MATHSHELPER_H
#define ADAADVANCEDPROGRAMMING_1_MATHSHELPER_H

#include <string>
#include <iostream>
#include <list>
using namespace std;

class mathshelper {
public:
    /// Get the even amount of numbers in a list.
    /// \param numbers The numbers to use
    /// \return The amount of even numbers
    static int getNegativeCount(const list<int>& numbers);

    /// Get the odd amount of numbers in a list.
    /// \param numbers The numbers to use
    /// \return The amount of odd numbers
    static int getPositivesCount(const list<int> &numbers);

    static int getZeroCount(list<int> list);
};


#endif //ADAADVANCEDPROGRAMMING_1_MATHSHELPER_H
