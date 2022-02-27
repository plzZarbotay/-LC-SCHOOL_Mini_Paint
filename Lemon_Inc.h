#ifndef LEMON_INC_H_INCLUDED
#define LEMON_INC_H_INCLUDED

#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include <ostream>
#include <windows.h>
using namespace std;
void init(vector <string> &Map ,int width,int height,char symb);
void show(const vector <string> &Map);
void empty_rec(vector <string> &Map,int x, int y , int width , int height,char symb);
void fill_rec(vector <string> &Map,int x, int y , int width , int height,char symb);
void fill_circle(vector <string> &Map,double x, double y , double radius,char symb);
void empty_circle(vector <string> &Map,double x, double y , double radius,char symb);
void line(vector <string> &Map, double x_f, double y_f ,double x_s, double y_s, char symb);
void read_open_file(string path,vector<string> &Map,bool &flag);
int neirot(string str,vector<string> &Map,bool &flag);
void neirofirst(string str,vector<string> &Map,bool &flag);
void neirosecond(string str,vector<string> &Map,bool &flag);
void neirothird(string str ,vector<string> &Map,bool &flag);
void neiros(string str,vector<string> &Map,bool &flag);
int lenstr(string str);
void neiron(string str,vector <string> &Map,bool &flag);
bool isDigit(unsigned char c);
string findsymb_str(string & str,char symb);
int parse_int( const string  &str , int &a, bool &dot );
int parse_less_z( const string  &str , int &a );
float parse_float(const string  &str , int &a );
void neirof(string str, vector<string> &Map,bool & flag);
void write_in_file(string path,vector<string> &Map);
void first_neiro(int &a, int &x , const string & str);
void funcsec(bool &flag, string path);
void check_char(bool &flag, int a, string str);
void firstmiss();
void secondmiss();
void thirdmiss();
void fmiss();
#endif // LEMON_INC_H_INCLUDED
