#include <iostream>
#include <cstring>
#include "videogames.h"

using namespace std;

videogames::videogames(const char t[80], int y, const char p[80], int r) : Media(t, y)
{
  strcpy(publisher, p);
  publisher[79] = '\0';
  rating = r;
}

const char* videogames::getpublisher()
{
  return publisher;
}

int videogames::getrating()
{
  return rating;
}

void videogames::printVedioGames()
{
  cout << "Publisher: " << publisher << ", rating: " << rating << endl;
}
