#include <iostream>
using namespace std;

int main() 
{
  enum class IOResult {Error, Ok};
  enum class ParseResult {Error, Ok};
  
  IOResult io_return_code = IOResult::Error;
  switch(io_return_code) {
    case IOResult::Ok:
      cout << "IO done" << endl; break;
    case IOResult::Error:
      cout << "IO Error" << endl;
  }

  ParseResult parse_return_code = ParseResult::Ok;
  switch(parse_return_code) {
    case ParseResult::Ok:
      cout << "Parse done" << endl; break;
    case ParseResult::Error:
      cout << "Parse Error" << endl;
  }
}