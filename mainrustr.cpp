#include "Lemon_Inc.h"
void neiron(string str,vector <string> &Map,bool &flag){
    if(str[0] == 'r'){
        neirofirst(str,Map,flag);
    }
    if(str[0] == 'R'){
        neirosecond(str,Map,flag);
    }
    if(str[0] == 'c'){
        neirothird(str,Map,flag);
    }
    if(str[0] == 'C'){
        neirof(str,Map,flag);
    }
    if(str[0] == 'L'){
        neiros(str,Map,flag);
    }
}
