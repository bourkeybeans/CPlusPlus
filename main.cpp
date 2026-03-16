#include <stdio.h>
#include <iostream>
#include "CommandTool.h"

using namespace std;

CommandTool c;

int main(int argc, char** argv) {


    cout << "Welcome to Productivity Hub, Use Help for Command List" << std::endl;

    string command;
    while (1){
        cout<<"> ";
        getline(cin, command);
        
        if (command == "exit"){
            break;
        }

        c.findCommand(command);
        

    }

    
};