#include <list>
#include "Exercise1/Exercise1.h"
#include "vector"
#include "iostream"
#include "Helpers/iohelper.h"
#include "Exercise.h"

std::vector<Exercise *> getExercises();

using namespace std;

int main() {
    cout << "--------------------------------------------------------------------------------" << endl; // Splitter
    std::vector<Exercise *> exercises = getExercises(); // Vector containing the menus
    // Loop through the menu system and list its index + 1, along with the exercise name
    for (int i = 0; i < exercises.size(); ++i) {
        cout << "[" << i + 1 << "] " << exercises[i]->name() << endl;
    }

    // Ask the user for their menu option
    int option = stof(iohelper::getInput("Please choose a exercise"));
    auto *exercise = exercises[option - 1];
    cout << "Running: " << exercise->name() << endl;
    // Execute the exercise
    exercise->execute();
}

std::vector<Exercise *> getExercises() {
    // Add all the exercises to the vector menu system.
    std::list<Exercise *> exercises;
    exercises.push_back(new Exercise1());

    vector<Exercise *> vectorExercises(exercises.begin(), exercises.end());
    return vectorExercises;
}