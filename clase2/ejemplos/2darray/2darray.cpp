using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }
template <class T> int toInt(const T &x)
{ stringstream s; s << x; int r; s >> r; return r; }

#define ALL(x) ((x).begin(),(x).end())
#define D(x) cout << #x " = " << (x) << endl

const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS){
  return( x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}
int d2[6][6];
int suma(int i, int j)
{
  int s = d2[i][j] + d2[i][j+1] + d2[i][j+2]
    + d2[i+1][j+1]
    + d2[i+2][j] + d2[i+2][j+1] + d2[i+2][j+2];
  return s;
}
int main(){

  int n = 6;
  for(int i = 0; i < n ; ++i)
    for(int j = 0; j < n ; ++j)
      cin >> d2[i][j];

  // for(int i = 0; i < n ; ++i)
  // {
  //  for(int j = 0; j < n ; ++j)
  //    cout << d2[i][j];
  //  cout << endl;
  // }
  int mayor = -10000;
  for(int i = 0 ; i <= 3 ; ++i)
    for(int j = 0; j <= 3 ; ++j)
      mayor = max(mayor, suma(i,j));
  cout << mayor << endl;
  cout << (3^5) << endl;
  return 0;
}
