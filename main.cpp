// COMSC 210 | Lab 11 | Yeji Kim

#include <iostream>
#include <string>

using namespace std;

// this struct represents one lab worker
// member variables will be employee ID, number of days worked, and number of samples processed
struct LabWorker {
    string name;
    int employeeID;
    int numberOfDays;
    int *samplesProcessed;
};

int main () {
    // ask how many workers we want to track
    int numberOfWorkers;

    cout << "How many lab workers would you like to enter? ";
    cin >> numberOfWorkers;

    // dynamically make an array of LabWorkers struct
    LabWorker* workers = new LabWorker[numberOfWorkers];

    // get info for each worker
    for (int i = 0; i < numberOfWorkers; i++) {
        cout << "\nWorker" << i + 1 << endl;

        cout << "Enter employee ID: ";
        cin >> workers[i].employeeID;

        cout << "How many days worked? ";
        cin >> workers[i].numberOfDays;

        // create a dynamic array inside the struct
        workers[i].samplesProcessed = new int[workers[i].numberOfDays];

        // get the number of samples processed for each day
        for (int j = 0; j < workers[i].numberOfDays; j++) {
            cout << "Samples processed on day " << j + 1 << ": ";
            cin >> workers[i].samplesProcessed[j];
        }

    }

    return 0;
}