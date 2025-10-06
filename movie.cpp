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

    //review methods
    void addReview(double rating, string comment) {
        Node* n = new Node;
        n->rating = rating;
        n->comment = comment;
        n->next = head;
        head = n;
    }
   
    void displayReviews() {
        cout << "\nMovie: " << title << endl;
        if (!head) {
            cout << "No reviews available.\n";
            return;
        }

        Node* temp = head;
        double total = 0;
        int count = 1;
        while (temp) {
            cout << "\t> Review #" << count++ << ": " << temp->rating << ": " << temp->comment << endl;
            total += temp->rating;
            temp = temp->next;
        }

        cout << "\t> Average rating: " << total/(count-1) << "\n";
    }
}

//randomRating() creates a random double rating between 1.0-5.0
//returns the random double that was created
double randomRating();


int main(){

    array<Movie,10> movies;
    
    ifstream fin("reviews.txt");
    if (!fin) {
        cout << "Error: Could not open file\n";
        return;
    }

}

double randomRating() {
    int min = 10;   //1.0
    int max = 50;   //5.0
    int randomNum = rand() % (max-min+1)+min; //random between 10 and 50
    double rating = randomNum / 10.0;               //one decimal place
    return rating;
}
