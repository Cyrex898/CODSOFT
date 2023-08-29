#include <iostream>                    //<--- I/o header library file
#include <cstdlib>                     //<--- rand()/srand() is defined in this library
#include <time.h>                      //<--- Inorder to seed the rand()

using namespace std;

int main() {

      srand(time(0));                  //<--- Supplying rand() diffrent seed value every time 

      int num, tries = 0, guessnum;
      num = (rand() % 100 ) + 1;       //<--- (rand()% 100) ==> Gives us a number between 0-99, adding 1 makes is 0-100 random number

      do {
            cout << "Enter your estimate: ";    
            cin >> guessnum;           //<--- Getting user's input

            tries++;                   //<<--- Incrementing number of tries 

            if (guessnum < num){       //<--- If guessed number is smaller

                  cout << "Your estimate is less, than the secret number" << endl;
            }
            else if (guessnum > num){  //<--- If guessed number is bigger

                  cout << "Your estimate is more, than the secret number" << endl;
            }         
            else{
                  cout <<"Your Won!!!"<<" You guessed the number in " << tries << " tries"<< endl; // If the guess is neither samller not bigger than the num it must be equal  
            }
      } while (guessnum != num);

      return 0;
}