//
// Created by alexr on 13/01/2021.
//

#include <time.h>
#include <ctime>
#include <sys/stat.h>
#include "Exercise1.h"
#include "../Helpers/iohelper.h"

void Exercise1::execute() {
    string fileName = iohelper::getInput("Filename to check");
    if (FILE *file = fopen(fileName.c_str(), "r")) {
        struct stat stat_buf{};
        int rc = stat(fileName.c_str(), &stat_buf);
        if(rc == 0){
            cout << fileName << ", " << stat_buf.st_size << " bytes, last modified: " << std::ctime(&stat_buf.st_ctime);
        } else {
            cout << "Failed to get file metadata.";
        }
        fclose(file);
    } else {
        cout << fileName << " does not exist";
    }
}

std::string Exercise1::name() {
    return "File Exists";
}
