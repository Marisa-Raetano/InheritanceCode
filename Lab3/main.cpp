#include "living.h"
#include "monster.h"
#include "player.h"
#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;
const unsigned int HEIGHT = 10;
const unsigned int WIDTH = 10;
typedef pair<int,int> Point;
map<Point, Monster *> mons;
int x, y;
Monster* find_monster(int row, int col)
{
  map<Point, Monster *>::iterator it = mons.begin();
  while (it != mons.end()) {
    if (it->first.first == row && it->first.second == col)
      return it->second;
    ++it;
  }
  return NULL;
}
void print_map(Player& p)
{
  for (int row = 0;row < HEIGHT; ++row) {
    for (int col = 0; col < WIDTH; ++col) {
      if (find_monster(row, col) != NULL) {
	cout << 'm';
      }
      else if (y == row && x ==col)
	cout << 'p';
      else
	cout << '.';
    }
    cout << endl;
  }
  cout << "Health: " << p.health() << '\t';
  cout << "Strength: " << p.strength() << '\t';
  cout << "Score: " << p.score() << endl;
}
int main()
{
  Player p;
  string command;
  //Place monsters
  for (int i=0; i < HEIGHT; ++i) {
    int col = rand() % WIDTH;
    mons[make_pair(i, col)] = new Monster;
  }
  while (!p.is_dead()) {
    print_map(p);
    cin >> command;
    if (tolower(command[0]) == 'n' && y > 0) {
      --y;
    }
    else if (tolower(command[0]) == 's' && y < HEIGHT-1) {
      ++y;
    }
    else if (tolower(command[0]) == 'w' && x > 0) {
      --x;
    }
    else if (tolower(command[0]) == 'e' && x < WIDTH-1) {
      ++x;
    }
    //Check for monsters on this square
    Monster *mon = find_monster(y, x);
    if (mon != NULL) {
      cout << "You attack the monster!" << endl;
      //Player attacks first
      p.attack(*mon);
      //Then the monster
      mon->attack(p);
      if (mon->is_dead()) {
	//Free the memory used by the monster
	delete mon;
	//Mark the row and column as empty
	mons[make_pair(y,x)] = NULL;
      }
    }
  }
}
