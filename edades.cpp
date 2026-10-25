#include <iostream>
using namespace std;
int main ()
{
  int L;
  cin >>  L;
  if ( L <= 3 )
  {
    cout << "bebe";
  }
  else if ( L <= 14)
  {
    cout << "niño";
  }
  else if ( L <= 18)
  {
    cout << "joven";
  }
  else if (L <= 65)
  {
    cout << "adulto";
  }
  else 
  {
    cout << "adulto de la tercera edad";
  }
  return 0;

}