// This is a comment
/* This is a comment - Comments are your friend! */ 
/* This is a comment that 
   spans multiple lines */

#include <iostream> 

/* #include tells the compiler to import other files at this line of code - this lets us reuse code other people, or the compiler authors themselves have written */
/* iostream - http://www.cplusplus.com/reference/iostream/
    Defines the standard input and output classes and objects
 */

int main(int argc, char **argv) { 
    // cout is an object in the namespace "std" (more later).  
    // endl is a special operator that represents a newline and flushes the stream. 
    std::cout << "Hello world" << std::endl;

    // return a return code of 0 to the "shell" or operating system
    return(0);
}
