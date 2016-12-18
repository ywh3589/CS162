#include <iostream>
#include <cstdlib>
#include "file1.h"
#include "file2.h"

int main(int argc, const char * argv[]) {

    system("clear");

    std::cout << "Hello, World!\nThis code is coming from main.\n\n";

    std::cout << "This is what happens when we call file one:\n";
    one();
    std::cout << std::endl;

    std::cout << "This is what happens when we call file one:\n";
    two();
    std::cout << std::endl;


    std::cout << "And we're done.\n";

    return 0;
}
