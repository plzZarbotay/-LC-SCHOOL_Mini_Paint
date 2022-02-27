#include "Lemon_Inc.h"
void read_open_file(string path,vector<string> &Map,bool & flag){
ifstream fin;
fin.open(path);
if (!fin.is_open())
{
    firstmiss();
}
else
{
    char ch;
    string str ="";
    if(!fin.eof()){
        getline(fin,str);
        neirot(str,Map,flag);
    }
    else{
        secondmiss();
        return;
    }
    while(!fin.eof()){
        getline(fin,str);
        neiron(str,Map,flag);
    }
    fin.close();
   /* while (fin.get(ch))
    {
        if(ch == ' ')
            cout<<"ha ha"<<endl;
        cout << ch;

    }*/
    }
}
void write_in_file(string path,vector<string> &Map){
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
ofstream fout;
fout.open(path);
if (!fout.is_open())
{
    firstmiss();
}
else
{
        for(int i =0 ; i < Map.size(); i++){
            fout<<Map[i]<<endl;
    }
    fout.close();
}
}
