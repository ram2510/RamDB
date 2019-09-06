#include<iostream>
#include "operations.h"
#include<string>
using namespace std;

/**
* @method of Opeations
*
* @param StatementType which will depend on the user value
*
* @description This will excute the action required depnding on the user input
*                The type of statements with corresponding number
*                1 - Insert
*                2 - Select
*                3 - Delete
*                4 - Display
*
* @return none
*
*/
void Operations::executeStatement(int statemntType){
  // perfoem operations depending on the statemenType
  switch (statemntType)
  {
  // insert action
  case 1:
    cout<<"Insert";
    break;
  // select action
  case 2:
    cout<<"Select";
    break;
  // delete action
  case 3:
    cout<<"delete";
    break;
  // display action
  case 4:
    cout<<"Display";
    break;
  }
}