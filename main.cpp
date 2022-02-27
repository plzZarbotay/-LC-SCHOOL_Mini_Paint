#include "Lemon_Inc.h"
int main()
{
    vector<string> Map;
    string path;
    cin>>path;
    bool flag = true;
    funcsec(flag,path);
    if( flag == false ){
        return 0;
    }
    read_open_file(path,Map,flag);
    if( flag == false ){
        return 0;
    }
    show(Map);
    string outpath;
    cin>>outpath;
    if(outpath == "--save"){
        outpath = "result_operation_file.it";
        write_in_file(outpath,Map);
    }
    else{
        cout<<"Error: a lot of arguments"<<endl;
    }
    return 0;
}
