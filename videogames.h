#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include "media.h"

// declars class videogames in media
class videogames : public Media
{
protected:
  char publisher[80]; //stores the publisher
  int rating; //stores the rating

public:
  // initializes videogame object with title, year, publisher and rating
  videogames(const char t[80], int y, const char p[80], int r);
  const char* getpublisher(); //gets the publisher
  int getrating(); //gets rating
  void printVideoGames(); //prints out the detail of videogames
};

#endif
