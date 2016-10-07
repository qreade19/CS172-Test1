#pragma once
#ifndef MOVIE_H_
#define MOVIE_H_
#include <iostream>
#include <string>
using namespace std;

class Movie
{
private: // These are here partially so that the "get" functions will work, but mostly because if anyone could change them, it would spell chaos.
	string movTitle;
	string movGenre;
	int movTime;
public:
	Movie(); // default movie setting: Title = The Three Stooges, Genre = Comedy, Showtime = 2
	Movie(string Title, string Genre, int Showtime);

	string GetTitle(); // returns title
	string GetGenre(); // returns genre
	int GetShowtime(); // when the movie's shown
};

#endif