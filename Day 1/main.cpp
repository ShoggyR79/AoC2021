#include <iostream>


#include <iostream>
#include <fstream>
#include <vector>

int main () {
    std::ifstream infile;
    infile.open("C:\\Vanderbilt Folder\\Sophomore\\CS3152\\AoC2021\\Day 1\\input.txt");

    std::string numberWord;
    std::vector<int>measurements;
    int count = 0;
    while (infile >> numberWord){
        measurements.push_back(std::stoi(numberWord));
    }
    int f = 1;
    int sumPrev = measurements[0] + measurements[1] + measurements[2];
    while (f + 2 < measurements.size()){
        int sumThis = measurements[f] + measurements[f+1] + measurements[f+2];
        if (sumThis > sumPrev){
            count++;
        }
        sumPrev = sumThis;
        f++;
    }


    std::cout<<count<<std::endl;
    infile.close();
}


