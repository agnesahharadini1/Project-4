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
