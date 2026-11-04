#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include "media.h"


class videogames : public Media
{
protected:
  char publisher[80];
  int rating;

public:
  videogames(const char t[80], int y, const char p[80], int r);
  const char* getpublisher();
  int getrating();
  void printVedioGames();
};

#endif
