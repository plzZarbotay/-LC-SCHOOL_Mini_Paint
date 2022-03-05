#include "Lemon_Inc.h"
double square_distance(double x_f,double y_f,double x_s,double y_s){
    return (x_f - x_s)*(x_f - x_s) + (y_f - y_s) * (y_f - y_s);
}
void fill_circle(vector <string> &Map,double x, double y , double radius,char symb){
    for(int i = 0; i < Map.size(); i++){//i = y
        for(int j = 0 ; j <Map[0].size();j++ ){//j = x
            if(square_distance(j,i,x,y) < (radius + 1) *(radius + 1)){
                Map[i][j]=symb;
            }
        }
    }
}
void empty_circle(vector <string> &Map,double x, double y , double radius,char symb){
    for(int i = 0; i < Map.size(); i++){//i = y
        for(int j = 0 ; j <Map[0].size();j++ ){//j = x
            if((square_distance(j,i,x,y) < (radius + 1) *(radius + 1))&&(square_distance(j,i,x,y) > (radius - 1) *(radius - 1))){
                Map[i][j]=symb;
            }
        }
    }
}
bool inside(double first,double second,double third){
    return (first <= third && second >= third)||(first >= third && second <= third);

}
void line(vector <string> &Map, double x_f, double y_f ,double x_s, double y_s,char symb ){
    double A = y_f - y_s ;
    double B = x_s - x_f;
    double C = (x_f*y_s) - (x_s*y_f);
    for(int i = 0; i < Map.size(); i++){//i = y
        for(int j = 0 ; j <Map[0].size();j++ ){//j = x
            if(((A*j) + (B*i) + C > -1) && ((A*j) + (i*B) + C < 1)&&(inside(x_f,x_s,j) && inside(y_f,y_s,i))){
                Map[i][j]=symb;
            }
        }
    }

}
