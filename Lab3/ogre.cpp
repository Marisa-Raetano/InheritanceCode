#include "ogre.h"
#include "living.h"
#include <string>
#include <iostream>
#include <algorithim>
using namespace std;






void Ogre::attack(Living& target)
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


void Ogre::die()
{
 cout << "The ogre has died." << endl;
 m_strength = 0;
}
