#include <iostream>

using namespace std;

//The code has errors
void show_volume( int length, int width=1, int height );

int main()
{
  show_volume(2, 4, 6); 
  show_volume(3, 5);    
  show_volume(7);     
}

void show_volume( int length, int width, int height )
{
  cout << length * width * height << endl;
}
