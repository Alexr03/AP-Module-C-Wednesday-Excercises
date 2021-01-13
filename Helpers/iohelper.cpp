//
// Created by alexr on 11/01/2021.
//

#include "iohelper.h"
#include <regex>

std::string iohelper::getInput(string question, const string& regex) {
    string answer;
    question += ":";
    cout << question;
    if(!regex.empty()){
        while(true){
            std::regex r(regex);
            getline(cin, answer);
            if(!std::regex_match(answer, r)){
                cout << "Invalid value, please try again: ";
                continue;
            }
            return answer;
        }
    } else{
        getline(cin, answer);
        return answer;
    }
}
