//xander maniaci
//word game hits
#include <iostream>
using namespace std;

int main()
{

    //declare variables needed
    string name, city, college, profession, animal, pet_name;
    char enter;
    int age;
    //prompt for inputs
    cout<<"Name: ";
    getline(cin, name);
    cout<<"city: ";
    getline(cin, city);
    cout<<"age: ";
    cin>> age;
    //use to ignore enter input after age
    //could also use cin.ignore();
    cin.get(enter) ;
    cout<<"college: ";
    getline(cin, college);
    cout<<"profession: ";
    getline(cin, profession);
    cout<<"animal: ";
    getline(cin, animal);
    cout<<"pet name: ";
    getline(cin, pet_name);
    //show formatted output
cout << "There once was a person named "<< name<<" who lived in "<< city <<"."<<endl;
cout << "At the age of "<< age <<", "<< name <<" went to college at "<< college <<"."<<endl;
cout << name <<" graduated and went to work as a "<< profession <<"."<<endl;
cout << "Then, "<< name <<" adopted a(n) "<< animal <<" named "<< pet_name<<"."<<endl;
cout << "They both lived happily ever after!\n\n"<<endl;
return 0;
}
