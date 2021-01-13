//
// Created by alexr on 13/01/2021.
//

#include "Exercise3.h"
#include "../Helpers/iohelper.h"
#include <iostream>
#include <string>
#include <fstream>

void Exercise3::execute() {
    string fileName = iohelper::getInput("Please enter a valid filename");
    ifstream file(fileName);
    if (!file.is_open()) {
        cout << "Sorry, '" << fileName << "' does not exist.";
        return;
    }

    int lineNum = 1;
    string line;
    while(getline(file, line)){
        cout << lineNum << ": " << line << endl;
        ++lineNum;
    }

    file.close();

    cout << "Total number of lines read: " << (lineNum - 1)
}

std::string Exercise3::name() {
    return "File Reader";
}
