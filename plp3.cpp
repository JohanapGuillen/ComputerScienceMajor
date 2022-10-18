#include <iostream>

int main(){
    std:: cout << "Let's compare some numbers.\n";
    std:: cout << "Which value is greater?\nChoose the first value\n";
    int x;
    std:: cin >> x;
    std:: cout << "Choose a second value\n";
    int y;
    std:: cin >> y;
    
    if(x > y){
        std:: cout << x << " is greater than " << y << "\n";
    }
    else{
        std:: cout << y << " is greater than " << x << "\n";
    }

    if(x >= 0 && y >= 0){
        std:: cout << "Both of the values are greater than or equal to 0\n";
    }
    else{
        std:: cout << "One of the values is not greater than or equal to 0, it is a negative number.\n";
    }
    
    int listOfValues[2] = {x , y};
    for(int i = 0; i < 2; i++){
        if(listOfValues[i] > 0){
            std:: cout << listOfValues[i] << " is greater, than 0.\n";
        }
        else{
            if(listOfValues[i] == 0)
            {
            std:: cout << listOfValues[i] << " is equal, to zero.\n";
            }
            else
            {
            std:: cout << listOfValues[i] << " is less, than 0.\n";
            }
        }
    }

    if(x > 0 || x < 0){
        std:: cout << "This condition is short-circuiting because the second expression is false if the first expression\nis true, but all that is needed for an OR(||) statement to be true, is one true value.\n";
    }

    if(x < 0 && x >= 0){
        std:: cout << "This condition is short-circuiting because the first expression is false so the entire statement\n is already false without having to read through the entire statement.\n";
    }

    std:: cout << "Let's classify your grade.\n";

    char grade = 'C';
    switch(grade){
        case 'A':
            std:: cout << "You earned an A, Excellent!";
            break;
        case 'B':
            std:: cout << "You earned a B, Good job";
            break;
        case 'C':
            std:: cout << "You earned a C, not bad";
            break;
        case 'D':
            std:: cout << "You earned a D, that's a PASS";
            break;
        case 'F':
            std:: cout << "You got an F, try again. Don't get discouraged, just keep trying.";
            break;
    }

}