#pragma once
#ifndef THEATER_H_
#define THEATRE_H_
#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

class Theater
{
private:
	string theaName;
	string theaPhone;
	string nameList[100];
	string genreList[100];
	int timeList[100];
public:
	//string movieList[];
	Theater(string Name, string Phone);
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(string Genre);
	int GetPopcornPrice();
	int GetCokePrice();
};

#endif