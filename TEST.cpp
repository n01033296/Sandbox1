#include <iostream>
//This Program is used to review C++ consisting of multiple functions

//Class for Chirp-chirp
class Bird {
    public:
    void makeSound(){
        std::cout << "chirp-chirp \n";
    }
};

//Class for Car case 12
class Car{
    //private area
    private:
        int horsepowers;

    //public area
    public:
        //setter function
        void setHorsepowers(int input) {
            if(input>800){
                std::cout << "Too much. \n";
                horsepowers = input;
        }
            else{
                horsepowers = input;
            }
        }
        //getter function
        int getHorsepowers() {
            return horsepowers;
        }
};

//Class for Painting for case13
class Painting {
    private:
        std::string paint;
    public:
    Painting(std::string nm){
        setpaint(nm);
        getpaint();
    }
    //Set Name
    void setpaint(std::string x){
        paint = x;
    }
    //Get Name
    std::string getpaint(){
        return paint;
    }

};

//Player Class for Case14
class Player
{
public:
    int points;
    Player(int x)
    {
        points = x;
        points %= 5;
    }
//destructor
    ~Player(){
        std::cout << points;
    }
};

//Phone Class for Case15
class Phone
{
    public:
        int charge;
        Phone() {
            charge = 100;
        }
        void use() {
            charge -=10;
        }
        void getCharge() {
            std::cout << charge;
        }
};

//Number Class for Case16
class Number{
    private:
        int num;
    public:
        Number(int n) {
            num = n;
        }
        //complete the method
        int square() const {
            int val = num*num;
            return val;
        };
};

//TV Class for Case17
class TV {
    public:
        TV(int h, int w): height(h), width(w) {};
        void area() {
            std::cout <<height*width;
        }
    private:
        int height;
        int width;
};
//Engine and Vehicle Class for Case18
class Engine {
    public:
        Engine(int p): power(p) {};
        void start() {
            std::cout <<"Engine ON ("<<power<<" horsepower)";
        }
    private:
        int power;
};
class Vehicle {
    public:
        Vehicle(Engine x, std::string c, int y): e(x), color(c), year(y) {};
        void start() {
            std::cout <<"Starting"<<std::endl;
            //Call start() of Engine
            e.start();
        }
    private:
        Engine e;
        std::string color;
        int year;
};

