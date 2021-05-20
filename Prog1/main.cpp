//
//  main.cpp
//  Prog1
//
//  Created by Joe Ortiz on 5/20/21.
//
//This program simulates a gambling guessing game
//The user guesses a number between 1 and 10 and bets a certain amount

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void Game_Rules();
void play_again(char str);
void game();


int main(int argc, const char * argv[]) {
    
    Game_Rules();
    game();
    

    return 0;
}


void Game_Rules()
{
    
    cout<<"Guess a number between 1 and 10"<<endl;
    cout << "If you guess correctly you get the amount you gambled" <<endl;
    cout<< "If you guess incorrectly you lose the money you gambled" << endl;
    cout << "Have a good time and good luck :)" <<endl;
    
    
    
}


void game()
{
    
    
    int betting_amount;
    
    int balance;
    
    char str;
    
    cout << "Enter the balance you have $:"<<endl;
    cin >>balance;
    
    int num_guess;
    
    cout<<"Enter betting amount $" <<endl;
    cin >>betting_amount;
    
    cout<<"Please select a number between 1 and 10" <<endl;
    cin >> num_guess;

    
    int prize;
    
    
    srand(time(0));
    
    int num_gen = rand()%10 +1;
    
    while(num_guess<=1 || num_guess>=10)
    {
        
        cout << "Please re enter your guess" <<endl;
        cin >> num_guess;
            
       
        
    }
        
        num_gen = rand()%10;
                
       
          
      
        
        if(num_guess == num_gen)
        {
            
            prize = betting_amount + balance;
            cout<<"You're going to put the house of buisness"<<endl;
            cout<<"The winning number is " <<num_gen<<endl;
            cout<< "Your prize is " << prize;

            
            
        }
        
        
        if(num_guess!= num_gen)
        {
            cout<<"The winning number is " <<num_gen<<endl;
            balance = balance-betting_amount;
            cout<< "Better luck next time"<< " " << "Your balance is: " << balance << endl;
            
            
            
            
        }
          
    
    if(balance>0)
    {
        
        
        cout << "Do you want to play again? (y/n)" <<endl;
        cin>> str;
        play_again(str);
        
              

        
    }
         
        
    
  
    
    
    
}


void play_again(char str)
{
    
    
    if(str == 'Y' || str== 'y')
    {
        
        game();
        
        
    }
    
    
}
