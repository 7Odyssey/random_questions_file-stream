#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;
 
 // Title: Strings and streams
 // Author: 7odyssey
 // Date: 4/8/2018

 
int main () {
   char data[88];

   // open a file in read mode.
   ifstream infile; 
   infile.open("questions.txt"); 
 
   cout << "Reading from the file" << endl;  

 cout << '\n';
 
   // write the data at the screen.
   
   // open a file in write mode.
   ofstream outfile;
   outfile.open("output2.txt");
   
   int lineNum = 0;
   int lineRand[10];
   for(int i=0; i<10; i++)
   {
   lineRand[i] = rand()%27;
   
}
   while(!infile.eof())
   {
   	lineNum = lineNum + 1;
   	
   	string newLine;
   	
   	   	getline(infile, newLine);
   	
   	if(lineNum == lineRand[0] || lineNum == lineRand[1] ||
	    lineNum == lineRand[2] || lineNum == lineRand[3] ||
		 lineNum == lineRand[4] || lineNum == lineRand[5] ||
		  lineNum == lineRand[6] || lineNum == lineRand[7] ||
		   lineNum == lineRand[8] || lineNum == lineRand[9]){
		   
		      	
   	outfile << newLine << endl;
   	
   	cout << newLine << endl;
   	
   	cout << "Enter your answer: "; 
		
		cin.getline(data, 100);
   	 
   // write inputted data into the file.
   outfile << data << endl;
    cout << '\n';
		   
		   }

 }
   // close the opened file.
   outfile.close();
   infile.close();
   // open a file in read mode. 
   infile.open("output2.txt"); 
 
 cout << '\n';
  cout << '\n';
 
   cout << "Reading from the file" << endl;  

   // write the data at the screen.
   
   while(!infile.fail()){
   	
   	string newLine;
   	getline(infile, newLine);
   	cout << newLine << endl;
   	 cout << '\n';
 }
   return 0;
}

