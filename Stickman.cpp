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

void sleep_ms(int seconds)
{
std:this_thread::sleep_for(chrono::milliseconds(sleepTime));
}

void frame1() {
    std::cout << "  O  \n"
                 " /|\\ \n"
                 " / \\ \n";
}

void frame2() {
    std::cout << "\t  O  \n"
                 "\t /|\\ \n"
                 "\t  |\\ \n";
}

void frame3() {
    std::cout << "\t\t  O  \n"
                 "\t\t /|\\ \n"
                 "\t\t /|  \n";
}

void frame4() {
    std::cout << "\t\t\t  O  \n"
                 "\t\t\t /|\\ \n"
                 "\t\t\t  |\\   \n";
}

void frame5() {
    std::cout << "\t\t\t\t  O  \n"
                 "\t\t\t\t /|\\ \n"
                 "\t\t\t\t /| \n";
}

void frame6() {
    std::cout << "\t\t\t\t  O  \n"
                 "\t\t\t\t /|\\ \n"
                 "\t\t\t\t / \\ \n";
}

void frame7() {
    std::cout << "\t\t\t\t \\O/  \n"
                 "\t\t\t\t  | \n"
                 "\t\t\t\t / \\ \n";
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