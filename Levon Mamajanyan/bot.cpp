#include <iostream>
#include <string.h>
using namespace std;

string harcer();

int  main () {

        harcer ();
        return 0 ;
}

string harcer (){
        int miavor = 0;
        string anun;
        cout<< "Barev inch e Dzer anuny? "<<endl;
        cin>>anun;
        cout << "Hargeli "<<anun<<"!" "Qani tarekan es"<<endl<<;
        cin>>anun;
        if (anun < 18){
        cout << "karox es masnakcel harcmany"<<endl;
        cin>>anun;
