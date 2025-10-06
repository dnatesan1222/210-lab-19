// COMSC-210 | Lab 19 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <string>
using namespace std;

struct Node{
    double rating;
    string comment;
    Node *next;
}

class Movie{
private:
    string title;
    Node *review;
public:
    // getters: no arguments, returns the stored values of the instance variables
    int getRed()                { return getRating(); }
    int getGreen()              { return green; }
    int getBlue()               { return blue; }

}


int main(){

    array<Movie,10> movies;


}

double getRating(Node *n)	{return n->rating;)

string getComment(Node *n)	{return n->comment;}