int basic(){
    //Testing different variable types.
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
    //Basic sum function
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
    //Higher or Lower than 7 if statement
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
    //Agechecker with user input - ticket system
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
    //While loop for a countdown.
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
    //For loop to sum all #s
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
    //Multidimensional Array sandbox
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

std::string concatenate(std::string x){
    //Testing concatenate and passing through functions.
    std::string intro1 = "This is a Test: ";
    std::string intro2 = "Program is now Running... \n";
    std::string word;
    word = x + intro1 + intro2;
    return word;
}

void arraypointer() {
    //This is a sandbox for pointers and array - does not take any user input
    int ages[] = {19, 24, 36, 45, 56, 52, 21, 27, 24, 34, 29, 60, 40, 42, 45, 47, 22, 30, 34, 20, 18, 26, 51, 43, 47, 39, 22, 34, 56, 52, 21, 27, 24, 37, 19, 24, 36, 45, 44, 49, 23, 25, 19, 40, 29, 60, 40, 42, 45, 47, 61, 30, 19, 43, 47, 39, 41, 46, 29, 24, 21, 25, 28};
    
    int size = 63;
    int total = 0;
    int avg = 0;

    int *p = ages;
    
    for(int i=0;i<size;i++) {
        total = total + *p;
        p++;
        
    }
    //To get the average = sum of array / size of array
        avg = total / size;
        std::cout << avg << std::endl;

}

int dynamicmem(){
    int n;
    std::cout << "Enter an array size: \n";
    std::cin >> n; //size of the array

    int inputs;
    int *nums = new int[n];
    //Accept inputs into the array
    for(int i=0; i<n; i++){
        std::cout << "Enter Value: \n";
        std::cin >> inputs;
        nums[i]=inputs;
    }

    //Compare for max number(highest)
    int max = nums[0];
    for(int i=0; i<n; i++) {
        if(nums[i]>max)
            max = nums[i];

    }
    std::cout << "Highest Value: " << max;
    //Deallocate memory
    delete[] nums;
    return 0;
}

// Welcome robot that takes an int mode and string name
void welcomebot(int mode, std::string name){
    if (mode == 1){
        std::cout << "Welcome, " << name << "!\n";
    }
    else if (mode == 2){
        std::cout << "Goodbye, " << name << "!\n";
    }
    else
        std::cout << "Wrong mode entered!\n";
}

//Function that converts Days -> Seconds
int toSeconds(int days){
    int sec;
    //days * 24 hours * 60 mins * 60 to get the seconds
    sec=days*24*60*60;
    return sec;
}

//Overload Function that allows double and returns a double for the toSeconds Function
double toSeconds (double days){
    return days*24*60*60;
}


int main(){
    //Intro to send "Hello to concatenate function, function returns a whole intro."
    std::string intro;
    std::string Hello = "Hello \n";
    intro = concatenate(Hello);
    std::cout << intro;

    //Call Welcome Bot Function
    int mode;
    std::cout << "\nEnter 1 - Hello Mode. \nEnter 2 - Goodbye Mode\n";
    std::cin >> mode;
    std::cout << "Enter your Name: \n";
    std::string name;
    std::cin >> name;
    std::string paint;

 welcomebot(mode, name);

    //Menu
    int choice = 0;
    int seconds;
    std::cout << "MENU - Please enter a number: \n 1. basic \n 2.Calculator \n 3.Compare \n 4.Agecheck \n 5.Countdown \n 6.Sumall \n 7.minimap \n 8.arraypointer \n 9.dynamicmem \n 10.toSeconds \n 11.chirp-chirp \n 12.Car \n 13.Paintings \n 14.PlayerDestructor \n 15.GetCharge \n 16.NumberSquared \n 17.TV \n 18.Vehicle \n";
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
        case 8:
            arraypointer();
            break;
        case 9:
            dynamicmem();
            break;
        case 10:
        {
            int days;
            std::cout << "Enter the amount of days to be calculated to seconds: \n";
            std::cin >> days;
            seconds = toSeconds(days);
            std::cout << "Seconds: " << seconds;
            break;
        }
        case 11:
        {
            //instantiation
            Bird bird;
    
            //class call
            bird.makeSound();
            break;
        }
        case 12:
        {
            int horsepowers;
            std::cout << "Enter the amount of Horsepower for the car: \n";
            std::cin >> horsepowers;
            //instantiation
            Car car;
            //setting the value for private member
            std::cout << "Horsepower Set privately. \n";
            car.setHorsepowers(horsepowers);
            //printing the value of private member
            std::cout << "Getting Horsepower privately: "<< car.getHorsepowers();
            break;
        }
        case 13:
        {
            std::cout << "Enter a name: \n";
            std::cin >> paint;
            //const and sending argument to class
            Painting painting(paint);
            //printing the entered names with painting
            std::cout << "Names: " << painting.getpaint();
            break;
        }
        case 14:
        {
            int points;
            std::cout << "Enter the amount of points for the player. \n";
            std::cin >> points;
            Player obj(points);
            break;
        }
        case 15:
        {
            Phone p;
            p.use();
            Phone *ptr = &p;
    
            //call the getCharge() method on ptr
            ptr->getCharge();
            break;
        }
        case 16:
        {
            int x;
            std::cout << "Enter a number to Square: ";
            std::cin >> x;
            const Number myNum(x);
            std::cout << myNum.square();
            break;
        }

        case 17:
        {
            int x1,x2;
            std::cout << "Enter Two integers for the television size: ";
            std::cin >> x1 >> x2;
            TV tele(x1,x2);
            tele.area();
            break;

        }
        case 18:
        {
            int power;
            std::string color;
            int year;
            std::cout << "Enter Power, Color, and Year of the vehicle: \n";
            std::cin >> power >> color >> year;
    
            Engine e(power);
            //Create vehicle object with the given Engine and inputs in main and call Start()
            Vehicle vehicle(power, color, year);
            vehicle.start();
            break;
        }
        default:
        {
            std::cout << "Invalid Choice\n";
            return 0;
        }
    }
    return 0;
}