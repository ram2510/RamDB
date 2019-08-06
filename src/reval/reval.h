#ifndef REVAL_H_
#define REVAL_H_
#include<string>
using namespace std;

//========================================================================================
/*                                                                                      *
 *   This class will handle our read evaluate loop so this will handle the user input   *
 *                                                                                      */
//========================================================================================
/**
 * @dataMembers = private cmd (string) This will store user input
 */
class Reval {
  private:
    string *cmd;
  public:
    
    // This will be our constructor class this will be used to create the pointer object
    Reval();

    // This is our destructor class this will be used to destory the pointer to prevent memory leak
    ~Reval();

    // this is the method that prints the welcome message
    void printWelcMessage();

    // this method will be used to read the input and store in the address in the pointer
    void askUserInput();

    // this method will be used to print the prompt ">>"
    void printPrompt();
};

#endif 