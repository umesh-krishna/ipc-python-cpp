#include <iostream>
#include <string.h>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main(int argc, char* argv[]) {
    int a, b;
    char* operation = new char[128];
    cin >> operation;
    int (*function)(int, int);
    if(strcmp(operation, "ADD") == 0) {
        function = &add;
    }else if (strcmp(operation, "SUB") == 0) {
        function = &sub;
    }else{
        return 0;
    }
    cin >> a >> b;
    cout << function(a, b);

    return 0;

}