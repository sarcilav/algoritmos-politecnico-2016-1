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

const int MAX_N = 100000;
vector<vector<int> > db;

int query1(int x, int y, int N, int lastAns){
  int si = (x ^ lastAns) % N;
  db[si].push_back(y);
  return lastAns;
}

int query2(int x, int y, int N, int lastAns){
  int si = (x ^ lastAns) % N;
  int size = db[si].size();
  lastAns = db[si][y % size];
  cout << lastAns << endl;
  return lastAns;
}

int main()
{
  int N, Q;
  int lastAns = 0;
  cin >> N >> Q;  
  for(int i = 0; i < N ; ++i)
    db.push_back(vector<int>());

  for(int i = 0 ; i < Q ; ++i)
  {
    int q, x, y;
    cin >> q >> x >> y;
    if(q == 1)
      query1(x, y, N, lastAns);
    else
      lastAns = query2(x, y, N, lastAns);
  }
  
  return 0;
}
  
