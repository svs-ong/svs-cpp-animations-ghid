#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

//Funcția clear_terminal() șterge tot ce e scris pe ecranul programului (terminalul), ca să pară curat
void clear_terminal() {
    #ifdef _WIN32
        system("cls"); // Windows clear
    #else
        system("clear");  // Linux clear
    #endif
}

//Stai și nu face nimic X milisecunde 😴
void sleep_ms(int milliseconds)
{
this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

void loop() {
    cout << "-    " << endl;
    sleep_ms(50);
    clear_terminal();

    cout << "--   " << endl;
    sleep_ms(50);
    clear_terminal();

    cout << " --  " << endl;
    sleep_ms(50);
    clear_terminal();

    cout << "  -- " << endl;
    sleep_ms(50);
    clear_terminal();

    cout << "   --" << endl;
    sleep_ms(50);
    clear_terminal();

    cout << "    -" << endl;
    sleep_ms(50);
    clear_terminal();

}

int main() {
    //nu se termina niciodata
    while (true) { 
        loop();
    }
    return 0;
}