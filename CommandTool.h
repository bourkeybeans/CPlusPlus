#include <iostream>
#include <unordered_map>
#include <functional>
#include <string>
#include "TaskManager.h"
#include <vector>
#include "Util.h"

class CommandTool {

    private:
        std::unordered_map<std::string, std::function<void()>> commands;
        TaskManager tm;
    public: 
        CommandTool(){ // capture current object, no parameters, run this lambda
            commands["add"] = [this]() {addTask();};
            commands["list"] = [this]() {listTask();};
            commands["exit"] = [this]() {exitApp();};
        }
        void findCommand(std::string command){

            // find returns an iterator pointing to the pair
            auto it = commands.find(command);
            if (it == commands.end()){
                std::cout<< "Command Unknown";
                return;
            }

            it->second();
        }
    
    private:
        void addTask(){
            std::cout<<"| List Description | Priority (1-5) | Hours Allocated |" << endl;
            std::string details;
    
            std::getline(std::cin, details);

            std::vector<std::string> tokens = split(details);
            
            if (tokens.empty()) return;


            for (auto& token : tokens){
                std::cout << " -- " << token << " -- "; 
            }



            std::cout<< endl;

            
        }

        void listTask(){
            return;
        }

        void exitApp(){
            return;
        }
};
