// Demo of class and objects

#include <iostream>
using namespace std;
class Animals
{
private:
    string classification;
    int noOfLegs;

public:
    void setClassification(string classification)
    {
        this->classification = classification;
    }
    void setNoOfLegs(int noOfLegs)
    {
        this->noOfLegs = noOfLegs;
    }

    string getClassification()
    {
        return classification;
    }

    int getNoOfLegs()
    {
        return noOfLegs;
    }

    void display();
};

void Animals ::display()
{
    cout << "Welcome to the Zoo-logical Park" << endl;
    cout << "Classification : " << classification << endl;
    cout << "NoOfLegs : " << noOfLegs << endl;
}

int main()
{
    Animals dog;

    dog.setClassification("Mammel");
    dog.setNoOfLegs(4);

    dog.display();

    // cout << "Welcome to the Zoo-logical Park" << endl;
    // cout << "Classification : " << dog.getClassification() << endl;
    // cout << "NoOfLegs : " << dog.getNoOfLegs() << endl;

    return 0;
}