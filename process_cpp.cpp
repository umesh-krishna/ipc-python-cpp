#include <iostream>
#include <string.h>

using namespace std;

char STOP[] = "STOP";
char START[] = "START";
char CMD_A[] = "CMD_A";
char INVALID[] = "INVALID";

void listen() {
    
}

int main1(){
    for( int ii=0; ii<10; ++ii ){
        int input;
        std::cin >> input;
        std::cout << input*2 << std::endl;
        std::cout.flush();
    }
}

int main(){
    const int limit = 10;
    char *cmd = new char[128];
    char *out = new char[128];
    int iters = 0;
    bool started = false;
    while(iters < limit){
        std::cin >> cmd;
        if(!strcmp(cmd, STOP)) {
            break;
        }
        if(!started && !strcmp(cmd, START)) {
            started = true;
            out = cmd;
        }else if(started) {
            out = cmd;
        }else {
            out = INVALID;
        }
        std::cout << out << std::endl;
        std::cout.flush();
        iters++;


    }
}

int main2(int argc, char* argv[]) {
    int a, b;
    std::cin >> a;
    std::cout << a <<std::endl;
    std::cout.flush();
    std::cin >> b;
    std::cout << b << std::endl;
    std::cout.flush();
    return 0;
    char *command = new char[128];
    bool started = false;
    while(true) {
        cin >> a;
        std::cout << command << std::endl;
        std::cout.flush();
        break;
        if(!strcmp(command,  STOP)) {
            break;
        }
        else if(!started && !strcmp(command, START)){
            started = true;
            continue;
        }
        else if(started) {
            
        }
        else{
            // cout << INVALID;
        }
        
    }
    return 0;
}