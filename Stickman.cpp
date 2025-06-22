#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
const int sleepTime = 500;

void clear_terminal() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void sleep_ms(int milliseconds) {
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}
// \n se foloseste pentru a trece pe alt rand
// \t se foloseste pentru a pune spatii (tab-uri)
void frame1() {
    cout << "  O  \n"
         << " /|\\ \n"
         << " / \\ \n";
}

void frame2() {
    cout << "\t  O  \n"
         << "\t /|\\ \n"
         << "\t  |\\ \n";
}

void frame3() {
    cout << "\t\t  O  \n"
         << "\t\t /|\\ \n"
         << "\t\t /|  \n";
}

void frame4() {
    cout << "\t\t\t  O  \n"
         << "\t\t\t /|\\ \n"
         << "\t\t\t  |\\   \n";
}

void frame5() {
    cout << "\t\t\t\t  O  \n"
         << "\t\t\t\t /|\\ \n"
         << "\t\t\t\t /| \n";
}

void frame6() {
    cout << "\t\t\t\t  O  \n"
         << "\t\t\t\t /|\\ \n"
         << "\t\t\t\t / \\ \n";
}

void frame7() {
    cout << "\t\t\t\t \\O/  \n"
         << "\t\t\t\t  | \n"
         << "\t\t\t\t / \\ \n";
}

void loop() {
    frame1();
    sleep_ms(sleepTime);
    clear_terminal();

    frame2();
    sleep_ms(sleepTime);
    clear_terminal();

    frame3();
    sleep_ms(sleepTime);
    clear_terminal();

    frame4();
    sleep_ms(sleepTime);
    clear_terminal();

    frame5();
    sleep_ms(sleepTime);
    clear_terminal();

    frame6();
    sleep_ms(sleepTime);
    clear_terminal();

    frame7();
    sleep_ms(sleepTime);
    clear_terminal();
}

int main() {
    while (true) {
        loop();
    }
    return 0;
}
