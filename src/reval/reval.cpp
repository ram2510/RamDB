#include "reval.h"
#include<iostream>
#include<string>
#include "../../lib/termcolour.hpp"
using namespace std;

/**
 * @constructor of Reval
 * 
 * @description - This constructor class is used to initialse the pointer which will be storing 
 *                the address where the user input will be stored
 * 
 * @param - none
 * 
 */
Reval::Reval(){
  cmd = new string();
}

/**
 * @destructor of Reval
 * 
 * @description - This destructor will be used to destroy the pointer initialised in the main
 * 
 * @param - none
 */

Reval::~Reval(){
  delete cmd;
}

/**
 * @method - printWelcMessage
 * 
 * @description - This method will print the welcome message whenever the user types the program
*/
void Reval::printWelcMessage(){
  cout<<termcolor::green<<"\n  Welcome user to RamDB - A simple Database hope you are having a good day"<<endl;
  cout<<"  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
  cout<<" |                                                                          |"<<endl;
  cout<<" |         Press The help command to know all the command you can use       |"<<endl;
  cout<<" |                                  OR                                      |"<<endl;
  cout<<" |         Get your hand dirty with the command you already know. lets go   |"<<endl;
  cout<<" |                                                                          |"<<endl;
  cout<<" |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |"<<termcolor::reset<<endl;
}

/**
 * @method - askUserInput of Reval
 * 
 * @description - This method will be use to accept the user input and store in the pointer variable
 */
void Reval::askUserInput(){
  cin>>*cmd;
}

/**
 * @method - printPrompt of Reval
 * 
 * @decription - this method will be used to print the >>
 */
void Reval::printPrompt(){
  cout<<"\nramdb> ";
}

/**
 * @method - getCmd
 * 
 * @description- return the command string stored in the pointer
 * 
 * @return - string 
 */

string Reval::getCmd(){
  return *cmd;
}