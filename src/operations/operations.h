#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_
#include<string.h>

//========================================================================================
/*                                                                                      *
 *     This class will handle all the computationsal tasks like adding deleting etc     *
 *                                                                                      */
//========================================================================================


class Operations{
  public:
    // this method will be used to excute the statement depending on the
    // value of the statementType
    void executeStatement(int statementType);

};

#endif