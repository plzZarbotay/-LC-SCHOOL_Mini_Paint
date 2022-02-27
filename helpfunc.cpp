#include "Lemon_Inc.h"
int lenstr(string str){
	if (str == "")
		return 0;
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
int charToint(char symb){
    return symb - '0';
}
bool isDigit(unsigned char c){
  if (c >= '0' && c <= '9')
    return true;
  return false;
}
string findsymb_str(string & str,char symb){
    for(int i = 0; i < lenstr(str); i++){
        if(str[i] == symb){
            str[i] = str[i+1];
        }
    }
    int j = 0;
    for(int i = 1; i < lenstr(str);i++){
        str[i] = str[i+1];
    }
    return str;

}
int parse_int( const string  &str , int &a, bool &dot ){
    int x = 0;
    bool flags = true;
    dot =false;
    while(a<lenstr(str) && flags && !dot){
        if(isDigit(str[a])){
            x *= 10;
            x +=str[a] - '0';
        }
        else if(str[a] == '.'){
            dot = true;

        }
        else if(str[a] == ' '){
            flags = false;
        }
        else{
            secondmiss();
            return -1;
        }
        ++a;
        }
    if(a == lenstr(str)){
        secondmiss();
        return -1;
    }
    return x;

}
int parse_less_z( const string  &str , int &a ){
    float sub_x = 0.0;
    bool flags = true;
    int n = 0;
     while(a<lenstr(str) && flags && n < 8){
            if(isDigit(str[a])){
                sub_x *= 10;
                sub_x +=str[a] - '0';
            }
            else if(str[a] == ' '){
                flags = false;
            }
            else{
                secondmiss();
                return -1;
            }
        ++a;
        ++n;



        }
    for(int i = 0; i < n - 1; i++){
        sub_x /= 10;
    }
    if(a == lenstr(str)){
        cout<<"Error: Operation file corrupted"<<endl;
        return -1;
    }
    return sub_x;
}
float parse_float(const string  &str , int &a ){
    bool dot;
    float result = parse_int(str,a,dot);
    if(dot){
        result+=parse_less_z(str,a);
    }
    return result;
}
void first_neiro(int &a, int &x,const string &str){
    bool flags = true;
    while(a<lenstr(str) && flags){
        if(isDigit(str[a])){
            x *= 10;
            x +=str[a] - '0';
        }
        else if(str[a] == ' '){
            flags = false;
        }
        else{
            secondmiss();
            return;
        }
        ++a;
        }
    if(a == lenstr(str)){
        secondmiss();
        return;
    }
}
