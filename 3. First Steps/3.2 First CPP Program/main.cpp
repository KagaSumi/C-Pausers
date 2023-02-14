#include <iostream> //To load prebuilt libraries
/* 
Help print to console
std::endl == \n

Different type of errors:
Compiler error
    Cannot compile go fix it 
Runtime Error
    Compiles, but doesn't work as intended also can causes crashes
Warning
    Non serious error but compiler is telling you it might have problems so go fix it
*/
int main() // Start main :)
{
    // std::cout << "Hello, World!" << std::endl;
    std::cout << "Number 1" << std::endl;
    std::cout << "Number 2" << std::endl;
    std::cout << "Number 3" << std::endl;
    int divide_by_zero = 20/0; // This creates an error!!
    
    return 0;//Send a message to operating system to let them know we finished successfully
}