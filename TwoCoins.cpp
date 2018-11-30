#include <iostream>

using namespace std;

double selectAndFlip(int flips)
{
  int heads = 0; //amount of times the fair coin landed on heads (which would reveal tails on the other side)
  int tails = 0; //amount of times the fair coin landed on tails

  for(int x = 0; x < flips; x++)
  {
    //randomly select a coin
    if(rand() % 2) //fair coin selected
    {
      if(rand() % 2) //fair coin landed on heads
        heads++;
      else //fair coin landed on tails (not allowed)
        tails++;
    }
  }
  
  return (double)heads/(flips-tails); //the amount of times tails was on the other side divided by the amount of valid flips
}


int main()
{
  srand(time(NULL));

  int flips = 5000;

  cout << "Tails was on the other side " << selectAndFlip(flips) * 100 << "% of the time.\n";

  return 0;
}
