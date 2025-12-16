#include <iostream>
using namespace std;
int main(){
    string name,m,d;
    int g,id;
    cout <<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    getline(cin,name);
    cout <<"Fahsai: Wow!!! "<<""<<name<<" is a really cool name.\n";
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cin >> id;
    cout<<""<<name<<": ";
    g=id/10000000;
    cout<<"Fahsai: I think you may be GEAR "<<g-12<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<<""<<name<<": ";
    cin.ignore();
    getline(cin,m);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<""<<name<<": ";
    getline(cin,d);
    cout<<"Fahsai: "<<d<<"....that is OK!!! I'm looking forward to watching"<<" "<<m<<" with you.\n";
    cout<<name<< ": ";
    cout<<"Fahsai: 555+ see you "<<d<<". Bye Bye \\(^ ^)/";
}

