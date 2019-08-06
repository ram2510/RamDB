#include "reval/reval.h"

int main(){
  Reval inp {};
  inp.printWelcMessage();
  while (1)
  {
    inp.printPrompt();
    inp.askUserInput();
  }
  return 0;
}