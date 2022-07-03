#ifndef LIVING_H
#define LIVING_H
class Living {
  private:
    int m_health;
  public:
    Living();
    int health() const;
    bool is_dead() const;
    void wound(const int how_much);
    void heal(const int how_much);
    virtual void die() = 0;
};
