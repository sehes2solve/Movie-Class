#include "Movie.h"

Movie::Movie(string Name,string mpaa):TerribleRating(0),BadRating(0),OkRating(0),GoodRating(0),GreatRating(0)
{
    name = Name;
    MPAA = mpaa;
}
string Movie::get_name(){ return name; }
string Movie::get_MPAA(){ return MPAA; }
void Movie::set_name(string Name){  name = Name; }
void Movie::set_MPAA(string mpaa){  MPAA = mpaa; }
void Movie::addRating(string Rate)
{
    if(IsRate(Rate))
    {
        switch (Rate[0])
        {
            case '1': TerribleRating++;
                break;
            case '2': BadRating++;
                break;
            case '3': OkRating++;
                break;
            case '4': GoodRating++;
                break;
            case '5': GreatRating++;
                break;
        }
    }
    else
        cout << "Invalid Rate Input !!" << endl << endl;
}
double Movie::GetAverage()
{
    //the sum  of the number of added rates each multiplied by the corresponding
    //rate order divide it with the total number of added rates
    return ((TerribleRating + 2*(BadRating) + 3*(OkRating) + 4*(GoodRating) + 5*(GreatRating))/(double(TerribleRating + BadRating + OkRating + GoodRating + GreatRating)));
}
bool Movie::IsRate(string Value)
{
    if(Value.length()== 1)// Checks whether the word consists of one char
    {
        if((Value[0] > '0') && (Value[0] < '6'))// Checks whether the word equivalent to int(1-5)
            return true;
    }
    return false;
}
Movie::~Movie()
{
    //dtor
}
