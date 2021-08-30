#include <drogon/drogon.h>

using namespace std;

int main()
{
    //Set HTTP listener address and port
    drogon::app().addListener("localhost", 8000);

    cout << "server litsening on port 8000";
    //Load config file
    //drogon::app().loadConfigFile("../config.json");
    //Run HTTP framework,the method will block in the internal event loop
    drogon::app().run();
    return 0;
}
