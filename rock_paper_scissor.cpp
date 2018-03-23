#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int Randnum;
int Rand;
string Choice1;
string Choice2;

int main (){
//First person Selection
srand(static_cast<unsigned int >(time(0)));
Randnum = (rand() % 2);
if (Randnum == 0)
{
   Choice1 = "Scissors";
}
else if (Randnum == 1)
{
   Choice1 = "Paper";
}
else if (Randnum == 2)
{
   Choice1 = "Rock";
}
//Second Person Selection 
Rand = (rand() % 2);
if (Rand == 0)
{
   Choice2 = "Scissors";
}
else if (Rand == 1)
{
   Choice2  = "Paper";
}
else if (Rand == 2)
{
   Choice2 = "Rock";
}
cout << "First person chose "<<Choice1 <<endl;
cout <<"Second person chose "<<Choice2 <<endl;
if(Choice1 == "Scissors" && Choice2 == "Paper"){
   cout<<"First player wins" <<endl;
}
else if(Choice1 == "Paper" && Choice2 == "Scissors"){
   cout<<"Second player wins" <<endl;
}
else if(Choice1 == "Paper" && Choice2 == "Rock"){
   cout<<"First player wins" <<endl;
}
else if(Choice1 == "Rock" && Choice2 == "Paper"){
   cout<<"Second player wins" <<endl;
}
else if(Choice1 == "Rock" && Choice2 == "Scissors"){
   cout<<"first player wins" <<endl;
}
else if(Choice1 == "Scissors" && Choice2 == "Rock"){
   cout<<"Second player wins" <<endl;
}
else if(Choice1 == Choice2){
   cout<<"Its a draw" <<endl;
}
return 0; 
}
