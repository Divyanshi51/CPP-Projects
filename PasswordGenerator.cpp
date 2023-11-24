#include <iostream>
#include <cstdlib> //srand //rand
#include <ctime>   //time
#include <string>  //size
using namespace std;

string getPassword(int length)
{
    string Password = "";
    string Characters = "aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMPSOVERTHELAZYDOG0123456789";
    int charSize = Characters.size();
    // cout << charSize;
    srand(time(0));
    int randomIndex;
    for (int i = 0; i < length; i++)
    {
        randomIndex = rand() % charSize;
        Password = Password + Characters[randomIndex];
    }
    return Password;
}

int main()
{
    int _length;
    cout << "Enter the Lenght of Password You Prefer:: ";
    cin >> _length;
               string Password = getPassword(_length);
    cout << "Generated Password :: " << Password << endl;
    return 0;
}
