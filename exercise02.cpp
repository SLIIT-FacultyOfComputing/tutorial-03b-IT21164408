#include <iostream>
using namespace std;

int volume(int height, int width, int length); //declare the function

int main() 
{
    int box1Height, box1Width, box1Length; //declare variables
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : "; //getting user inputs
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length); //calculation
             
    cout << endl << "Volume of Box is " << totalVolume << endl; //printing the output
    
    return 0;
}

// Implement the Volume() function here
int volume(int height, int width, int length)
{
  return height * width * length ; //calculating th evolume
}