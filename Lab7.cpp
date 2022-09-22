#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//❓❓ LAB QUESTION 4:

string myFriends[4] = {"Steve", "Jane", "Jeff", "Rick" };

//❓❓ LAB QUESTION 5:
int age[4] = {34, 25, 52, 18};


void main(){


    //❓❓ Lab Question 6:
    //Below this comment, write a for loop that outputs the names of all your friends.
    cout << "My friends name are: " << endl;
    for (int j = 0; j < 4; j++){
        cout << myFriends [j] << endl;
    }

    //❓❓ Lab Question 7:
    //Below this comment, write a for loop that outputs the name and age of all your friends.
    for (int j = 0; j < 4; j++){
        cout << myFriends[j];
        cout << age[j] << endl;
    }
    
    //❓❓ Lab Question 8:
    //Below this comment, that finds the age of your oldest friend.
    int oldest = 0;
    for (int j = 0 ;  j < 4; j++) {
        if (age[j] > oldest){
            oldest = age[j];
        }
    }
    cout << " My oldest friend is" <<oldest << "years old." <<endl; 

    //❓❓ Lab Question 9:
    //Below this comment, that finds the NAME of your oldest friend.
int oldest = 0;
    for (int j = 0 ;  j < 4; j++) {
        if (age[j] > oldest){
            oldest = age[j];
        }
    }
    cout << " My oldest friend is" <<oldest << "years old." <<endl; 



}