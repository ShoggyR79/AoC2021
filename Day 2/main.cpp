#include <iostream>
#include <vector>
#include <fstream>
#include <map>

void updateDirection(int &hor, int &vert, std::string dir, int val, int &aim){
    if (dir == "forward"){
        hor += val;
        vert += (aim * val);
    }
    if (dir == "down"){
        aim += val;
    }
    if (dir == "up"){
        aim -= val;
    }
}

int main() {
    std::ifstream infile;
    infile.open("../input.txt");


//    std::map<std::string, int>direction;
    int horizontal = 0;
    int vertical = 0;
    int aim = 0;
    std::string dir;
    std::string value;
    while (infile >> dir){
        infile >> value;
        updateDirection(horizontal, vertical, dir, std::stoi(value), aim);
    }
    std::cout<< horizontal<<" "<<vertical<<" "<< horizontal*vertical<<std::endl;

}


