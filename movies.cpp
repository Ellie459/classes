#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

//gets the title, year published, director, duration, and rating from user
movies::movies(const char t[80], int y, const char di[80], int d, int r) : Media(t, y)
{
  strcpy(director, di);
  duration = d;
  rating = r;
}

// returns the director
const char* movies::getdirector()
{
  return director;
}

// returns the duration of movie
int movies::getduration()
{
  return duration;
}

// returns the rating of movie
int movies::getrating()
{
  return rating;
}

//prints out the director, duration, and rating of the movie
void movies::printMovies()
{
  cout << "Director: " << director << ", duration: " << duration << ", rating: " << rating << endl;
}

movies::~movies()
{
  cout << "Deleting " << title << endl;
}
