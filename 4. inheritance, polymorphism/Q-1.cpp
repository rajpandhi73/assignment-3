#include <iostream>
/*
Q-1) Assume a class cricketer is declared. Declare a derived class batsman 
from cricketer. Data member of batsman. Total runs, Average runs and 
best performance. Member functions input data, calculate average 
runs, Displaydata. (Single Inheritance)
*/

class Cricketer 
{
public:
    void showInfo() 
    {
        std::cout << "Cricketer's Info" << std::endl;
    }
};

class Batsman : public Cricketer 
{
private:
    int totalRuns;
    int innings;
    int bestPerformance;
    float averageRuns;

public:
    void inputData() 
    {
        std::cout << "Enter total runs scored by the batsman: ";
        std::cin >> totalRuns;
        std::cout << "Enter number of innings played: ";
        std::cin >> innings;
        std::cout << "Enter best performance (highest score) of the batsman: ";
        std::cin >> bestPerformance;
    }

    void calculateAverage()
    {
        if (innings > 0) 
        {
            averageRuns = totalRuns / (float)innings;
        } 
        
        else 
        {
            averageRuns = 0;
        }
    }

    void displayData() 
    {
        std::cout << "\nBatsman Stats:\n";
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Innings Played: " << innings << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
    }
};

int main() 
{
    Batsman batsman;

    batsman.inputData();

    batsman.calculateAverage();

    batsman.displayData();

    return 0;
}
