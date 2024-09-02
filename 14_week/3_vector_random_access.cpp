//Program to demonstrate STL iterators.
#include <iostream>
#include <vector>

using std::cout;    // Using only a part of std
using std::endl;
using std::vector;

int main( )
{
  vector<int> container;

  for (int i = 1; i <= 4; i++)
    container.push_back(i);

  auto it = container.begin();
  //vector<int>::iterator it = container.begin();
  for (; it != container.end( ); it++)
    cout << *it << " ";
  cout << endl;

  // Setting the last item with zero
  // Why should we use --?
  //container[3] = 0;
  *--it = 0;
  
  /*for (it = container.begin( ); it != container.end( ); it++)
    cout << *it << " ";
  cout << endl;*/

  // Setting the second item with zero
  // Why -2 is used here?
  it[-2] = 0;
  for (it = container.begin( ); it != container.end( ); it++)
    cout << *it << " " ;
  cout << endl;
  
  return 0;
}
