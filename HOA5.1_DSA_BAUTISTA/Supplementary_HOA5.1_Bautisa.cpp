#include <iostream>
#include <string>
using namespace std;

class Job {
public:
    int jobID;
    string userName;
    int numPages;
    Job* next;

    Job(int id, string name, int pages) {
        jobID = id;
        userName = name;
        numPages = pages;
        next = nullptr;
    }

    void display_job() {
        cout << "Job ID: " << jobID << ", User: " << userName << ", Pages: " << numPages << endl;
    }
};

class Printer {
private:
    Job* head;
    Job* tail;

public:
    Printer() {
        head = nullptr;
        tail = nullptr;
    }

    void add_job(int id, string user, int pages) {
        Job* newJob = new Job(id, user, pages);
        if (head == nullptr) {
            head = newJob;
            tail = newJob;
        } else {
            tail->next = newJob;
            tail = newJob;
        }
        cout << "Job added to queue: ";
        newJob->display_job();
    }

    void processing_job() {
        cout << "\nProcessing Jobs\n";
        while (head != nullptr) {
            Job* currentJob = head;
            head = head->next;

            cout << "Processing ";
            currentJob->display_job();

            delete currentJob;
        }
        tail = nullptr;
        cout << "All jobs processed" << endl;
    }

    ~Printer() {
        while (head != nullptr) {
            Job* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    Printer printer;
    printer.add_job(1, "Hendricks", 10);
    printer.add_job(2, "Redj", 5);
    printer.add_job(3, "Kurt", 15);
    printer.add_job(4, "Dale", 3);


    printer.processing_job();

    return 0;
}
