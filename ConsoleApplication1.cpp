#include <iostream>
using namespace std;

//int main() {
//	int nota1;
//	int nota2;
//
//	cout << "Introdu prima nota: ";
//	cin >> nota1;
//
//	if (nota1 < 1 || nota1 >10) {
//		cout << "Nota invalida.";
//		return 0;
//	}
//
//
//	cout << "Introdu a doua nota ";
//	cin >> nota2;
//
//	if (nota2 < 1 || nota2>10) {
//		cout << "Nota invalida.";
//		return 0;
//	}
//
//	int suma = nota1 + nota2;
//
//	cout << "Suma notelor este: " << suma << endl;
//
//	float medie = suma / 2.0;
//	cout << "Media notelor este: " << medie << endl;
//
//	if (medie >= 5) {
//		cout << "Promovat" << endl;
//	}
//	else {
//		cout << "Nepromovat" << endl;
//	}
//
//	return 0;
//}
// 

#include <iostream>
using namespace std;

class Student {
private:
    int nota1;
    int nota2;

public:
    Student(int primaNota, int aDouaNota) {
        nota1 = primaNota;
        nota2 = aDouaNota;
    }

    float calculeazaMedie() {
        return (nota1 + nota2) / 2.0f;
    }

    void afiseazaSituatie() {
        float medie = calculeazaMedie();

        cout << "Prima nota: " << nota1 << endl;
        cout << "A doua nota: " << nota2 << endl;
        cout << "Media: " << medie << endl;

        if (medie >= 5) {
            cout << "Promovat" << endl;
        }
        else {
            cout << "Nepromovat" << endl;
        }
    }
};

int main() {
    Student student1(7, 10);
    student1.afiseazaSituatie();

    return 0;
}