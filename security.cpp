#include "Lemon_Inc.h"
void funcsec(bool &flag, string path){
    int lenpath = lenstr(path);
    string strend = ".it";
    int proverka_it = lenpath - 3;
    int j = 0;
    for(int i = proverka_it; i < lenpath; i++){
        if(path[i] == strend[j]){
            flag = true;
        }
        else{
        flag = false;
        fmiss();
        return;
        }


        j++;

    }
}
void check_char(bool &flag, int a, string str){
    if(str[a+1] != '\0'){
        flag = false;
    }
}
int neirot(string str,vector<string> &Map,bool & flag){
    vector<int> zam;
    int first = 0;
    int a = 0;
    first_neiro(a,first,str);
    int second = 0;
    first_neiro(a,second,str);
    char symb;
    check_char(flag,a,str);
    if(flag==false){
        thirdmiss();
        return 0;
    }
    symb = str[a];
    init(Map,first,second,symb);
    return 0;
}
