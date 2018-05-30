// queue::size
#include<stdio.h>
#include <iostream>       // std::cout
#include <queue>          // std::queue

int main ()
{
  std::queue<int> myints;
  std::cout << "0. size: " << myints.size() << '\n';

  for (int i=0; i<5; i++) myints.push(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.pop();
  while(!myints.empty())
  {
      printf("%d\n",myints.front());
      myints.pop();
  }
  std::cout << "2. size: " << myints.size() << '\n';

  return 0;
}
