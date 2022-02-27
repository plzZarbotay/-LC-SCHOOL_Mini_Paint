#include "Lemon_Inc.h"
void init(vector <string> &Map ,int width,int height,char symb){
    string line;
    if(0 >= width || width >300){
        secondmiss();
        return;
    }
    if(0 >= height || height >300){
        secondmiss();
        return;
    }
    for(int i = 0; i < width; i++ ){
        line+=symb;
    }
    for(int i = 0 ; i < height; i++){
        Map.push_back(line);
    }
}
void show(const vector <string> &Map){
    for(int i = 0; i < Map.size() ; i++){
        cout<<Map[i]<<endl;
    }
}
void empty_rec(vector <string> &Map,int x, int y , int width , int height,char symb){
    for(int i = 0; i < height; ++i){
        Map[y + i][x] = symb;
        Map[y + i][x+width-1] = symb;
    }
    for(int i = 0; i < width; ++i){
        Map[y][x+i] = symb;
        Map[y + height - 1][x+i] = symb;
    }
}
void fill_rec(vector <string> &Map,int x, int y , int width , int height,char symb){
    for(int i = 0 ; i < height; i++){
        for(int j = 0; j < width ; j++){
            Map[y+i][x+j] = symb;
        }
    }
}
