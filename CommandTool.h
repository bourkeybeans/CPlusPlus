#include <iostream>

class CommandTool {

    std::unordered_map<std::string, std::function<void()>> commands = {
        {"add", addTask},
        {"list", listTask},
        {"exit", exitApp}
    };

    void findCommand(std::string command){

        auto func = commands[command]


    }
}