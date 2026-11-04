#include "media.h"
#include "videogames.h"
#include "music.h"
#include "movies.h"
#include <iostream>

using namespace std;

int main()
{
  Media test("Emoji", 2024);

  videogames ellie("Goto", 2008, "Ellie", 10);

  music deco("animal", 2019, "deco", "nina", 5);

  movies summer("natsu", 1998, "Ellie", 29, 10);

  summer.printMovies();
  deco.printMusic();
  ellie.printVedioGames();
  test.printDetails();
  return 0;
}
