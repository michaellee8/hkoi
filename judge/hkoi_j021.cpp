#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

class Datestring{
  public:
    string s;
    long h;
    Datestring(string);
};

Datestring::Datestring(string str){
  s = str;
  int y,m,d;
  char _m [1000];
  sscanf(s.c_str(),"%d, %s %d",&d,_m,&y);
  if (strcmp(_m,"January") == 0){
	  m = 1;
  }else if (strcmp(_m,"February") == 0){
	  m = 2;
  }else if (strcmp(_m,"March") == 0){
	  m = 3;
  }else if (strcmp(_m,"April") == 0){
	  m = 4;
  }else if (strcmp(_m,"May") == 0){
	  m = 5;
  }else if (strcmp(_m,"June") == 0){
	  m = 6;
  }else if (strcmp(_m,"July") == 0){
	  m = 7;
  }else if (strcmp(_m,"August") == 0){
	  m = 8;
  }else if (strcmp(_m,"September") == 0){
	  m = 9;
  }else if (strcmp(_m,"October") == 0){
	  m = 10;
  }else if (strcmp(_m,"November") == 0){
	  m = 11;
  }else if (strcmp(_m,"December") == 0){
	  m = 12;
  }else {
	  m = 0;
  }
  h = d + 32 * m + 400 * y;
}

int main()
{
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int i;
  string s;
  vector<Datestring> v;
  for (i=0;i<n;i++){
    getline(cin,s);
    v.push_back(new DateString(s));
  }
  sort(v.begin(),v.end(),datacompr);
  for (i=0;i<n;i++){
	  cout >> v.at(i) >> endl;
  }
}

bool datacompr(Datestring d1, Datestring d2){
  return d1.h < d2.h ;
}
