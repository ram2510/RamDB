#include<string>
#include<iostream>
#include "reval/reval.h"
#include "command/command.h"
#include "../lib/termcolour.hpp"
using namespace std;


int main(){
  // we initilaise the input object 
  Reval inp {};

  // we initialise the command object;
  Command cmd {};

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
    
    //c heck command validity
    isCommandValid = cmd.checkCommand(&userInp);
    
    if(isCommandValid){
      continue;
    }else{
      cout<<termcolor::red<<"  Unrecognized command - "<<termcolor::reset<<userInp<<endl;
      continue;
    }

    isStatementTypeValid = cmd.prepareStatement(&userInp);

    if(isStatementTypeValid){
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