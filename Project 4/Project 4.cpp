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
void shfaqStudentet() {
    if (studentet.empty()) {
        cout << "\nNuk ka studente te regjistruar.\n";
        return;
    }

    cout << "\n--- Lista e Studenteve ---\n";
    for (const auto& s : studentet) {
        cout << "ID: " << s.id
            << " | Emri: " << s.emri
            << " | Drejtimi: " << s.drejtimi
            << " | Nota: " << s.notaMesatare << endl;
    }
}
void kerkoStudent() {
    int id;
    cout << "\nShkruaj ID e studentit: ";
    cin >> id;

    for (const auto& s : studentet) {
        if (s.id == id) {
            cout << "\nStudenti u gjet:\n";
            cout << "Emri: " << s.emri << endl;
            cout << "Drejtimi: " << s.drejtimi << endl;
            cout << "Nota: " << s.notaMesatare << endl;
            return;
        }
    }
    cout << "\nStudenti nuk u gjet.\n";
}
void fshiStudent() {
    int id;
    cout << "\nShkruaj ID e studentit per fshirje: ";
    cin >> id;

    for (auto it = studentet.begin(); it != studentet.end(); ++it) {
        if (it->id == id) {
            studentet.erase(it);
            cout << "\nStudenti u fshi me sukses!\n";
            return;
        }
    }
    cout << "\nStudenti nuk u gjet.\n";
}