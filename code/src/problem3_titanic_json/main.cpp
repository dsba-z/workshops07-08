////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 3: Titanic.
/// \author     Georgii Zhulikov
/// \version    0.1.0
/// \date       09.02.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Workshop 9
/// 
/// 10) Create a program that converts a line of titanic.csv to json format and outputs it as a file.
/// 
/// The program should do the following:
///    1. Take the ID of a Titanic passenger - integer number from 1 to 891 from standard input.
///    2. Read data on this passenger from titanic.csv as a set of variables.
///    3. Create a file passenger_***.json where *** is the ID of the passenger.
///    4. Store all data about a passenger in that file in JSON format (https://en.wikipedia.org/wiki/JSON)
///    5. Wrap output data in quotation marks if the data is a string.
///    
///    Use three functions:
///    one to read data on a particular passenger from an input stream,
///    one to read a single line of data from an input stream, split it at commas as delimiters
///    and output it as a vector.
///    one to output data to an output stream.
///   
/// 11) Convert the whole file titanic.csv into titanic.json. Use array notation in JSON.
///     Store data as vector of vectors of strings.
///    {
///        "titanic" : [
///            {
///                data on passenger 1,
///            },
///            {
///                data on passenger 2,
///            }
///           ...
///    }
/// 
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


typedef std::vector<std::string> VecStrings;


int main ()
{
    // Change "/" in path to "\\" if you are using Windows
    const std::string INP_FILE_NAME = "../../data/problem2_titanic/titanic.csv";
    std::ifstream inputFile;
    inputFile.open(INP_FILE_NAME);
    

}
