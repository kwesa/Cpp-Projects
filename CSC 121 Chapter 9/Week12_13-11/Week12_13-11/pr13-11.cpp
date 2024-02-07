//This program uses the write and read functions.
// ...but write to binary files and read from binary files.
#include <iostream> 
#include <fstream> // fstream  >> or <<, ifstream >>, ofstream <<

using namespace std;

int main() 
{
    // File object used to access file
    // file is the name of the stream
    // file stream is connecting to a file called "nums.dat"
    // ios::out means we are writing to nums.dat, << (SIO) operator
    // ios::binary means we are writing to a binary file, not txt fileA
    fstream file("nums.dat", ios::out | ios::binary);
    fstream file1("someChars.dat", ios::out | ios::binary);

    if (!file || !file1)
    {
        cout << "Error opening file.";
        return -1;
    }

    // Integer data to write to binary file
    const int SIZE = 5; 
    int buffer[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char buffer1[] = { 'H','e','l','l','o' };
    int size = sizeof(buffer) / sizeof(buffer[0]); // 40 / 4 = 10 elements in array 

    // Write the data and close the file
    cout << "Now writing the data to the file.\n";
    file1.write(reinterpret_cast<char*>(buffer1), SIZE);
    file.write(reinterpret_cast<char *>(buffer), sizeof(buffer)); // this is how you write to a binary file
    file1.close(); 
    file.close();

    // Open the file and use a binary read to read
    // contents of the file into an array
    file.open("nums.dat", ios::in);
    file1.open("someChars.dat", ios::in);
    if (!file||!file1) 
    {
        cout << "Error opening file.";
        return -2;
    }

    cout << "Now reading the data back into memory.\n";
    // read 40 bytes from binary file into a memory locations pointed to by buffer. 
    file1.read(reinterpret_cast<char*>(buffer1), SIZE);
    file.read(reinterpret_cast<char *>(buffer), sizeof(buffer));

    // Write out the array entries
    for (int count = 0; count < size; count++)
    {
        int buff[sizeof(buffer)];
        buff[count] = buffer[count];
        cout << buff[count] << " ";
    }
    cout << endl; 
    for (int i = 0; i < SIZE; i++)
    {
        char buff1[SIZE];
        buff1[i] = buffer1[i];
        cout << buff1[i] << " ";
    }

    // Close the file	
    file.close();
    file1.close(); 
    return 0;
}