#include<string>
#include<iostream>
#include "reval/reval.h"
#include "../lib/termcolour.hpp"
using namespace std;


int main(){
  // we initilaise the input object 
  Reval inp {};

  // we initialise the variable that will have the user command on evry loop
  string cmd;

  // print welcome message
  inp.printWelcMessage();

  // the main loop
  while (1)
  {
    inp.printPrompt();
    inp.askUserInput();
    cmd = inp.getCmd();
    if(cmd.compare(".exit")==0)
      exit(EXIT_SUCCESS);    
    else
      cout<<termcolor::red<<"  Unrecognized command - "<<termcolor::reset<<cmd<<endl;
    // cout<<cmd<<endl;
  }
  return 0;
}