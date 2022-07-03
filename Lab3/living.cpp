#include "living.h"
#include "player.h"
#include "monster.h"
#include <iostream>
#include <map>


using namespace std;


int main(){

Player one;
one.set_name();
one.set_health(50);
one.set_score(0);

Player two;
two.set_name();
two.set_health(50);
two.set_score(0);

if(health >= 0)
  is_dead = false;
else
  is_dead = true;

if(wound > 0)
{
  how_much = wound;
  health = health - how_much;
}
if(health <= 0)
{

  die();

}
if(heal > 0)
{
  how_much = heal;
  health = health + how_much;
}
}


