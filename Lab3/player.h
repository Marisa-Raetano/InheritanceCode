#ifndef PLAYER_H
#define PLAYER_H
#include "living.h"




class Player : public Living {
  private:
    int m_strength;
    int m_score;
    int m_heal();
  public:
    Player();
    int strength() const;
    int score() const;
    void attack(Living& target);
    void die();
    void heal(Living & target);










};
#endif
