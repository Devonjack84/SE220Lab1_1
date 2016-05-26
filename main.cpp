#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
using namespace std;
using std::setw;

void courseAverage (int* ,int); //Funtion Prototype




int main(int argc, char** argv) 
{
	int UserValues [2] [2]; // Creates a 2*2 matrix or a 2d array
	vector<int> grade;

	
	
	
	
	for (int r = 0; r < 2; r++) // This loops on the rows(r)
	{
		for (int c = 0; c <2; c++) // This loops on the columns (c)
		{
		
	
			do
			{
				cout << "Please Enter 4 Grade Values Between 1 and 100 " << endl;
				cin >>UserValues [r] [c];
				if(cin.fail())
				{
					cout << "Numbers, you idiot!" << endl;
					cin.clear();//Clears the current input from the buffer
					cin.sync(); // If the User inputs a number it will take it out of the loop
				}
				else if(UserValues[r] [c] < 1)
				{
					cout << "Number is too low! " << endl;
					
				}
				
				else if (UserValues[r] [c] > 100)
				{
					
					cout << "Number is too high! " << endl;
					
				}
			
			
			
			}while ((UserValues [r] [c] < 1 )|| (UserValues [r] [c] > 100));
			
		//	grade [r] [c] = UserValues; // assign good values to elements
			
		
		
		} // End colums 
		
	} // End rows
	
	cout << endl; // Space between my code
	
//	vector <int> grade; // creates the vector
	
	
	
	for (auto &subArr: UserValues) /* This loops on the rows(r)   subArr - one dimensial array froem the 
										rows of user values*/
	
	{									
	
		for (int c : subArr) // This loops on the columns (c) from subArr
		{
			
			cout << c << " "; // This outputs the Users inputs 
		
		
			grade.push_back(c); // This Calls the vector
			
			
			
			
		} // End For 
		
		cout << endl;
		
		
		
		
	
		
		
	} //End For
	
		cout << "Size of vector grade is:  " << grade.size() << endl;
		
		
		
		int counterA = 0;
		
		int counterB = 0;
		
		int counterC = 0;
		
		int counterD = 0;
		
		int counterF = 0;
		
		 for(int i: grade )
		 {
			 	
				 
			switch (i)
			{
				case 100:
				case 99:
				case 98:
				case 97:
				case 96:
				case 95:
				case 94:
				case 93:
				case 92:
				case 91:
				case 90:
				counterA += 1;	
				break;
				
				case 89:
				case 88:
				case 87:	
				case 86:
				case 85:	
				case 84:
				case 83:
				case 82:
				case 81:
				case 80:
				counterB += 1;
				break;
				
				case 79:
				case 78:
				case 77:	
				case 76:
				case 75:	
				case 74:
				case 73:
				case 72:
				case 71:
				case 70:
				counterC += 1;
				break;
				
				
				case 69:
				case 68:
				case 67:	
				case 66:
				case 65:	
				case 64:
				case 63:
				case 62:
				case 61:
				case 60:
				counterD += 1;
				break;
				
				default:
					counterF += 1;
				break;	
					
				
			} // End of Switch
			
		 } // End Range based Loop	
			
			
			
			//Output Counters
			
			
			cout << "Number of A(s):  " << counterA << endl;
			cout << "Number of B(s):  " << counterB << endl;
			cout << "Number of C(s):  " << counterC << endl;
			cout << "Number of D(s):  " << counterD << endl;
			cout << "Number of F(s):  " << counterF << endl;
			
			
			courseAverage(&grade[0], grade.size());  // Calls my function
			
			int s; //Catch - all
			cin >> s;
			
	return 0; // return 0 -- all good
	
} // End Main program


void courseAverage(int*inc , int total) // function to find Average
{
	int average = 0;
	
	
	for(int i = 0; i <total ;i++ ) // Add up the Vector Elements
	{
		
		average += inc[i]; // Add to running total
		
	} // End of For
	
	
	average/= total; //divide by total
	
	
	cout << endl << "Your Average for the course in :   " << average;
	
	





} // End of Void










