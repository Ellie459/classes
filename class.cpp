#include "media.h"
#include "videogames.h"
#include "music.h"
#include "movies.h"
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
  char option[10];
  char media[10];
  bool running = true;

  char title[50];
  int year;
  char publisher[50];
  int rating;
  int duration;
  char director[50];
  char artist[50];

  char delete_media[10];
  char delete_title[10];
  std::vector<music> musicList;
  std::vector<movies> moviesList;
  std::vector<videogames> videogamesList;
  
  while (running == true)
    {
      cout << "Enter an option (ADD, DELETE, SEARCH, QUIT): ";
      cin >> option;
      cout << endl;

      if (strcmp(option, "ADD") == 0)
	{
	  cout << "Which media do you want to add into? (music, movie, videogame): ";
	  cin >> media;
	  cout << endl;

	  if (strcmp(media, "music") == 0)
	    {
	      cout << "add music" << endl;
	      cout << "Enter title: ";
	      cin >> title;
	      cout << endl;

	      cout << "Enter year published: ";
	      cin >> year;
	      cout << endl;

	      cout << "Enter publisher: ";
	      cin >> publisher;
	      cout << endl;

	      cout << "Enter duration: ";
	      cin >> duration;
	      cout << endl;

	      cout << "Enter artist: ";
	      cin >> artist;
	      cout << duration;

	      musicList.push_back(music(title, year, publisher, artist, duration));
	      musicList.back().printMusic();
	      
	    }

	  if (strcmp(media, "movie") == 0)
	    {
	      cout << "add movie" << endl;

	      cout << "Enter title: ";
	      cin >> title;
	      cout << endl;

	      cout << "Enter year published: ";
	      cin >> year;
	      cout << endl;

	      cout << "Enter rating: ";
	      cin >> rating;
	      cout << endl;

	      cout << "Enter duration: ";
	      cin >> duration;
	      cout << endl;

	      cout << "Enter director: ";
	      cin >> director;
	      cout << endl;

	      moviesList.push_back(movies(title, year, director, duration, rating));
	      moviesList.back().printMovies();
	    }

	  if (strcmp(media, "videogame") == 0)
	    {
	      cout << "add videogame" << endl;

	      cout << "Enter title: ";
	      cin >> title;
	      cout << endl;

	      cout << "Enter year published: ";
	      cin >> year;
	      cout << endl;

	      cout << "Enter publisher: ";
	      cin >> publisher;
	      cout << endl;

	      cout << "Enter rating: ";
	      cin >> rating;
	      cout << endl;

	      videogamesList.push_back(videogames(title, year, publisher, rating));
	      videogamesList.back().printVideoGames();

	      
	    }
	}

      else if (strcmp(option, "DELETE") == 0)
	{
	  cout << "delete item" << endl;

	  cout << "From which type of media you want to delete? (movies, music, videogames): ";
	  cin >> delete_media;
	  cout << endl;

	  cout << "What is the title?: ";
	  cin >> delete_title;
	  cout << endl;

	  if (strcmp(delete_media, "music") == 0)
	    {
	      for (auto it = musicList.begin(); it != musicList.end();)
		{
		  if (strcmp(delete_title, it -> gettitle()) == 0)
		    {
		      it = musicList.erase(it);
		    }
		}
	    }
	  else if (strcmp(delete_media, "movies") == 0)
	    {
	      for (auto it = moviesList.begin(); it != moviesList.end();)
		{
		  if (strcmp(delete_title, it -> gettitle()) == 0)
		    {
		      it = moviesList.erase(it);
		    }
		}
	    }

	  else if (strcmp(delete_media, "videogames") == 0)
	    {
	      for (auto it = videogamesList.begin(); it != videogamesList.end();)
		{
		  if (strcmp(delete_title, it -> gettitle()) == 0)
		    {
		      it = videogamesList.erase(it);
		    }
		}
	    }
	}
	

      else if (strcmp(option, "SEARCH") == 0)
	{
	  cout << "search item" << endl;
	}

      else if (strcmp(option, "QUIT") == 0)
	{
	  running = false;
	}
    }

  
  return 0;
}

  /*Media test("Emoji", 2024);

  videogames ellie("Goto", 2008, "Ellie", 10);

  music deco("animal", 2019, "deco", "nina", 5);

  movies summer("natsu", 1998, "Ellie", 29, 10);

  summer.printMovies();
  deco.printMusic();
  ellie.printVedioGames();
  test.printDetails(); */
