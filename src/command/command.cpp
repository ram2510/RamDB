#include<iostream>
#include "command.h"
#include "../../lib/termcolour.hpp"
#include<string>
using namespace std;

/**
 * @method of Command
 * 
 * @param inputPtr (string pointer) we will use this to process the command
 * 
 * @description - This method checks whether te input by the user is valid or not if the 
 *                input is invalid it returns false else true
 * 
 * @return - boolean indicating whether the command is valid or not
 * 
 */
bool Command::checkCommand(const string *inputPtr){
  // store the value
  string input = *inputPtr;

  // check the command for valid input
  if(input.substr(0,3)=="ins"||input.substr(0,3)=="sel"||input.substr(0,3)=="del"||input.substr(0,3)=="dis")
    return true;
  else
    return false;
}

/**
 * @method of Command
 * 
 * @param inputPtr (string pointer) we will use this to determine the statement type
 * 
 * @description - This method assigns the statement type to the stamentType datamember so that we can
 *                use it for executing
 * 
 * @return - boolean indicating whether the statementType data member is initialised of not
 * 
 */
bool Command::prepareStatement(const string *inputPtr){
  
  string input = *inputPtr;

  // initialise the data member depending on the condition
  if(input.substr(0,3)=="ins"){
    statementType = 1;
    return true;
  }
  else if(input.substr(0,3)=="sel"){
    statementType = 2;
    return true;
  }
  else if(input.substr(0,3)=="del"){
    statementType = 3;
    return true;
  } 
  else{
    statementType = 4;
    return true;
  }

  // return false indicating error as unrecognizable command
  return false;
}

/*
* @method of Command
*
* @param None
*
* @description This method is a getter method and returns the statementType depdneing on the input
*                The type of statements with corresponding number
*                1 - Insert
*                2 - Select
*                3 - Delete
*                4 - Display

* @return int depending on the user input
*/
int Command::returnStatementType(){
  return statementType;
}