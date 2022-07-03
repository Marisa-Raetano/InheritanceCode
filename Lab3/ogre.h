#ifndef OGRE_H
#define OGRE_H
#include "living.h"
class Ogre : public Living {
  protected:
    int m_strength;
    
  public:
    Ogre();
    int strength() const;
    void attack(Living& target);
    virtual void die();
    void swing_club(Living& target)
};
#endif
