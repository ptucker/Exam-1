//
// main.cpp
// CS 172 EXAM 1
//
// Created by Ally McConnell on 6/2/16
// Copyright 2016 Ally McConnell . All rights reserved.
//
// I affirm that all code give below was written soley by me, Ally McConnell, and that any help I recieve abhered to the rules
// of this exam.

//PT -- nice work. One minor flaw in checking a movie's genre.
//    97/100

#include <string>
#include <iostream>
#include "Theater.h"

using namespace std;

int main() {
	//Note: you should not need to alter this code at all for your tests to pass.
	const int MOVIECOUNT = 11;
	Movie movieListing[] = {
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
	//Find the movie starting at of after the hour 18
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
