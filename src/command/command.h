#ifndef COMMAND_H_
#define COMMAND_H_
#include<string>

//========================================================================================
/*                                                                                      *
 *     This class will handle all the task related to command/input/output of the DB    *
 *                                                                                      */
//========================================================================================
/**
 * @datamember - The type of stament selected (1)
 *                1 - Insert
 *                2 - Select
 *                3 - Delete
 *                4 - Display
 */
class Command{
  private:
   
    int statementType;

  public:

    // this method will be used to check the syntax of the command
    bool checkCommand(const std::string *input);

    // this command will be used to store the number associated with the statment in the statmenttype data member
    // return error if the input is worng
    bool prepareStatement(const std::string *input);

    // this method will be the getter method that will return the statememntType
    int returnStatementType();
};

#endif 