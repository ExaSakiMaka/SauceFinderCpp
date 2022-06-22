#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void add_history(int sauce){
  ofstream myfile;
  myfile.open ("bin/history.txt",ios::app);
  myfile << sauce <<"\n";
  myfile.close();
}

int main() {
  int x;
  int answer;
  cout << "Sauce : "; 
  cin >> x; // Get user input from the keyboard
  cout << "opening: " << x << "\n";

  ostringstream oss;
  oss << "start https://nhentai.net/g/" << x;
  string var = oss.str();
  const char * link = var.c_str();

  add_history(x);
  system(link);
  //system("pause");
}