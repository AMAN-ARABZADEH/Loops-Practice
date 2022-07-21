#include <iostream>
#include <vector>
#include <conio.h>  // for use of getche() 
#include <iomanip> // use of setw()
using namespace std;


int main(){
    std::cout << "Enter how many: ";
    size_t size;
    std::cin >> size;
    unsigned long long fact{1};
    for(int i = size; i>0; --i){
     fact *= i;
    }
    unsigned long long facts{1};
    std::cout << "Fact is; " << fact << std::endl;
    int j = size;
    while(j > 0){
     facts *= j;
     --j;
    }
    std::cout << "Fact is; " << facts << std::endl;
    unsigned long long fac{1};
    size_t k=size;
    do{
      fac*=k;
      k--;
    } while (k > 0);
    std::cout << "Fact is; " << fac << std::endl;
    int pow=1; //power initially 1
    int numb=1; //numb goes from 1 to ???
    while( pow<10000 ) { //loop while power <= 4 digits{
      std::cout << setw(2) << numb; //display number
      std::cout << setw(5) << pow << endl; //display fourth power
      ++numb; //get ready for next power
      pow = numb*numb*numb*numb; //calculate fourth power
    }




     unsigned long  limit{0}; 
    std::cout << "How many: ";
    std::cin >> limit;
   if(limit > 20){
    return -1;
   }
    unsigned long first{0}; // firs to last term
    unsigned long next{1}; // next term







   std::cout << first << " ";

    while(limit> 1){ // don'rt let result to get too big

      std::cout << next << " ";
      long sum = first + next;
      first = next;
      next = sum;
      limit--;
    }

    std::cout << endl;







    // It then calculates the quotient (the answer) and
    // the remainder, using the / and % operators,
    //  and prints out the result.

    long long int dividend{0}, divisor{0};
    char ch;
    do //start of do loop
    { //do some processing
    cout << "Enter dividend:"; cin >> dividend;
    cout << "Enter divisor: "; cin >> divisor;
    cout << "Quotient is: "  << dividend / divisor;
    cout << ", remainder is " << dividend % divisor;
    cout << "\nDo another? (y/n): "; //do it again?
    cin >> ch;
    }
    while( ch != 'n' ); //loop condition






    // Check if number is prime

    unsigned long int i,number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    bool cond{false};
    for(i = 2; i <= number/2; i++){
     if(number % i == 0){
      std::cout << "It is not a prime: divisible by: " << i << std::endl;
      cond = true; // just for breaking out and using in second if statement out of loop
     }
    }
    if(!cond){
     std::cout << "It is a prime: " << number << std::endl;
    }


    // in this program we // count characters and words typed in


    size_t char_count{0};
    size_t word_count{1};
    char chars;

    std::cout << "Enter a word or more to count:  ";
    while((chars = getche()) != '\r'){ // getche reads a single character from keyboard.
      if(chars == ' '){
        word_count++;
      }else{
       char_count++;
      }
    }

    std::cout << "\nWords:     " << word_count << std::endl;
    std::cout << "There are:  " << char_count << " letters." << std::endl;




// An advanture program

// Time to play a game

    char dir ='a';
    int x=10, y=10;
    while( dir != '\r' && dir != 'q'){
       cout << "\nYour location is " << x << ", " << y;
       cout << "\nEnter direction (n, s, e, w): q to quit:  ";
       std::cin >> dir;
       switch(dir){
       case 'n': y--; break; //go north
       case 's': y++; break; //go south
       case 'e': x++; break; //go east
       case 'w': x--; break; //go west
       case 'q': cout << "goodbye!" << std::endl; break;
       case '\r': cout << "Exiting\n"; break; //Enter key
       default: cout << "Try again\n"; //unknown char
    } //end switch
      if(x == 6 && y == 11){
       std::cout << "\nCongrats!!!\nYou found the treasure!" << std::endl;
       break;
      }
    } //end while



// simple for loop using if 

for(size_t i = 0; i < 1000; i++){
  char let = (i%5) ? ' ' : 'x';
  std::cout << let;

}
/*
  There are three logical operators in C++:
  Operator Effect
    &&  Logical AND
    ||  Logical OR
    !   Logical NOT

==============================================================================

  Operator type       Operators                        Precedence

  Unary                !, ++, ––, +, –                   Highest

  Arithmetic            Multiplicative *, /, %

  Additive              +, –

  Relational            Inequality <, >, <=, >=
                        Equality  ==, !=

  Logical               And && Or ||
  Conditional            ?:
  Assignment             =, +=, –=, *=, /=, %=            Lowest

*/

const unsigned char WHITE = 219; //solid color (primes)
const unsigned char GRAY = 176; //gray (non primes)
unsigned char cha;
//for each screen position
for(int count=0; count< 4000; count++){
  cha = WHITE; //assume it’s prime

  for(int j=2; j<count; j++) //divide by every integer from
    if(count%j == 0){ //2 on up; if remainder is 0,

      cha = GRAY; //it’s not prime
      break; //break out of inner loop
    }
    cout << cha; //display the character
}
 getch(); //freeze screen until keypress


 size_t times{0};
 std::cout << "How many rows of pyramids: ";
 std::cin >> times;
 size_t l = times;
  for(int i = 0; i < l; i++){
    for(int j = 0; j < times; j++){
        std::cout << " ";
    }
    for(int k = 0; k < (2*i)-1;k++){
     std::cout << "X";
    }
    std::cout << endl;
    times--;
  }

  
 return 0;
}