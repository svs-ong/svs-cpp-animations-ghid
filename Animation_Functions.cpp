#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
const int sleepTime = 50;

void clear_terminal() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void displayMatrix(char** matrix , int width , int height)
{
    for(int i = 0 ; i < width ; i ++)
        for(int j = 0 ; j < height ; j ++)
        {
            std :: cout << *(*(matrix+i) + j);
        }
}

void sleep_ms(int seconds)
{
std:this_thread::sleep_for(chrono::milliseconds(sleepTime));
}

void loop() {
    cout << "-    " << endl;
    sleep_ms(sleepTime);
    clear_terminal();

    cout << "--   " << endl;
    sleep_ms(sleepTime);
    clear_terminal();

    cout << " --  " << endl;
    sleep_ms(sleepTime);
    clear_terminal();

    cout << "  -- " << endl;
    sleep_ms(sleepTime);
    clear_terminal();

    cout << "   --" << endl;
    sleep_ms(sleepTime);
    clear_terminal();

    cout << "    -" << endl;
    sleep_ms(sleepTime);
    clear_terminal();

}

int main() {
    while (true) {
        loop();
    }
    return 0;
}