// Problem :
#include <iostream>
using namespace std;
class FlightInfo
{
private:
    int flightId;
    string flightType;
    string origin;
    string destination;

public:
    void setFlightId(int flightId)
    {
        this->flightId = flightId;
    }
    void setflightType(string flightType)
    {
        this->flightType = flightType;
    }
    void setOrigin(string origin)
    {
        this->origin = origin;
    }
    void setDestination(string destination)
    {
        this->destination = destination;
    }

    int getFlightId()
    {
        return flightId;
    }
    string getFLightType()
    {
        return flightType;
    }
    string getOrigin()
    {
        return origin;
    }
    string getDestination()
    {
        return destination;
    }

    void display()
    {
        cout << "*********Flight Info**********" << endl;
        cout << "Flight ID : " << flightId << endl;
        cout << "Flight Type : " << flightType << endl;
        cout << "Origin : " << origin << endl;
        cout << "DEstination : " << destination << endl;
    }
};
int main()
{
    FlightInfo flight;
    flight.setFlightId(101);
    flight.setflightType("Economic class");
    flight.setOrigin("Delhi");
    flight.setDestination("Lucknow");
    flight.display();

    return 0;
}