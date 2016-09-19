#include <iostream>
using namespace std;

//function prototypes
void BubbleSort(int list[], int numElms);


int main()
{
	int iArray[10] = { 23, 78, 1, 90, 45, 16, 83, 61, 59, 39 };
	
	BubbleSort(iArray, 10);

	//dispay the contents of the array
	for (int x = 0; x <= 9; x++)
		cout << iArray[x] << endl;


	return 0;
}

void BubbleSort(int list[], int numElms)
{
	bool blSwap; //flag to store whether or not a swap occured

	//loop for number of elements
	for (int x = 0; x < numElms; x++)
	{
		blSwap = false; //reset the flag to false

		//loop through the array
		for (int y = 0; y < numElms - 1; y++) //loop to last index - 1
		{

			//compare current element ot next element
			// > for ascending (Least to Greatest)
			// < for descending (Greatest to Least)
			if (list[y] > list[y + 1])
			{
				int iSwap; //need a swap varaiable, must match array dataType

				iSwap = list[y]; //do the swap variable first

				list[y] = list[y + 1]; //1st index is safe, therefore safe to swap

				list[y + 1] = iSwap; //finally take swap variable and store in 2nd spot

				blSwap = true; //a swap happened, set the flag
			}

		}//end of the inner loop

		if (blSwap == false) //if swap never happened, array sorted
			break; //jump out of the outer loop

	} // end of the bubble sort

}
