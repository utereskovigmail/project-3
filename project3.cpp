#include <iostream>
#include <cstring>

using namespace std;

const int MAX=30;
void Count(int &taken, int &free, int &all, char str[], const int MAX){
    taken=strlen(str);
    free=MAX-taken;
    all=MAX;
    

}

int main(){
    char str[MAX];
    cin.getline(str,MAX);
    int taken;
    int free;
    int all;



    Count(taken, free, all, str, MAX);

    cout<<"all - "<<all<<endl;
    cout<<"taken - "<<taken<<endl;
    cout<<"free - "<<free<<endl;


    return 0;
}