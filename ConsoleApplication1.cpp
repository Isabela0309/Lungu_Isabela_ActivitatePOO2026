#include <iostream>
using namespace std;

class Student {
private:
    int nota1;
    int nota2;

public:
    Student(int primaNota, int aDouaNota) {
        nota1 = 1;
        nota2 = 1;

        setNota1(primaNota);
        setNota2(aDouaNota);
    }

    void setNota1(int notaNoua) {
        if (notaNoua >= 1 && notaNoua <= 10) {
            nota1 = notaNoua;
        }
        else {
            cout << "Prima nota este invalida. "
                 << "Valoarea ramane " << nota1 << endl;
        }
    }

    void setNota2(int notaNoua) {
        if (notaNoua >= 1 && notaNoua <= 10) {
            nota2 = notaNoua;
        }
        else {
            cout << "A doua nota este invalida. "
                 << "Valoarea ramane " << nota2 << endl;
        }
    }

    float calculeazaMedie() {
        return (nota1 + nota2) / 2.0f;
    }

    void afiseazaSituatie() {
        cout << "Prima nota: " << nota1 << endl;
        cout << "A doua nota: " << nota2 << endl;
        cout << "Media: " << calculeazaMedie() << endl;

        if (calculeazaMedie() >= 5) {
            cout << "Promovat" << endl;
        }
        else {
            cout << "Nepromovat" << endl;
        }
    }
};

int main() {
    Student student1(7, 10);

    cout << "--- Situatia initiala ---" << endl;
    student1.afiseazaSituatie();

    cout << "\n--- Modificam prima nota in 9 ---" << endl;
    student1.setNota1(9);
    student1.afiseazaSituatie();

    cout << "\n--- Incercam o nota invalida: 12 ---" << endl;
    student1.setNota2(12);
    student1.afiseazaSituatie();

    return 0;
}
