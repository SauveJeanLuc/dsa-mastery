#include <iostream>
using namespace std;

struct Server{

    string username;
    string ipAdrress;
    string password;
    int numOfConnections;

};

int main() {

    Server *pointer, localServer;
    pointer = &localServer;
    localServer.username = "LocalHost";

    cout << localServer.username << endl;
    cout << (*pointer).username << endl;
    
}