#include <iostream>
#include "tape.h"
#include "episode.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;


Tape::Tape():m_title{"StarWars"},m_volume{1}
{}
string Tape::title() const
{

  return m_title;

}

int Tape::volume() const
{
  return m_volume;

}

void Tape::set_title(const string title){
 m_title = title;
}

void Tape::set_volume(const int volume){
m_volume = volume;
}

void Tape::add(const Episode episode){
  m_Episode.push_back(episode);
}

bool Tape::operator==(const Tape& rhs)
{
  if(m_volume == rhs.m_volume)
    return true;
  return false;


}

bool Tape::operator!=(const Tape& rhs)
{
  return !(*this == rhs);

}

bool Tape::operator<(const Tape& rhs)
{
  if(m_volume < rhs.m_volume)
    return true;
  return false;

}
 bool Tape::operator<=(const Tape& rhs)
{
  if(*this < rhs || *this == rhs)
    return true;
  return false;
}
 bool Tape::operator>(const Tape& rhs)
{
  return !(*this <= rhs);
}

 bool Tape::operator>=(const Tape& rhs)
{
  if(*this > rhs || *this == rhs)
    return true;
  return false;
}




string Tape::to_string() const
{

  ostringstream sout;
  sout << m_title << "( " << m_volume << " )" << endl;
  for(auto& e :m_Episode)
    sout << e;
  return sout.str();
 
}

ostream& operator<< (ostream& os, const Tape& tap){
  os <<tap.to_string();
  return os;

}

istream& operator >> (istream& is, Tape& tap){
  int v;
  is>>v;
  string t;
  getline(is,t);
  //is >> ws;
  tap.set_title(t);
  tap.set_volume(v);
  int num;
  is>> num;
  for(int b = 0; b < num; ++b)
  {
    Episode e;
    is>>e;
    tap.add(e);
  }
  return is;
}



