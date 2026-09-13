// Estimates pi by placing random points on a square
// with an area of 1 and counting the number of
// points inside the circle's quarter arc.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int motorCap = 12, motorCount, packageWeight, totalCap;
  printf("How many motors are carrying the package? ");
  scanf("%d", &motorCount);

  totalCap = motorCap * motorCount;
  printf("How many kg of package do we expect? ");
  scanf("%d", &packageWeight);

  if (totalCap >= packageWeight) {
    printf("Yes! The conveyor belt can carry the packages.");
  } else {
    printf("No. The conveyor belt cannot carry the packages.");
  }
  
}