//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_IOHELPER_H
#define ADAADVANCEDPROGRAMMING_1_IOHELPER_H


#include <string>
#include <iostream>
using namespace std;

class iohelper {
public:
    /// Get input from the user
    /// \param question Question to ask the user
    /// \param regex Regex (if any) to validate against the user input
    /// \return The user input that was validated against the regex.
    static std::string getInput(string question = "", const string& regex = "");
};


#endif //ADAADVANCEDPROGRAMMING_1_IOHELPER_H
