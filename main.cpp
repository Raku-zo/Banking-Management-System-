#include <iostream>
#include <iomanip>
using namespace std;
void showBalance(double balance);

double deposit();

double withdraw(double balance);

int main(){

    double balance = 0;

    int choice = 0;
    int pin;
    
    cout << "Enter PIN number: ";
    cin >> pin;
    cout << " " << endl;
    cout << " " << endl;
    
    do{

        cout << "      ***************************" << endl;
        cout << "           Banking Management" << endl;
        cout << "      ***************************" << endl;
        cout << "            1. Show Balance" << endl;
        cout << "            2. Deposit " << endl;
        cout << "            3. Withdraw " << endl;
        cout << "            4. Exit" << endl;
        cout << " " << endl;
        
        cin >> choice;



        cin.clear(); 

        fflush(stdin);



        switch(choice){

            case 1: showBalance(balance);

                    break;

            case 2: balance += deposit();

                    showBalance(balance);

                    break;

            case 3: balance -= withdraw(balance);

                    showBalance(balance);

                    break;

            case 4: cout << "Thanks for visiting!\n";

                    break;

            default: cout << "Invalid choice\n";

        }

    }while(choice != 4);

    return 0;

}

void showBalance(double balance){

    cout << "Your balance is: ₱"<< setprecision(2) << fixed << balance << '\n';

}

double deposit(){

    double amount = 0;

    printf("Enter amount to be deposited: ");

    cin >> amount;

    if(amount > 0){

        return amount;

    }

    else{

        printf("That's not a valid amount:");

        return 0;

    }

}

double withdraw(double balance){



    double amount = 0;



    printf("Enter amount to be withdrawn: ");

    cin >> amount;



    if(amount > balance){

        printf("insufficient funds");

        return 0;

    }

    else if(amount < 0){

        printf("That's not a valid amount");

        return 0;

    }

    else{

        return amount;

    }

}  
