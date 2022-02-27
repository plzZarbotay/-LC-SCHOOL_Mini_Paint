#include "Lemon_Inc.h"
void neirofirst(string str, vector<string> &Map,bool & flag){
    str = findsymb_str(str,'r');
    int x = 0;
    int a = 1;
    first_neiro(a,x,str);
    int y = 0;
    first_neiro(a,y,str);
    int width = 0;
    first_neiro(a,width,str);
    int height = 0;
    first_neiro(a,height,str);
    char symb;
    check_char(flag,a,str);
    if(flag==false){
        thirdmiss();
    return;
    }
    symb = str[a];
    empty_rec(Map,x,y,width,height,symb);

}
void neirosecond(string str,vector<string> &Map,bool & flag){
    str = findsymb_str(str,'R');
    int x = 0;
    int a = 1;
    first_neiro(a,x,str);
    int y = 0;
    first_neiro(a,y,str);
    int width = 0;
    first_neiro(a,width,str);
    int height = 0;
    first_neiro(a,height,str);
    char symb;
    check_char(flag,a,str);
    if(flag==false){
        thirdmiss();
    return;
    }
    symb = str[a];
    fill_rec(Map,x,y,width,height,symb);

}
void neirothird(string str, vector<string> &Map,bool & flag){
    str = findsymb_str(str,'c');
    int a = 1;
    float x = parse_float(str,a);
    float y = parse_float(str,a);
    float radius = parse_float(str,a);
    char symb;
    check_char(flag,a,str);
    if(flag==false){
        thirdmiss();
    return;
    }
    symb = str[a];
    empty_circle(Map,x,y,radius,symb);
}
void neirof(string str, vector<string> &Map,bool & flag){
    str = findsymb_str(str,'C');
    int a = 1;
    float x = parse_float(str,a);
    float y = parse_float(str,a);
    float radius = parse_float(str,a);
    char symb;
    check_char(flag,a,str);
    if(flag==false){
        thirdmiss();
        return;
    }
    symb = str[a];
    fill_circle(Map,x,y,radius,symb);
}
void neiros(string str, vector<string> &Map,bool & flag){
    str = findsymb_str(str,'L');
    int a = 1;
    float x_f = parse_float(str,a);
    float y_f = parse_float(str,a);
    float x_s = parse_float(str,a);
    float y_s = parse_float(str,a);
    char symb;
    check_char(flag,a,str);
    if(flag==false){
        thirdmiss();
        return;
    }
    symb = str[a];
    line(Map,x_f,y_f,x_s,y_s,symb);

}
