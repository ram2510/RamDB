//========================================================================================
/*                                                                                      *
 *                       The main header files like buil-in files                       *
 *                                                                                      */
//========================================================================================

#include<string>
#include<iostream>

//########################################################################################

//========================================================================================
/*                                                                                      *
 *                        The header files which are user defined                       *
 *                                                                                      */
//========================================================================================

#include "reval/reval.h"
#include "command/command.h"
#include "operations/operations.h"

//########################################################################################

//========================================================================================
/*                                                                                      *
 *                          The extenal downloaded header files                         *
 *                                                                                      */
//========================================================================================

#include "../lib/termcolour.hpp"

//########################################################################################

using namespace std;


int main(){

  // the variables
  int statementType;

  // we initilaise the input object 
  Reval inp {};

  // we initialise the command object;
  Command cmd {};

  // initialise the operation object
  Operations operations {};

  string userInp;

  bool isCommandValid,isStatementTypeValid;

  // print welcome message
  inp.printWelcMessage();

  // the main loop
  while (1)
  {
    inp.printPrompt();

    inp.askUserInput();
    
    userInp = inp.getCmd();
    
    
    if(userInp.compare(".exit")==0)
      exit(EXIT_SUCCESS);
    
    // check command validity
    isCommandValid = cmd.checkCommand(&userInp);
    
    if(!isCommandValid){
      cout<<termcolor::red<<"  Unrecognized command - "<<termcolor::reset<<userInp<<endl;
      continue;    
    }

    isStatementTypeValid = cmd.prepareStatement(&userInp);

    if(isStatementTypeValid){
      // get the type of action the user wants to perform
      statementType = cmd.returnStatementType();
      // cout<<"hello";
      // perofrm actin here
      operations.executeStatement(statementType);
      continue;
    }else{
      cout<<termcolor::red<<"  Unrecognized command at the start of - "<<termcolor::reset<<userInp<<endl;
      continue;
    }

    // if(userInp.compare(".exit")==0)
    //   exit(EXIT_SUCCESS);    
    // else
    //   cout<<termcolor::red<<"  Unrecognized command - "<<termcolor::reset<<userInp<<endl;
    // // cout<<userInp<<endl;
  }
  return 0;
}