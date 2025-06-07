#include <iostream>
#include <string>
using namespace std;

int main() {
    string password1, password2;

    // Pedir la primera contraseña
    cout << "Ingrese la contraseña: ";
    cin >> password1;

    // Pedir la segunda contraseña
    cout << "Repita la contraseña: ";
    cin >> password2;

    // Verificar si las contraseñas coinciden
    if (password1 == password2) {
        cout << "Contraseñas coinciden. Acceso permitido." << endl;
        // Aquí puedes continuar con el resto del programa
    } else {
        cout << "Las contraseñas no coinciden. Intente nuevamente." << endl;
    }

    return 0;
}