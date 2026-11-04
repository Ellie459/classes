#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

movies::movies(const char t[80], int y, const char di[80], int d, int r) : Media(t, y)
{
  strcpy(director, di);
  duration = d;
  rating = r;
}

const char* movies::getdirector()
{
  return director;
}

int movies::getduration()
{
  return duration;
}

int movies::getrating()
{
  return rating;
}

void movies::printMovies()
{
  cout << "Director: " << director << ", duration: " << duration << ", rating: " << rating << endl;
}
