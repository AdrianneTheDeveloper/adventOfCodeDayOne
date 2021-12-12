#include <iostream>
using namespace std;

int checkIncreases(int list[], int size);
int checkSumOfIncreases(int list1[], int size);

int main()
{
    // Declaring an array for sweep measurements
    int sweeps[2000];

    // Read in sweep measurements from the console
    cout << "Enter your numbers: " << endl;
    for (int i = 0; i < 2000; i++)
    {
        cin >> sweeps[i];
    }

    // Print result of checkSumOfIncreases to the console
    cout << checkSumOfIncreases(sweeps, 2000) << endl;
}

int checkIncreases(int list[], int size)
{
    // Delcare initial count of sweep increases
    int count = 0;

    // Loop through inputted list and check if list[i] is greater than the one before it
    for (int i = 1; i < size; i++)
    {
        if (list[i] > list[i - 1])
        {
            // If the condition is true add 1 to count
            count++;
        }
    }
    return count;
}

int checkSumOfIncreases(int list1[], int size)
{
    // Initial values
    // int count = 0;
    int temp = 0;

    // Declare an array that will hold the sums of the sweeos added
    int sweepSums[2000];

    for (int i = 0; i < 1998; i++)
    {
        // Add 3 succeeding values and place in temp
        temp = (list1[i] + list1[i + 1] + list1[i + 2]);

        // cout << "i: " << i << " " << list1[i] << " " << list1[i + 1] << " " << list1[i + 2] << endl;

        // Push those values into the array
        sweepSums[i] = temp;
    }

    // Run checkIncreases function on new array created
    return checkIncreases(sweepSums, 1998);
}