#include <iostream>
#include <cstring>
#include "videogames.h"

using namespace std;

//gets the title, year, publisher, and rating from user
videogames::videogames(const char t[80], int y, const char p[80], int r) : Media(t, y)
{
  strcpy(publisher, p);
  publisher[79] = '\0';
  rating = r;
}

//returns publisher
const char* videogames::getpublisher()
{
  return publisher;
}

//returns rating
int videogames::getrating()
{
  return rating;
}

//prints out the publisher and rating of the videogame
void videogames::printVideoGames()
{
  cout << "Publisher: " << publisher << ", rating: " << rating << endl;
}

videogames::~videogames()
{
  cout << "Deleting " << title << endl;
}
