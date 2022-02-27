#include "Lemon_Inc.h"
void firstmiss(){
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
    cout << "Error: name file" << endl;
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 0);
}
void secondmiss(){
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
    cout<<"Error: Operation file corrupted"<<endl;
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 0);
}
void thirdmiss(){
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
    cout<<"Error: a lot of arguments"<<endl;
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 0);
}
void fmiss(){
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
    cout<<"Error: Operation file has not correct extension"<<endl;
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 0);
}
