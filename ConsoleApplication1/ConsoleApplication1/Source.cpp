// I affirm that all code given below was written solely by me, Quinlan Avery Reade, 
// and that any help I recieved adhered to the rules stated for this exam

#include <iostream>
#include "Movie.h"
#include "Theater.h"
using namespace std;

Movie::Movie()
{
	movTitle = "The Three Stooges";
	movGenre = "Comedy";
	movTime = 2;
}

Movie::Movie(string Title, string Genre, int Showtime)
{
	movTitle = Title;
	movGenre = Genre;
	movTime = Showtime;
}

string Movie::GetTitle()
{
	return movTitle;
}

string Movie::GetGenre()
{
	return movGenre;
}

int Movie::GetShowtime()
{
	return movTime;
}

Theater::Theater(string Name, string Phone)
{
	theaName = Name;
	theaPhone = Phone;
}

void Theater::AddMovie(Movie& Movie)
{
	string newGenre = Movie.GetGenre;
	string newTitle = Movie.GetTitle;
	int newTime = Movie.GetShowtime;
	for (int m = 0; m < 100; m++) {
		if (nameList[m] == "") {
			nameList[m] = newTitle;
			genreList[m] = newGenre;
			timeList[m] = newTime;
			break;
		}
	}
}

string Theater::GetMovieForHour(int Hour)
{
	int m = 0;
	bool nameFound = false;
	while (nameFound == false) {
		if (timeList[m] == Hour + 1) {
			nameFound = true;
			return nameList[m];
		}
		m++;
	}
	if (nameFound == false)
		return "";
}

int Theater::GetShowTimeForGenre(string Genre)
{
	int m = 0;
	bool timeFound = false;
	while (timeFound == false) {
		if (genreList[m] == Genre) {
			timeFound = true;
			return timeList[m];
		}
		m++;
	}
	if (timeFound == false)
		return -1;
}

int Theater::GetPopcornPrice()
{
	return 30;
}

int Theater::GetCokePrice()
{
	return 50; // I know, obvious joke, but it's still funny.
}

int main()
{
	const int MOVIECOUNT = 11;
	Movie movieListing[MOVIECOUNT] = {
		Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2),
		Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7),
		Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12),
		Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16),
		Movie("Monte Python's Meaning of Life", "Comedy", 19), Movie("Jaws", "Horror", 21),
		Movie("Usual Suspects", "Action", 23),
	};
	Theater garland("The Garland", "509-327-2509");
	for (int m = 0; m < MOVIECOUNT; m++) {
		garland.AddMovie(movieListing[m]);
	}
	int errors = 0;
	if (garland.GetMovieForHour(-1) != "") {
		errors++;
		cout << "error: not handling -1 correctly\n";
	}
	if (garland.GetMovieForHour(25) != "") {
		errors++;
		cout << "error: not handling 25 correctly\n";
	}
	if (garland.GetMovieForHour(18) != "Monte Python's Meaning of Life") {
		errors++;
		cout << "error: incorrect movie for 18th hour\n";
	}
	if (garland.GetShowTimeForGenre("Comedy") != 0) {
		errors++;
		cout << "error: incorrect Comedy\n";
	}
	if (errors == 0) cout << "Passed\n";
	else cout << "Errors: " << errors << endl;
}