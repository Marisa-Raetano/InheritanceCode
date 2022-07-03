#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "tape.h"
using namespace std;



int main(int argc, char* argv[])
{
  if (argc != 2) {
    cout << "Syntax: ./Warmup <filename>" << endl;
    return 1;
 }
  ifstream fin(argv[1]);
  vector<Tape> collection;
  Tape cur;
  while (fin >> cur)
 {
   collection.push_back(cur);
 }
  sort(collection.begin(), collection.end());
  for (vector<Tape>::const_iterator it = collection.begin();
      it != collection.end(); ++it) {
    cout << *it;
    cout << endl; //Prints a blank line
 }
  fin.close();
}
