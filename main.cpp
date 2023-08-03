#include <iostream>
#include <string>
// This program prompts the user for currency conversions. The current conversions are US Dollar, EURO, and CAN.

// current current variables
int currentCurrencySelection; 
double exchangeAmount; 
std::string currencyStr;
// desired currency variables
int newCurrencySelection; 
std::string newCurrencyStr;
float convertedAmount;

int input () {
    std::cout << "Please choose currency from the list below: \n";
    std::cout << "1) US Dollar ";
    std::cout << "2) Euros ";
    std::cout << "3) Canadian Dollar \n";
}

void selection () {
    switch (currentCurrencySelection) {
        case 1:
            currencyStr = "US Dollar";
            break;
        case 2:
            currencyStr = "Euro";
        break;
        case 3:
            currencyStr = "Canadian Dollar";
        break;
    }
}

void amount(){
    std::cout << "How much currency will you exchange? \n";
    std::cin >> exchangeAmount;
}

void nextSelection () {
    switch (newCurrencySelection) {
        case 1:
            newCurrencyStr = "US Dollar";
            break;
        case 2:
            newCurrencyStr = "Euro";
            break;
        case 3:
            newCurrencyStr = "Canadian Dollar";
            break;
    }
}

float conversion() {
    if (currencyStr=="US Dollar" && newCurrencyStr=="Euro") {
        convertedAmount = exchangeAmount * .9;
    }
   if (currencyStr.compare("US Dollar") & newCurrencyStr.compare("Canadian Dollar")) {
        convertedAmount = exchangeAmount * 1.32;
    }
   if (currencyStr.compare("Euro") & newCurrencyStr.compare("Canadian Dollar")) {
        convertedAmount = exchangeAmount * 1.46;
    }
   if (currencyStr == "Euro" && newCurrencyStr== "US Dollar") {
        convertedAmount = exchangeAmount / .9;
    }
   if (currencyStr =="Canadian Dollar" && newCurrencyStr=="US Dollar") {
        convertedAmount = exchangeAmount / 1.32;
    }
  if (currencyStr =="Canadian Dollar" && newCurrencyStr == "Euro"  ) {
        convertedAmount = exchangeAmount / .68;
    }
    std::cout << exchangeAmount <<" "<<currencyStr <<" converts to " << convertedAmount << " "<< newCurrencyStr;;
}

int main() {
    input();
    std::cin >> currentCurrencySelection;
    selection();
    amount();
    input();
    std::cin >> newCurrencySelection;
    nextSelection();
    conversion();
    return 0;
}
