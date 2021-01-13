//
// Created by alexr on 13/01/2021.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Exercise2.h"
#include "../Helpers/iohelper.h"

using namespace std;

void Exercise2::execute() {
    while(true){
        string name = iohelper::getInput("Enter name");
        std::ofstream file("list.csv", std::ios_base::app);
        if (!file) {
            cout << "Cannot open list.csv";
            return;
        }

        cout << "Updating file..." << endl;

        file << name << endl;

        string again = iohelper::getInput("Add another (y/n)");
        if(again == "n"){
            cout << "Goodbye";
            return;
        }
    }

}

std::string Exercise2::name() {
    return "File Writer";
}
