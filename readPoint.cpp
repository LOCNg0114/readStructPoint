/*Given an incomplete program:
- struct POINT has 2 properties: x, y
- function readPoint: create new struct POINT (x, y read from file input) và trả về con trỏ đến cấu trúc này
- function display: print x, y of POINT
- function main: call readPoint to create new POINT and call display to print it.

To do: complete function readPoint

Input description:
- The first number is x
- The second number is y
*/


#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

ifstream ifs;

struct POINT
{
  float x;
  float y;
};

void display(POINT *p)
{
  if (p != NULL)
  {
    cout << p->x << endl;
    cout << p->y << endl;
    delete p;
  }
}

POINT *readPoint()
{
  float x =0, y = 0;
  ifs >> x;
  ifs >> y;
  POINT *point = new POINT;
  point->x = x;
  point->y = y;
  return point;
  
}

int main(int narg, char **argv)
{
  ifs.open("testcase.txt");

  POINT *p = readPoint();
  display(p);
  delete p;

  ifs.close();
  return 0;
}