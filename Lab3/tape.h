#ifndef TAPE_H
#define TAPE_H
#include <string>
#include <vector>
#include "episode.h"
#include <iostream>
using namespace std;

class Tape{

  private:
    string m_title;
    int m_volume;
    vector<Episode> m_Episode;


  public:
    Tape();

    //Accesors

   string title() const;
   int volume() const;
   string to_string() const;

 
   //Mutators

   void set_title(const string title);
   void set_volume(const int volume);
   void add(const Episode episode);



bool operator==(const Tape& rhs);
bool operator!=(const Tape& rhs);
bool operator<(const Tape& rhs);
bool operator<=(const Tape& rhs);
bool operator>(const Tape& rhs);
bool operator>=(const Tape& rhs);

friend ostream& operator<< (ostream& os, const Tape& tap);
friend istream& operator >> (istream& is, Tape& tap);
};



#endif

