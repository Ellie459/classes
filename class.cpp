/* Ellie goto
   11/17/2026
   this program organizes medias into specific classes. There is a media parent class, and the child classes are music, movies, and videogames.
   the user can add into specific classes, delete, and search for medias. */

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

  char search_title[10];

  vector<music> musicList;
  vector<movies> moviesList;
  vector<videogames> videogamesList;
  
  while (running == true)
    {

      //asks the user what they want to do
      cout << "Enter an option (ADD, DELETE, SEARCH, QUIT): ";
      cin >> option;
      cout << endl;

      //adds something into media
      if (strcmp(option, "ADD") == 0)
	{
	  cout << "Which media do you want to add into? (music, movie, videogame): ";
	  cin >> media;
	  cout << endl;

	  //adds something into music class
	  if (strcmp(media, "music") == 0)
	    {
	      cout << "adding into music..." << endl;

	      // asks for title
	      cout << "Enter title: ";
	      cin >> title;

	      // asks for year published
	      cout << "Enter year published: ";
	      cin >> year;

	      //asks for publisher
	      cout << "Enter publisher: ";
	      cin >> publisher;

	      //asks the duration
	      cout << "Enter duration: ";
	      cin >> duration;

	      //asks the artist
	      cout << "Enter artist: ";
	      cin >> artist;

	      //adds into music class, and prints out the detail of this object
	      musicList.push_back(music(title, year, publisher, artist, duration));
	      musicList.back().printMusic();
	      
	    }

	  //adds something into movie class
	  if (strcmp(media, "movie") == 0)
	    {
	      cout << "adding into movie..." << endl;

	      //Asks for the title
	      cout << "Enter title: ";
	      cin >> title;

	      //asks for the year published
	      cout << "Enter year published: ";
	      cin >> year;

	      //asks for the rating
	      cout << "Enter rating (out of 10): ";
	      cin >> rating;

	      //asks for the duration
	      cout << "Enter duration: ";
	      cin >> duration;

	      //asks who the director is
	      cout << "Enter director: ";
	      cin >> director;

	      //adds into movies, and prints out the detail of this object
	      moviesList.push_back(movies(title, year, director, duration, rating));
	      moviesList.back().printMovies();
	    }

	  //adds something into videogame class
	  if (strcmp(media, "videogame") == 0)
	    {
	      cout << "adding into videogame..." << endl;

	      // Asks for the title
	      cout << "Enter title: ";
	      cin >> title;

	      //asks for the year published
	      cout << "Enter year published: ";
	      cin >> year;

	      //asks for the publisher
	      cout << "Enter publisher: ";
	      cin >> publisher;

	      //asks for the rating
	      cout << "Enter rating (out of 10): ";
	      cin >> rating;

	      // adds into videogames, and prints out the detail of this object
	      videogamesList.push_back(videogames(title, year, publisher, rating));
	      videogamesList.back().printVideoGames();
	    }
	}

      //deletes and object from a class
      else if (strcmp(option, "DELETE") == 0)
	{
	  //asks which type of media is it
	  cout << "From which type of media you want to delete? (movies, music, videogames): ";
	  cin >> delete_media;
	  cout << endl;

	  //asks for the title
	  cout << "What is the title?: ";
	  cin >> delete_title;
	  cout << endl;

	  //deletes an object selected by user from music class
	  if (strcmp(delete_media, "music") == 0)
	    {
	      for (int i = 0; i < musicList.size(); i++)
		{
		  if (strcmp(musicList[i].gettitle(), delete_title) == 0)
		    {
		      musicList.erase(musicList.begin() + i);
		    }
		}
	    }

	  //deletes an object selected by user from movies class
	  else if (strcmp(delete_media, "movies") == 0)
		 {
		   for (int i = 0; i < moviesList.size(); i++)
		     {
		       if (strcmp(moviesList[i].gettitle(), delete_title) == 0)
			 {
			   moviesList.erase(moviesList.begin() + i);
			 }
		     }
		 }

	  //deletes and object selected by user from videogames class
	  else if (strcmp(delete_media, "videogames") == 0)
	    {
	      for (int i = 0; i < videogamesList.size(); i++)
		{
		  if (strcmp(videogamesList[i].gettitle(), delete_title) == 0)
		    {
		      videogamesList.erase(videogamesList.begin() + i);
		    }
		}
	    }
	}
	

      //searches a media up
      else if (strcmp(option, "SEARCH") == 0)
	{
	  //asks for the title
	  cout << "What is the title?: ";
	  cin >> search_title;

	  //if the user said music, finds the object with the same title and prints the detail out
	  
	      for (int i = 0; i < musicList.size(); i++)
		{
		  if (strcmp(musicList[i].gettitle(), search_title) == 0)
		    {
		      musicList[i].printMusic();
		    }
		}
	    

	  //if user said movie, finds the object with the same title and prints the detail out
	      for (int i = 0; i < moviesList.size(); i++)
		{
		  if (strcmp(moviesList[i].gettitle(), search_title) == 0)
		    {
		      moviesList[i].printMovies();
		    }
		}
	    

	  //if user said videofame, finds the object with the same title and prints the detail out
	      for (int i = 0; i < videogamesList.size(); i++)
		{
		  if (strcmp(videogamesList[i].gettitle(), search_title) == 0)
		    {
		      videogamesList[i].printVideoGames();
		    }
		}
	    
	  cout << endl;
	      
		    
	}

      //stops the program if user said quit
      else if (strcmp(option, "QUIT") == 0)
	{
	  running = false;
	}

      //for debugging: prints every object out from each class
      /*
      cout << "Movies: " << endl;
      for (int i = 0; i < moviesList.size(); i++)
	{
	  moviesList[i].printMovies();
	}

      cout << endl;
      
      cout << "Music:" << endl;
      for (int i = 0; i < musicList.size(); i++)
	{
	  musicList[i].printMusic();
	}

      cout << endl;

      cout << "Videogames:" << endl;
      for (int i = 0; i < videogamesList.size(); i++)
	{
	  videogamesList[i].printVideoGames();
	}
      */
      
      cout << endl;
    }

  
  return 0;
}
