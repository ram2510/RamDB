#include "reval.h"
#include<iostream>
#include<string>
#include "../lib/termcolour.hpp"
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
 * @method - printWelecMessage
 * 
 * @description - This method will print the welcome message whenever the user types the program
*/


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
  cout<<"\n>> ";
}