#include <iostream>

//This Program is used to review C++ consisting of multiple functions


int basic(){

    int wholenumber = 10; //declaration
    double decnumber = 5.5;
    char dolchar = '$';
    float testflo = 5.31f;
    bool letter = true;
    auto num = 6;

    std::cout << wholenumber << "\n";
    std::cout << decnumber << "\n";
    std::cout << dolchar << "\n";
    std::cout << testflo << "\n";
    std::cout << letter << "\n";
    std::cout << num << "\n";

    return 0;
}

int calculator(){
    int total = 0;
    int x,y;

    std::cout << "This is a basic additional calculator. \n";
    //Request for First Value
    std::cout << "Enter the first Value: \n";
    std::cin >> x;
    //Request for Second Value
    std::cout << "Enter the second Value: \n";
    std::cin >> y;

    //Sum and Output
    total = x + y;
    std::cout << total;

    return 0;
}

int compare(){
    int x,y;

    std::cout << "Higher or lower than 7. \n";
    std::cin >> x;


    if (x < 7){
        std::cout << "Less than 7. \n";
    }
    else if (x > 7){
        std::cout << "Greater than 7. \n";
    }
    else
        std::cout << "Equal to 7. \n";

    return 0;
}

int agecheck() {
    //your code goes here
    int age;
    std::cout << "Please Enter your Age to see the cost of tickets: \n";
    std::cin >> age;
    
    //free if 0-3
    if (age > 0 && age <= 3){
        std::cout << "Free";
    }

    //Discounted if 4-6
    else if (age >= 4 && age <= 6){
        std::cout << "Discounted";
    }
    
    //Normal if 7+
    else{
        std::cout << "Normal";
    }
    return 0;
}

int countdown(){
    int number;
    std::cout << "Enter a number to begin Countdown... \n";
    std::cin >> number;

    while(number >= 0){
        std::cout << number << "\n";
        number--;
    }
    return 0;
}

int sumall() {
    int n;
    int result=0;

    std::cout << "Enter a number to sum all numbers leading up to the entered number: \n";
    std::cin >> n;

    //Output the n Sum of numbers
    for (int i=0; i<n+1; i++){
 
        result = i+result;
    }
    std::cout << result;
    return 0;
}

int minimap() {
    int map[7][7] = {
        {0, 0, 1, 1, 0, 1, 0},
        {1, 0, 0, 1, 1, 0, 1},
        {0, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 1}
    };
    int in1, in2;
    std::cout << "This is a map 7x7 Map with 0's and 1's. Enter the first Digit: \n";
    std::cin >> in1;
    std::cout << "Enter the second digit: \n";
    std::cin >> in2;

    std::cout << "You landed on: " << map[in1][in2];

    return 0;
}

int main(){
    std::cout << "This is a Test: Program is now Running... \n";
    
    int choice = 0;

    std::cout << "MENU - Please enter a number: \n 1. basic \n 2.Calculator \n 3.Compare \n 4.Agecheck \n 5.Countdown \n 6.Sumall \n 7.minimap \n";
    std::cin >> choice;

    switch (choice){
        case 1:
            basic();
            break;
        case 2:
            calculator();
            break;
        case 3:    
            compare();
            break;
        case 4:    
            agecheck();
            break;
        case 5:
            countdown();
            break;
        case 6: 
            sumall();
            break;
        case 7:
            minimap();
            break;
        default:
            std::cout << "Invalid Choice";
            return 0;
    }
    return 0;
}