/*Enum example*/

#include <iostream>

using namespace std;

int main()
{
    //define MONTH as having 12 possible values  -- also, enum variables should be singular by convention
    enum MONTH {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTH bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}




// Using <iomanip> to set width ( setw() )

 #include <iomanip>

int main() {

std::cout<<"\n\nThe text without any formating\n";
std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
std::cout<<"\nThe text with setw(15)\n";
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
std::cout<<"\n\nThe text with tabs\n";
std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";

}



/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    
    std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
    std::cout<<a<<std::setw(15)<<b<<std::setw(15)<<c<< "\n";
    std::cout<<aa<<std::setw(15)<<bb<<std::setw(15)<<cc<< "\n";
    std::cout<<aaa<<std::setw(15)<<bbb<<std::setw(15)<<ccc<< "\n";

    
    return 0;
}


// Ints         Floats        Doubles
// 45         45.323        45.5468
// 54         54.323        54.5468
// 63         63.323        63.5468



/*This program accepts inputs from the input.txt file*/ 

#include <iostream>
#include <string>


int main()
{
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user
    std::cout<<"What year is your favorite? ";
    
    //get the user response and assign it to the variable year
    std::cin >> year;
    
    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";
    
    //get the user response and assign it to the variable age
    std::cin >> age;
    
    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!\n";
    
    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"Hello "<<name<<" !\n";
    return 0;
}



// What year is your favorite? How interesting, your favorite year is 1991!
// At what age did you learn to ride a bike? How interesting you learned to ride at 5!
// What is your name? Hello 'Hi, !







#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";
  
    //create an input stream to write to the file
    ifstream myfileO ("input.txt");
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }
    
    else cout << "Unable to open file for reading";
    
    return 0;
}



// Read and write to this file. 

// What am I doing here?

// This is not a good example of a file


// I am adding a line.
// I am adding another line.