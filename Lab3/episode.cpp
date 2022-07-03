#include <iostream>
#include "episode.h"
#include <string>
#include <sstream>
#include <iostream>
#include "episode.h"
using namespace std;


Episode::Episode():m_number{1},m_name{"StarWars"}
{}

int Episode::number() const
{
  return m_number;
}


string Episode::name() const
{
  return m_name;
}

void Episode::set_number(const int number){
  m_number = number;
}

void Episode::set_name(const string name){
  m_name = name;
}

string Episode::to_string() const
{
  ostringstream sout;
  sout << m_name << "( " << m_number << " )" << endl;
  return sout.str();

}
  ostream& operator<< (ostream& os, const Episode& epi){ 
    os << epi.to_string();
    return os;

  }

  istream& operator >> (istream& is, Episode& epi){
    int l;
    is>>l;
    string m;
    getline(is, m);
    Episode ep;
    epi.set_name(m);
    epi.set_number(l);
    return is;


  };




