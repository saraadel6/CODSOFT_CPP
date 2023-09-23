

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "____Welcome to the Number Guessing Game____\n\n";
    srand(time(0));

    int target = rand()%100+1;
    int attempts=0,guess;
    do{
        cout<<"Guess a number from 1 to 100:\n";
        cin>>guess;
        attempts++;
        if(guess>target)
            cout<<"Too high!, Please try again.\n";

        else if(guess<target)
            cout<<"Too low! Please try again.\n";

        else{
            cout<<"Congratulations! You guessed the number successfully!\n";
            cout<<"You guessed the number "<<guess<<" in "<<attempts<<" attempts.\n";
        }
    }while(guess!=target);
}