//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_EXERCISE_H
#define ADAADVANCEDPROGRAMMING_1_EXERCISE_H

#include "string"


class Exercise {
public:
    /// Code to execute for this exercise.
    virtual void execute();

    /// The name of the exercise.
    /// \return
    virtual std::string name();
};


#endif //ADAADVANCEDPROGRAMMING_1_EXERCISE_H
