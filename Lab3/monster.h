#ifndef MONSTER_H
#define MONSTER_H
#include "living.h"
class Monster : public Living {
  protected:
    int m_strength;
  public:
    Monster();
    int strength() const;
    void attack(Living& target);
    virtual void die();
};
#endif
