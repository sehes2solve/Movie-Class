#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Movie
{
    public:
/// <summary>
/// Constructs A Movie object with non default value for attributes name & MPAA & other attributes Intialize it with zero value
/// </summary>
/// <param name="Name">the string of movie name<param>
/// <param name="mpaa">the string of MPAA name<param>
        Movie(string Name,string mpaa);
        virtual ~Movie();
/// <summary>
/// gets the value of movie name private attribute
/// </summary>
/// <returns>returns name of movie</returns>
        string get_name();
/// <summary>
/// gets the value of the MPAA attribute
/// </summary>
/// <returns>returns MPAA rate of the movie</returns>
        string get_MPAA();
/// <summary>
/// sets the name attribute of the Movie
/// </summary>
/// <param name="Name">the string of the movie name<param>
        void set_name(string Name);
/// <summary>
/// sets the MPAA attribute rate of the Movie
/// </summary>
/// <param name="mpaa">the string of the movie MPAA rate<param>
        void set_MPAA(string mpaa);
/// <summary>
/// Increment the Rate counter of the rate that has inputted order if the order is valid number from 1-5 otherwise print message of "invalid input"
/// </summary>
/// <param name="Rate">the order of the rate that should be incremented<param>

        void addRating(string Rate);
/// <summary>
/// gets average rating value from 1 to 5 for the movie according for added rates
/// </summary>
/// <returns>returns the average of added rates</returns>
        double GetAverage();

    protected:

    private:
        string name,MPAA;
        int TerribleRating,BadRating,OkRating,GoodRating,GreatRating;
/// <summary>
/// Checks whether the string is one char string that represent number of movie rating numbers
/// </summary>
/// <param name="Value">the string that should be checked whether it's a movie rating number<param>
/// <returns>returns true if the string is valid and false if the string is invalid</returns>
        bool IsRate(string Value);
};

#endif // MOVIE_H
