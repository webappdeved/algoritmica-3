/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR) — 5° Año
   Institución: E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
   Archivo: src/main.cpp
   Actividad 9: Práctica En Papel "Pensar Antes De Programar
   Docente: Mansilla Muñoz York
   Estudiante: Alexander Luca Veit
   ====================================================================
*/

#include <iostream>
#include <string>

using namespace std;

// ============================================================
// INICIO - Diagrama 1: Sensor de aprobacion
// ============================================================
void sensorAprobacion()
{
    const double NOTA_MINIMA = 6;

    double nota1, nota2;
    cout << "Ingrese nota1: ";
    cin >> nota1;
    cout << "Ingrese nota2: ";
    cin >> nota2;

    double promedio = (nota1 + nota2) / 2;

    if (promedio >= NOTA_MINIMA)
    {
        cout << "APROBADO" << endl;
    }
    else
    {
        cout << "INTENSIFICACION" << endl;
    }
}
// FIN - Diagrama 1: Sensor de aprobacion
// ============================================================


// ============================================================
// INICIO - Diagrama 2: Bucle del contador de vidas
// ============================================================
void contadorVidas()
{
    int vidas = 3;

    while (vidas > 0)
    {
        cout << "Jugador activo. Vidas restantes: " << vidas << endl;
        vidas = vidas - 1;
    }

    cout << "GAME OVER" << endl;
}
// FIN - Diagrama 2: Bucle del contador de vidas
// ============================================================


// ============================================================
// INICIO - Diagrama 3: Registro de jugador en memoria
// ============================================================
struct Jugador
{
    string nickname;
    int nivel;
    bool esVIP;
};

void registroJugador()
{
    Jugador jugador;

    cout << "Ingrese nickname: ";
    cin >> jugador.nickname;
    cout << "Ingrese nivel: ";
    cin >> jugador.nivel;
    cout << "Ingrese esVIP (1 = Verdadero, 0 = Falso): ";
    cin >> jugador.esVIP;

    if (jugador.esVIP == true)
    {
        cout << "Bienvenido al Servidor VIP, " << jugador.nickname << endl;
    }
    else
    {
        cout << "Bienvenido al Servidor Estandar, " << jugador.nickname << endl;
    }
}
// FIN - Diagrama 3: Registro de jugador en memoria
// ============================================================


// ============================================================
// INICIO - Diagrama 4: Control de inventario con vectores
// ============================================================
void controlInventario()
{
    int stock[] = {12, 0, 5, 30, 0};
    int longitud = sizeof(stock) / sizeof(stock[0]);

    int i = 0;
    while (i < longitud)
    {
        if (stock[i] == 0)
        {
            cout << "ALERTA: Sin stock en pos. " << i << endl;
        }
        i = i + 1;
    }
}
// FIN - Diagrama 4: Control de inventario con vectores
// ============================================================

int main()
{
    sensorAprobacion();
    contadorVidas();
    registroJugador();
    controlInventario();

    return 0;
}
