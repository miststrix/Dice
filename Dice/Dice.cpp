#include <iostream>
#include <cstdio>
#include <windows.h>
#include <conio.h>
#include <time.h>


using namespace std;

int random();
void printDice(int randomNumber);
void hello();
void choseFirst();
void step();
void otherStep();
void setup();
void results();

int a;
int b;
int scoreComputer;
int scorePlayer;

int main()
{
    setup();
    hello();
    choseFirst();
    step();
    step();
    step();
    results();
}


int random() {

    srand(time(NULL));
    return (rand() % 6 + 1);
}

void choseFirst() {
    cout << "Now I'm choosing who will roll the dice first..\n";
    for (int i = 0; i < 47; i++) {
        cout << "*";
        Sleep(30);
    }
    cout << "\n";
    srand(time(NULL));
    a = (rand() % 3 + 1);
    if (a == 1)
        cout << "The PLAYER moves first!";
    else
        cout << "The COMPUTER moves first!";
    system("pause >> void");
    system("cls");
}

void setup() {
    system("cls");
    scoreComputer = 0;
    scorePlayer = 0;
}

void results() {
    int chose = 3;
    system("cls");
    if (scorePlayer > scoreComputer) {
        cout << "You won!\n";
        cout << "Your score: " << scorePlayer << "\n";
        cout << "Computer's score: " << scoreComputer << "\n";
    }
    if (scoreComputer > scorePlayer) {
        cout << "You lost!\n";
        cout << "Your score: " << scorePlayer << "\n";
        cout << "Computer's score: " << scoreComputer << "\n";
    }
    if (scoreComputer == scorePlayer) {
        cout << "A draw!\n";
        cout << "Your score: " << scorePlayer << "\n";
        cout << "Computer's score: " << scoreComputer << "\n";
    }
    while (chose != 1 && chose != 2) {
        cout << "\nLet's play again?\n";
        cout << "1. Yes.\n";
        cout << "2. No\n";
        cin >> chose;
    }
    switch (chose) {
    case 1:
        main();
        break;
    case 2:
        exit(1);
    }
   
}

void step() {
    if (a == 1){
        cout << "Press any button to roll the dice..\n";
        system("pause >> void");
        cout << "Rolling the dice for you..\n";
        for (int i = 0; i < 47; i++) {
            cout << "*";
            Sleep(30);
        }
        cout << "\n";
        b = random();
        printDice(b);
        scorePlayer += b;

        cout << "\nRolling the dice for computer..\n";
        for (int i = 0; i < 47; i++) {
            cout << "*";
            Sleep(30);
        }
        cout << "\n";
        b = random();
        printDice(b);
        scoreComputer += b;
    }
    else {
        cout << "Rolling the dice for computer..\n";
        for (int i = 0; i < 47; i++) {
            cout << "*";
            Sleep(30);
        }
        cout << "\n";
        b = random();
        printDice(b);
        scoreComputer += b;

        cout << "\nYour turn, press any button to roll the dice..\n";
        system("pause >> void");
        cout << "Rolling the dice for you..\n";
        for (int i = 0; i < 47; i++) {
            cout << "*";
            Sleep(30);
        }
        cout << "\n";
        b = random();
        printDice(b);
        scorePlayer += b;
    }
    cout << "\nYour score: " << scorePlayer << "\n";
    cout << "Computer's score: " << scoreComputer << "\n";
    system("pause >> void");
    system("cls");
}

void hello() {
    cout << "Hello, to start the game, click on any button..";
    system("pause >> void");
    system("cls");
}

void printDice(int randomNumber) {
    switch (randomNumber) {
        case 1:
            cout << "##############\n##############\n##############\n######  ######\n##############\n##############\n##############\n";
            break;
        case 2:
            cout << "##############\n########  ####\n##############\n##############\n##############\n###  #########\n##############\n";
            break;
        case 3:
            cout << "##############\n#########  ###\n##############\n######  ######\n##############\n###  #########\n##############\n";
            break;
        case 4:
            cout << "##############\n###  ####  ###\n##############\n##############\n##############\n###  ####  ###\n##############\n";
            break;
        case 5:
            cout << "##############\n###  ####  ###\n##############\n######  ######\n##############\n###  ####  ###\n##############\n";
            break;
        case 6:
            cout << "##############\n###  ####  ###\n##############\n###  ####  ###\n##############\n###  ####  ###\n##############\n";
            break;
    }

}

