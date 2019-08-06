#include "reval/reval.h"

int main(){
  Reval inp {};
  while (1)
  {
    inp.printPrompt();
    inp.askUserInput();
  }
  return 0;
}