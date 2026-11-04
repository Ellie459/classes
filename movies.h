#ifndef MOVIES_H
#define MOVIES_H

#include "media.h"

class movies : public Media
{
 protected:
  char director[80];
  int duration;
  int rating;

 public:
  movies(const char t[80], int y, const char di[80], int d, int r);
  const char* getdirector();
  int getduration();
  int getrating();
  void printMovies();

};

#endif
