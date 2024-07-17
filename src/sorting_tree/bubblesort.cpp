#include <iostream>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

void bubblesort (vector<int>& sample)
{
    for (int i = 0; i < sample.size()-1; i++)
    {
        for (int j = 0; j < sample.size() - i-1; j++)
        {
            if (sample[j] > sample[j+1])
                swap (sample[j], sample[j+1]);
        }
    }
}

 
int main()
{
    vector<int> sample{10,1,2,3,50,20,10,10,40,5,6,7};
    //vector<int> sample {10,3,4,5,6,7,40,30,80,50};
    //vector<int> sample {10};
    //vector<int> sample {20,10};
    
    bubblesort (sample);
  
    cout <<"sorted sample is" << endl;
    for (auto iter : sample)
    {
        cout << iter << endl;
    }
 
    return 0;
}
