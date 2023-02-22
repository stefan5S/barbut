#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<conio.h>
using namespace std;
int main()
{
    int ok,nr_player,nr_computer,puncte_computer,puncte_player,continue_joc,culoare_scris,culoare_fundal,obtiune,culoare_scris_fundal_aleatoriu;
char apasa_orice_tasta_pentru_a_inchide;
    srand(time(0));
    puncte_player=0;
    puncte_computer=0;
    continue_joc=1;
//void textbackground(int green);
 //clrscr(); asa ar trebui sa schimg culoarea de fundal dar...nu mere
//system("color 1C");schimb imaginea de fundal si scrisul;1 pt fundal C pt culoarea scrisului
/*
ok=1;
while(ok==1)
{
    culoare_fundal=rand();
    if(culoare_fundal>=2&&culoare_fundal<=4)  ///aleg un numar aleator pentru culoarea de fundal
        ok=0;
}
ok=1;
while(ok==1)
{
    culoare_scris=rand();
    if(culoare_scris>=9&&culoare_scris<=11)           ///aleg un numar aleator pentru culoarea scrisului
        ok=0;
}

if(culoare_fundal==2&&culoare_scris==9)
system("color 29");
else
    if(culoare_fundal==2&&culoare_scris==10)           ///verific care dintre posibilitati-le obtinute se potriveste si schimb fundalul
    system("color 2A");
else
    if(culoare_fundal==2&&culoare_scris==11)
    system("color 2B");
else
    if(culoare_fundal==3&&culoare_scris==9)
    system("color 39");
else
    if(culoare_fundal==3&&culoare_scris==10)
    system("color 3D");
if(culoare_fundal==3&&culoare_scris==11)
    system("color 3E");
else
    if(culoare_fundal==4&&culoare_scris==9)
    system("color 4B");
else
    if(culoare_fundal==4&&culoare_scris==10)
    system("color 4A");
else
    if(culoare_fundal==4&&culoare_scris==11)
    system("color 49");

  //de moada veche...
*/
ok=1;
while(ok==1)
{
    culoare_scris_fundal_aleatoriu=rand();
    if(culoare_scris_fundal_aleatoriu>=0&&culoare_scris_fundal_aleatoriu<=63)
        ok=0;
}

if(culoare_scris_fundal_aleatoriu==0)
system("color 08");
if(culoare_scris_fundal_aleatoriu==1)
system( "color 09");
if(culoare_scris_fundal_aleatoriu==2)
system( "color 0A");
if(culoare_scris_fundal_aleatoriu==3)
system( "color 0B");
if(culoare_scris_fundal_aleatoriu==4)
system( "color 0C");
if(culoare_scris_fundal_aleatoriu==5)
system( "color 0D");
if(culoare_scris_fundal_aleatoriu==6)
system( "color 0E");
if(culoare_scris_fundal_aleatoriu==7)
system( "color 0F");

if(culoare_scris_fundal_aleatoriu==8)
system("color 18");
if(culoare_scris_fundal_aleatoriu==9)
system( "color 19");
if(culoare_scris_fundal_aleatoriu==10)
system( "color 1A");
if(culoare_scris_fundal_aleatoriu==11)
system( "color 1B");
if(culoare_scris_fundal_aleatoriu==12)
system( "color 1C");
if(culoare_scris_fundal_aleatoriu==13)
system( "color 1D");
if(culoare_scris_fundal_aleatoriu==14)
system( "color 1E");
if(culoare_scris_fundal_aleatoriu==15)
system( "color 1F");

if(culoare_scris_fundal_aleatoriu==16)
system("color 28");
if(culoare_scris_fundal_aleatoriu==17)
system( "color 29");
if(culoare_scris_fundal_aleatoriu==18)
system( "color 2A");
if(culoare_scris_fundal_aleatoriu==19)
system( "color 2B");
if(culoare_scris_fundal_aleatoriu==20)
system( "color 2C");
if(culoare_scris_fundal_aleatoriu==21)
system( "color 2D");
if(culoare_scris_fundal_aleatoriu==22)
system( "color 2E");
if(culoare_scris_fundal_aleatoriu==23)
system( "color 2F");

if(culoare_scris_fundal_aleatoriu==24)
system("color 38");
if(culoare_scris_fundal_aleatoriu==25)
system( "color 39");
if(culoare_scris_fundal_aleatoriu==26)
system( "color 3A");
if(culoare_scris_fundal_aleatoriu==27)
system( "color 3B");
if(culoare_scris_fundal_aleatoriu==28)
system( "color 3C");
if(culoare_scris_fundal_aleatoriu==29)
system( "color 3D");
if(culoare_scris_fundal_aleatoriu==30)
system( "color 3E");
if(culoare_scris_fundal_aleatoriu==31)
system( "color 3F");

if(culoare_scris_fundal_aleatoriu==32)
system("color 48");
if(culoare_scris_fundal_aleatoriu==33)
system( "color 49");
if(culoare_scris_fundal_aleatoriu==34)
system( "color 4A");
if(culoare_scris_fundal_aleatoriu==35)
system( "color 4B");
if(culoare_scris_fundal_aleatoriu==36)
system( "color 4C");
if(culoare_scris_fundal_aleatoriu==37)
system( "color 4D");
if(culoare_scris_fundal_aleatoriu==38)
system( "color 4E");
if(culoare_scris_fundal_aleatoriu==39)
system( "color 4F");

if(culoare_scris_fundal_aleatoriu==40)
system("color 58");
if(culoare_scris_fundal_aleatoriu==41)
system( "color 59");
if(culoare_scris_fundal_aleatoriu==42)
system( "color 5A");
if(culoare_scris_fundal_aleatoriu==43)
system( "color 5B");
if(culoare_scris_fundal_aleatoriu==44)
system( "color 5C");
if(culoare_scris_fundal_aleatoriu==45)
system( "color 5D");
if(culoare_scris_fundal_aleatoriu==46)
system( "color 5E");
if(culoare_scris_fundal_aleatoriu==47)
system( "color 5F");

if(culoare_scris_fundal_aleatoriu==48)
system("color 68");
if(culoare_scris_fundal_aleatoriu==49)
system( "color 69");
if(culoare_scris_fundal_aleatoriu==50)
system( "color 6A");
if(culoare_scris_fundal_aleatoriu==51)
system( "color 6B");
if(culoare_scris_fundal_aleatoriu==52)
system( "color 6C");
if(culoare_scris_fundal_aleatoriu==53)
system( "color 6D");
if(culoare_scris_fundal_aleatoriu==54)
system( "color 6E");
if(culoare_scris_fundal_aleatoriu==55)
system( "color 6F");

if(culoare_scris_fundal_aleatoriu==56)
system("color 78");
if(culoare_scris_fundal_aleatoriu==57)
system( "color 79");
if(culoare_scris_fundal_aleatoriu==58)
system( "color 7A");
if(culoare_scris_fundal_aleatoriu==59)
system( "color 7B");
if(culoare_scris_fundal_aleatoriu==60)
system( "color 7C");
if(culoare_scris_fundal_aleatoriu==61)
system( "color 7D");
if(culoare_scris_fundal_aleatoriu==62)
system( "color 7E");
if(culoare_scris_fundal_aleatoriu==63)
system( "color 7F");












                                                       ///creem un meniu al jocului
cout<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<"BARBUT!"<<'\n';
cout<<"Start Game(1->enter)"<<'\n';
cout<<"Instructiuni(2->enter)"<<'\n'<<'\n';
//cout<<"Apasa 1 pentru a juca sau 2 pentru instructiuni, ambele fiind urmate de apasarea tastei enter. "<<'\n';
cin>>obtiune;//alegerea obiunii pentru instructiuni sau start joc
if(obtiune==2)
{
    cout<<"Bine ai venit ii lumea jocurilor de noroc!"<<'\n'<<"Pentru a da cu zarul trebuie sa apesi 1 apoi enter si sa iti incerci norocul,"<<'\n'<<" dupa fiecare afisare a punctajului procedeul se va repeta. La apsarea tastei"<<'\n'<<" 2->enter jocul se va opri."<<'\n'<<"In cazul in care tu si computer-ul dezvaluiti aceeasi fata a zarului nici unul"<<'\n'<<" din voi nu va prmi puncte."<<'\n'<<"Bafta"<<'\n'<<"Apasa 1 si enter pentru a incepe";
    cin>>obtiune;
    cout<<'\n'<<'\n'<<'\n'<<'\n';
}
                                                        ///sfarst meniu al jocului

///corpul principal al jocului
if(obtiune==1)
{


 while(continue_joc==1)
  {
ok=1;
    while(ok==1)
    {
        nr_player=rand();
        if(nr_player>=1&&nr_player<=6)
        {
            ok=0;
            cout<<"player: "<<nr_player<<' ';          ///calculez punctele player-ului
        }
    }
ok=1;

while(ok==1)
{
    nr_computer=rand();
    if(nr_computer>=1&&nr_computer<=6)
    {
        ok=0;
        cout<<"computer: "<<nr_computer<<' ';          ///calculez punctele computer-ului
    }
}
cout<<'\n';
if(nr_player>nr_computer)
{
        puncte_player=puncte_player+nr_player;
        cout<<"puncte total player: "<<puncte_player<<' '<<"puncte total coumuter: "<<puncte_computer<<'\n';

}
else                                                          ///calculez suma punctelor si le afisez
if(nr_computer>nr_player)
{
    puncte_computer=puncte_computer+nr_computer;
    cout<<"puncte total player: "<<puncte_player<<' '<<"puncte total computer: "<<puncte_computer<<'\n';
}
else
{
    cout<<"egalitate"<<'\n';
}
cin>>continue_joc;

cout<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n'<<'\n';
  }
  cout<<"punctaj final player: "<<puncte_player<<' '<<"punctaj final computer: "<<puncte_computer<<'\n';
  cin>>apasa_orice_tasta_pentru_a_inchide;
}
return 0;
}
