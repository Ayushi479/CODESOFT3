#include<iostream>
#include<string>
using namespace std;
main()
{   
    char again='y';
    while(again=='y'||again=='Y')
    {
	char gameboard[3][3]={
	{' ',' ',' '},
	{' ',' ',' '},
	{' ',' ',' '} 
};
char p1='X';
char p2='O';
char p=p1;
char w=' ';
int r=-1,c=-1;

for(int i=0;i<9;i++)
{
cout<< "   |   |   " << endl;
cout<< " "<<gameboard[0][0]<<" | "<<gameboard[0][1]<<" | "<<gameboard[0][2]<<endl;
cout<< "___|___|___" << endl;
cout<< "   |   |   " << endl;
cout<< " "<<gameboard[1][0]<<" | "<<gameboard[1][1]<<" | "<<gameboard[1][2]<<endl;
cout<< "___|___|___" << endl;
cout<< "   |   |   " << endl;
cout<< " "<<gameboard[2][0]<<" | "<<gameboard[2][1]<<" | "<<gameboard[2][2]<<endl;
cout<< "   |   |   " << endl;

if(w!=' ')
{
	break;
}

cout<<"Current player is:"<<p<<endl;
while(true)
{
cout<<"Enter row and column number(from 0 to 2):"<<endl;
cin>>r>>c;
if(r<0||r>2||c<0||c>2)
{
	cout<<"Invalid"<<endl;
}
else if(gameboard[r][c]!=' ')
{
	cout<<"It is full"<<endl;
}
else
{
	break;
}
r=-1;
c=-1;
}
gameboard[r][c]=p;

if(p==p1)
{
	p=p2;
}
else
{
	p=p1;
}
for(int r=0;r<3;r++)
{
	if(gameboard[r][0]!=' '&& gameboard[r][0]==gameboard[r][1] && gameboard[r][1]==gameboard[r][2])
	{
		w=gameboard[r][0];
		break;
	}
}
for(int c=0;c<3;c++)
{
	if(gameboard[0][c]!=' '&& gameboard[0][c]==gameboard[1][c] && gameboard[1][c]==gameboard[2][c])
	{
		w=gameboard[0][c];
		break;
	}
}
if(gameboard[0][0]!=' '&& gameboard[0][0]==gameboard[1][1] && gameboard[1][1]==gameboard[2][2])
 {
 	w=gameboard[0][0];
 }
 else if(gameboard[0][2]!=' '&& gameboard[0][2]==gameboard[1][1] && gameboard[1][1]==gameboard[2][0])
 {
 	w=gameboard[0][2];
 }
}
if(w!=' ')
{
	cout<<"Player "<<w<<" is the winner"<<endl;
}
else
{
	cout<<"Tie"<<endl;
}

cout<<"Do you want to play again?(y/n):";
cin>>again;
}

}
