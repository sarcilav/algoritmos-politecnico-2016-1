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
#define D(x) //cout << #x " = " << (x) << endl

const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS){
  return( x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}
stack<int> pila;
stack<int> maximos;
int maximo = -1;

void add(int x){
  D(x);
  pila.push(x);
  if(maximo <= x)
  {
    D(maximo);
    maximos.push(x);
    maximo = x;
    D(maximo);
  }
}

void remove() {
  int top = pila.top();
  D(top);
  pila.pop();
  if(top == maximo)
  {
    maximos.pop();
    if(maximos.empty())
      maximo = -1;
    else
      maximo = maximos.top();
  }
}

int maxelement(){
  return maximos.top();
}

int main()
{
  int N;
  cin >> N;
  int tipoQ;
  for(int i = 0; i < N; ++i)
  {
    cin >> tipoQ;
    if(tipoQ == 1)
    {
      int x;
      cin >> x;
      add(x);
    }
    else if(tipoQ == 2)
      remove();
    else
      cout<< maxelement() << endl;
  }
  
  
  return 0;
}
