#include <iostream>
#include<fstream>
using namespace std;

int main()
{ string name,namel,name2;
  ofstream out("fruit.txt");
  out<<"Apple\nOrange\nBanana\n";
  out.close();

  ifstream in("fruit.txt");
  in>>name>>namel>>name2;
  //cout<<name<<namel<<name2;
  in.close();

  fstream rse("fruit.txt",ios::out|ios::app);
  rse<<"fresh fruits";
  rse.close();






}


