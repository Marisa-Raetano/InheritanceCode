#ifndef EPISODE_H
#define EPISODE_H
#include <string>
#include <sstream>
using namespace std;

class Episode{

  private:
    int m_number;
    string m_name;

  public:
    Episode();

    //Accesors

    int number() const;
    string name() const;
    string to_string() const;


    //Mutators
   
    void set_number(const int number);
    void set_name(const string name);

friend ostream& operator<< (ostream& os, const Episode& ep);
friend istream& operator >> (istream& is, Episode& ep);
};

#endif 


