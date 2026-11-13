#ifndef MOVIES_H
#define MOVIES_H

#include "media.h"

class movies : public Media
{
 protected:
  char director[80]; //stores the name of director
  int duration; //stores how long the movie is
  int rating; //stores the rating of movie

 public:
  //initialize a new movie object
  movies(const char t[80], int y, const char di[80], int d, int r);
  const char* getdirector(); //return the director's name
  int getduration();  //return the duration of movie
  int getrating();  //return the rating of movie
  void printMovies(); // prints out the details of this movie

};

#endif
