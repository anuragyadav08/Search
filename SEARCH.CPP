
#include <iostream>

using namespace std;

int
main ()
{
  int arr[50], size, key;
  cout << "Enter Size :";
  cin >> size;
  cout<<"Enter Number :"<<endl;
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  cout << "Enter Number to Search :";
  cin >> key;
//*********************Array Sorting****************************
  for (int i = 0; i < size; i++)
    {
      for (int j = i+1; j < size; j++)
	{
	  if (arr[i] > arr[j])
	    {
	      int temp;
	      temp = arr[i];
	      arr[i] = arr[j];
	      arr[j] = temp;
	    }
	}
    }
//****************************Finding Positions************************    
  int l, r, mid1, mid2, mid3, mid4;
  l = 0;
  r = size;
  while (l <= r)
    {
      mid1 = l + (l + r) / 5;
      mid2 = l + 2 * (l + r) / 5;
      mid3 = r - 2 * (l + r) / 5;
      mid4 = r - (l + r) / 5;
      if (arr[mid1] == key)
	{
	  cout << "Element Found At Positions " << mid1 + 1;
	  break;
	}
      else if (arr[mid2] == key)
	{
	  cout << "Element Found At Positions " << mid2 + 1;
	  break;
	}
      else if (arr[mid3] == key)
	{
	  cout << "Element Found At Positions " << mid3 + 1;
	  break;
	}
      else if (arr[mid4] == key)
	{
	  cout << "Element Found At Positions " << mid4 + 1;
	  break;
	}
      else if (key < arr[mid1])
	{
	  r = mid1 - 1;
	}
      else if (key > arr[mid1] && key < arr[mid2])
	{
	  l = mid1 + 1;
	  r = mid2 - 1;
	}
      else if (key > arr[mid2] && key < arr[mid3])
	{
	  l = mid2 + 1;
	  r = mid3 - 1;
	}
      else if (key > arr[mid3] && key < arr[mid4])
	{
	  l = mid3 + 1;
	  r = mid4 - 1;
	}
      else
	{
	  l = mid4 + 1;
	}
    }
    if(l>r)
    {
        cout<<"Element Not Found !";
    }
  return 0;
}
