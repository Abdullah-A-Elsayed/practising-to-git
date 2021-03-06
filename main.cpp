#include <iostream>
#include <string>
#include <fstream>
#include "matrix.h"
#include <map>
#include <algorithm>
#include <ctype.h>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	cout.precision(3);
	cout<<fixed; //only 3 digits after decimal point
if(argc < 2){//no file passed to the program
		/***********************************taking commands***************************************/
		cout<<"Enter your commands ..."<<endl<<endl; 
		string command;
		map<const string, matrix> matrices;
		string prev_command = "";
		while(1){
			getline(cin,command);
			matrix::remove_back_slashes(command);
			try{
				if(prev_command!=""){ //waiting for closing brackets
					if(command.find('=')==-1) command = prev_command+command;//no new variables
					else{//new variable
						//mismatch number of brackets
						cout<<"mismatch number of brackets\n\n"<<endl;
					}
				}
				if(matrix::is_complete_brack(command)){//whole command is complete
					prev_command="";
					matrix::run_adv_command(command,matrices);
				}
				else{//whole command is incomplete
					prev_command=command;
					continue;
				}
			}
			catch(string e){ cout<<e<<endl;}
		}
		/*************************************testing area***************************************/
	//string u = "C =    [    [B [3.4   ; 2.1    ; 3.5+9.1]] 1.2^3 3+1.2 15/(2.1+10*sin(0.12)) ,  1.2]";
	//matrix::trim_before_fill(u);
	//cout<<"*"<<u<<"*"<<endl;
	//try{
	//	matrix a = matrix(" 9 ; 1 ");
	//	a.print_matrix();
	//}
	//catch(string e){cout<<e<<endl;}
	/*--------------------------------------end of testing area------------------------------*/
}
else{ // passing file as a command argument
	string fpath = argv[1]; //file name
	//matrix::run(fpath); //phase1 function
	matrix::run_adv(fpath);
}
	//system ("pause");
	return 0;
}
