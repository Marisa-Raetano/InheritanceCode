#include "monster.h"
#include "living.h"
#include <string>
#include <iostream>
#include <algorithim>
using namespace std;

int main()
{

  Monster::Monster() : Living()
  {
    m_strength = 10;
  }

  void Monster::attack(Living& target)
  {
    int roll = (rand() % 6) + 1;
    if (roll >=4) {
      target.wound(m_strength);
    }
    else {
      roll = (rand() % 10) + 1;
      if (roll == 5)
	--m_strength;
    }
  }

  void Monster::die()
  {
    cout << "The monster has died." << endl;
    m_strength = 0;
  }
