#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
  string a;
  int current_x , current_y;
  int b;
  char c ;
  cin >> current_x;
  cin >> current_y;
  cout << "Starting point : (" << current_x <<"," << current_y << ")" <<endl ;
  cin >> a ;
  b = a.length();
  for (int i=0 ; i < b ; i++)
  {
      switch(a[i])
{
      case '>' : current_x++;
      break;

      case '<' : current_x--;
      break;

      case '^' : current_y++;
      break;

      case 'v' : current_y--;
      break;

      case '~' : while (a[i+1] != '~' && i < b)
      {
        if (a[i+1] == '>'){current_x--;}
        if (a[i+1] == '<'){current_x++;}
        if (a[i+1] == '^'){current_y--;}
        if (a[i+1] == 'v'){current_y++;}
        i++;
    }
    i++;
    break;
  }
  }
  cout <<"("<<current_x<<","<<current_y<<")";
  return 0;
}
