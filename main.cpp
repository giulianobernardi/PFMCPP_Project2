#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 

short int
unsigned short int
unsigned int
int
long int
unsigned long int
long long int
unsigned long long int
signed char
unsigned char
float
double
long double
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    short int shortInt01 = 1;
    short int shortInt02 = -22;
    short int shortInt03 = 1231;

    unsigned short int uShortInt01 = 0;
    unsigned short int uShortInt02 = 34000;
    unsigned short int uShortInt03 = 65535;

    unsigned int uInt01 = 0;
    unsigned int uInt02 = 65644;
    unsigned int uInt03 = 4294967295;

    int int01 = -2147483648;
    int int02 = 0;
    int int03 = 2147483647;

    long int longInt01 = -2147483648;
    long int longInt02 = 0;
    long int longInt03 = 2147483647;

    unsigned long int uLongInt01 = 123123;
    unsigned long int uLongInt02 = 0;
    unsigned long int uLongInt03 = 2147483647;

    // long long int longLongInt01 = -2147483648;
    // long long int longLongInt02 = 0;
    // long long int longLongInt03 = 2147483647;

    // unsigned long long int uLongLongInt01 = 1231231;
    // unsigned long long int uLongLongInt02 = 0;
    // unsigned long long int uLongLongInt03 = 2147483647;

    signed char sChar01 = -100;
    signed char sChar02 = 0;
    signed char sChar03 = 100;

    unsigned char uChar01 = 12;
    unsigned char uChar02 = 0;
    unsigned char uChar03 = 121;

    float float01 = -1.0f;
    float float02 = 2.5f;
    float float03 = 2.2f;

    double double01 = -2147483648;
    double double02 = 0;
    double double03 = 2147483647;

    long double longDouble01 = -2147483648;
    long double longDouble02 = 0;
    long double longDouble03 = 2147483647;            
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(shortInt01);
    ignoreUnused(shortInt02);
    ignoreUnused(shortInt03);
    ignoreUnused(uShortInt01);
    ignoreUnused(uShortInt02);
    ignoreUnused(uShortInt03);
    ignoreUnused(uInt01);
    ignoreUnused(uInt02);
    ignoreUnused(uInt03);
    ignoreUnused(int01);
    ignoreUnused(int02);
    ignoreUnused(int03);
    ignoreUnused(longInt01);
    ignoreUnused(longInt02);
    ignoreUnused(longInt03);
    ignoreUnused(uLongInt01);
    ignoreUnused(uLongInt02);
    ignoreUnused(uLongInt03);
    // ignoreUnused(longLongInt01);
    // ignoreUnused(longLongInt02);
    // ignoreUnused(longLongInt03);
    // ignoreUnused(uLongLongInt01);
    // ignoreUnused(uLongLongInt02);
    // ignoreUnused(uLongLongInt03);
    ignoreUnused(sChar01);
    ignoreUnused(sChar02);
    ignoreUnused(sChar03);
    ignoreUnused(uChar01);
    ignoreUnused(uChar02);
    ignoreUnused(uChar03);
    ignoreUnused(float01);
    ignoreUnused(float02);
    ignoreUnused(float03);
    ignoreUnused(double01);
    ignoreUnused(double02);
    ignoreUnused(double03);
    ignoreUnused(longDouble01);
    ignoreUnused(longDouble02);
    ignoreUnused(longDouble03);
    
    
    
        


}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float triangleArea(float base = 1.0f, float height = 5.0f)
{ 
    ignoreUnused(base, height);
    return {}; 
}  

/*
 2)
 */
float minutesToHours(int minute = 60)
{ 
    ignoreUnused(minute);
    return {}; 
}  

/*
 3)
 */
int countZeros(float number = 10000.0f)
{ 
    ignoreUnused(number);
    return {}; 
}   

/*
 4)
 */
bool isZero(long number = 20)
{ 
    ignoreUnused(number);
    return {}; 
}  

/*
 5)
 */
int findMax(int firstNum, int secondNum, int thirdNum)
{ 
    ignoreUnused(firstNum,secondNum,thirdNum);
    return {}; 
}   

/*
 6)
 */
int measureDistance(int steps, float stepSize)
{ 
    ignoreUnused(steps, stepSize);
    return {}; 
} 


/*
 7)
 */
bool isLargerThanZero(double myDoubleNum)
{ 
    ignoreUnused(myDoubleNum);
    return {}; 
} 


/*
 8)
 */
void startCounter(int initVal = 0)
{ 
    ignoreUnused(initVal);
}  

/*
 9)
 */
void stopCounting(bool stopFlag = false)
{ 
    ignoreUnused(stopFlag);
}  

/*
 10)
 */
 void playAudioForNSeconds(int seconds = 1)
{ 
    ignoreUnused(seconds);
} 

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    triangleArea(2.0f, 3.0f);
    
    //2)
    minutesToHours(10);
    
    //3)
    countZeros(100000.0f);
    
    //4)
    isZero(1);
    
    //5)
    findMax(2, 3, 4);
    
    //6)
    measureDistance(10, 0.3f);
    
    //7)
    isLargerThanZero(0.0001);
    
    //8)
    startCounter(1);
    
    //9)
    stopCounting(true);
    
    //10)
    playAudioForNSeconds(10);

    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
