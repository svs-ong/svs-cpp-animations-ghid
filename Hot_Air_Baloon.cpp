#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

const int sleepTime = 150;

void clear_terminal() {
    #ifdef _WIN32
        system("cls"); 
    #else
        system("clear");
    #endif
}

void sleep_ms(int milliseconds)  
{
    this_thread::sleep_for(chrono::milliseconds(milliseconds)); 
}

void loop() {
    for (int i = 0; i < 7; i++) {
        clear_terminal();  // Clear the screen before each new frame

        // Print blank lines above the figure
        for (int j = 0; j < (6 - i); j++) {
            cout << endl;
        }
        
        // Print the figure
        cout << "          ________" << endl;
        cout << "         /        \\" << endl;
        cout << "        /          \\" << endl;
        cout << "        |          |" << endl;
        cout << "        \\          /" << endl;
        cout << "         \\________/" << endl;    
        cout << "          \\      /" << endl;
        cout << "           \\____/" << endl;
        cout << "            |__| " << endl; 
        
        // Print blank lines below the figure
        for (int j = 0; j < i; j++) {
            cout << endl;
        }

        sleep_ms(sleepTime);
    }
}

int main() {
    while (true) {
        loop();  // Continuously run the loop
    }
    return 0;
}
