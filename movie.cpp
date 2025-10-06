// COMSC-210 | Lab 19 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <string>
#include <fstream>
#include <random>
using namespace std;

struct Node{
    double rating;
    string comment;
    Node *next;
}

class Movie{
private:
    string title;
    Node *head;
public:
    //constructors
    Movie()	{head = nullptr;}
    Movie(string t) { title = t; head = nullptr; }

    //setters
    void setTitle(string t)	{title = t;}

    // getters: no arguments, returns the stored values of the instance variables
    double getRating()		{ return getRating(review); }
    string getComment()		{ return getComment(review); }
    int getBlue()               { return blue; }

}


int main(){

    array<Movie,10> movies;


}

double getRating(Node *n, double place){
    n->rating;
    
    
}

string getComment(Node *n)	{return n->comment;}
