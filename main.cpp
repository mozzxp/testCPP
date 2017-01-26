// more variables stuff

#include <iostream>

using namespace std;

int main()
{
    string input;

    while(true){
        cout << "Command -> ";
        cin >> input;
        if(input == "MTT.startSystem(System.MultiTurboTools)"){
            cout << "System started sucsessfully"<<endl;
        }else if(input == "MTT.getMainDate"){
            system("cal");
        }else if(input == "MTT.getDateAndTime"){
            system("date");
        }else if (input == "MTT.clearSpace"){
            system("clear");
        }else{
            cout << "MTT.error :: this Command Not Found! \n type 'MTT.help' for more info \n";
        }
    }

    return 0;
}