#include <iostream>
using namespace std;

struct Point {
    int jabloko, grusha;
};
struct Rect {
    Point apelsin, ananas;
};
struct Circle {
    Point velosiped; int giraf;
};


static short TheActOfCreation() {
    for (int i = 0; i < 1; ) {
        bool TheActOfAnswering = 0;
        cout << "Do you want to start an act of creation the object?" << endl
            << "(true) 1 - Yes." << endl << "(false) 0 - No, exit." << endl << "Your answer: ";
        cin >> TheActOfAnswering;
        if (TheActOfAnswering != 1) {
            i++;
            return 2; 
        }
        else {
            cout << endl << "Great, now: do you want the Rect creation or you prefer Circle creation? " 
                << endl << "(true) 1 - Rect " << endl << "(false) 0 - Circle" << endl << "Your answer: ";
            cin >> TheActOfAnswering; 
            if (TheActOfAnswering != 1) return 0;
            else return 1;
        }
    }
}

static void TheActOfMoving() {

}

static void TheActOfScaling() {

}


void main()
{
    auto result = TheActOfCreation();
    if (result == 0) {
        Circle TheActOfEverything;
        // cout << "circle";
    }
    else if (result == 1) {
        Rect TheActOfEverything;
        // cout << "rect";
    }
}