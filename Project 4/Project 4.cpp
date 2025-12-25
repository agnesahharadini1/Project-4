#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int id;
    string emri;
    string drejtimi;
    double notaMesatare;
};

vector<Student> studentet;
void shtoStudent() {
    Student s;
    cout << "\nID: ";
    cin >> s.id;
    cin.ignore();

    cout << "Emri: ";
    getline(cin, s.emri);

    cout << "Drejtimi: ";
    getline(cin, s.drejtimi);

    cout << "Nota Mesatare: ";
    cin >> s.notaMesatare;

    studentet.push_back(s);
    cout << "\nStudenti u shtua me sukses!\n";
}
