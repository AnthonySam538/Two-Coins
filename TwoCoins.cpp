#include <iostream>

using namespace std;

double selectAndFlip(int flips)
{
  int tails; //amount of times tails was on the other side
  //int valid; //amount of valid flips
  
  for(int x = 0; x < flips; x++)
  {
    //randomly select a coin
    if(rand() % 2)
    {
      //flip the fair coin
      if(rand() % 2 == 1) //landed on heads
        tails += 1; //tails is on the other side
      else //landed on tails, which is not allowed
        flips -= 1; //subtract 1 since it wasn't a valid flip
    }
  }
  return tails/flips;
}


int main()
{
  srand(time(NULL));
  
  int flips = 100;
  
  cout << selectAndFlip(flips);
  
  return 0;
}
