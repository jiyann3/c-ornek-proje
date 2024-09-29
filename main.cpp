#include<iostream>
using namespace std;

int main(){
    int tercih,kahve,cay,lim;

    cout<<"Hosgeldiniz otomata\n";
    cout<<"Menu\n 1-Kahve\n 2-Cay\n3-Limonata\n";
    cout<<"Hangisini tercih edersiniz:";
    cin>>tercih;
    if(tercih==1){
        cout<<"Kahve ucreti 40 tldir\n";
        cout<<"Para aktar:";
        cin>>kahve;
        if(kahve!=40)
            cout<<"Tam olarak 40 lira aktarmalisiniz";
        else{
            cout<<"Kahveniz hazir,afiyet olsun";

        }

    }

    else if(tercih==2){
        cout<<"Cay ucreti 15 tldir\n";
        cout<<"Para aktar:";
        cin>>cay;
        if(cay!=15){
            cout<<"Tam olarak 15 lira aktarmalisiniz";
            }
        else{
            cout<<"Cayiniz hazir,afiyet olsun";


        }


    }
        else if(tercih==3){
        cout<<"limonata ucreti 30 tldir\n";
        cout<<"Para aktar:";
        cin>>lim;
        if(lim!=30){
            cout<<"Tam olarak 30 lira aktarmalisiniz";
            }

        else{
            cout<<"limonataniz hazir,afiyet olsun";
            }
            }

        else{
            cout<<"Menude boyle bir secenek yok";
        }









return 0;
}
