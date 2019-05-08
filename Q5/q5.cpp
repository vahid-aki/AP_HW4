#include <iostream>
#include <memory>
#include <cstring>
#include "ctext.h"
#include "stack.hpp"

int main() {
  Stack<std::shared_ptr<Ctext>> stack;
  std::string base{"TEXT"};
  for(char a{'A'}; a <= 'Z'; a++)
    stack.push(std::make_shared<Ctext>(base + a));
    
  //Pop everything out
  int N{stack.getcount()};
 
  if(stack.isEmpty())
    {
      std::cout << "Stack is empty" << std::endl;
      return -1;
    }
  
  for(int i{}; i < N; i++)
    std::cout << stack.pop()->getText() << std::endl;

  if(stack.isEmpty())
    std::cout << "Stack is Empty" << std::endl;
  return 0;
}
