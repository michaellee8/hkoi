#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

vector<long> o_chart

class Datestring{
  public:
    string s;
    long h;
    Datestring(string str, long hash);
};

Datestring::Datestring(string str){
  s = str;
  int y,d;
  char[] _m;
  sscanf(s.c_str(),"%d, %s %d",&d,_m,&y);
}

int main()
{
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int i;
  string s;
  datestring p;
  vector<datastring> v;
  for (i=0;i<n;i++){
    getline(cin,s);
    v.push_back(s);
  }
  sort(v.begin(),v.end(),datacompr);
}

bool datacompr(string s1, string s2){
  
}