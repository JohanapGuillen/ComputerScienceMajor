#include <iostream>
#include <String>

int product(double b, double c){
    std:: cout << "Let's multiply!\n";
    double r = b * c;
    return(r);

}

int sum(int d){
    if(d > 0){
        return d +sum(d - 1);
    }
    else{
        return 0;
    }
}

void printString(std::string str){
    std::string firstHalf = "";
    std::string secondHalf = "";
    
    for(int i = 0; i < str.length(); i++){
        if(i < str.length()/2){  
            firstHalf = firstHalf + str[i];   
        }
        else{
            secondHalf = secondHalf + str[i]; 
        }
        
    }
    std:: cout << "The first half of the string is: " << firstHalf << "\n" << "The second half of the string is: " << secondHalf;
}


int main(){

    std:: cout << "for loop skipping by 2's \n";
    for(int i = 2; i <= 10; i+=2){
        std:: cout << i << "\n";
    }

    int x = 1;
    std:: cout << "while loop adding 1 to x \n";
    while(x < 5){
        std:: cout << x << " + 1 = " <<  x + 1 << "\n";
        x++;
    }

    int y = 1;
    std:: cout << "do loop adding 1 to y \n";
    do{
        std:: cout << y << " + 1 = " << y + 1 << "\n";
        y++;
    } while(y < 5);

    std:: cout << "foreach loop traverse array, using data type \n";
    int array[5] = {1,2,3,4,5};
    for(int a : array)
        std:: cout << a << " ";

    double b;
    std:: cout << "\nLet's call our multiplication function.\nChoose the first value to multiply.\n";
    std:: cin >> b;

    double c;
    std:: cout << "Choose a second value to multiply.\n";
    std:: cin >> c;

    double result;
    result = product(b, c);
    std:: cout << b << " * "<< c << " = " << result <<"\n";

    std:: cout << "Let's call our Recursive function. \nThis function finds the sum counting from 1 to 5.\n";
    //int theSum = sum(5); 
    for(int i = 1; i < 5; i ++){
        std:: cout << i << " + " << sum(i) << " = " << i + sum(i) <<"\n";
    }
    std:: cout << "The sum of all the values is " << sum(5);
    
    std:: cout << "\nLet's call a function with a string parameter. We'll be splitting that string into 2 separate strings.\n";
    std::string str;
    std:: cout << "Enter a word.\n";
    std:: cin >> str;
    printString(str);

    
}

