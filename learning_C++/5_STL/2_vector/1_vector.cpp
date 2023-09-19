#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;                              //this is how you intialize a vector array
    /*we can also intialize like this
    vector<int> a(5,1)       --> here an array of size 5 have has been intialized whose each element is 1.
                                 if we wrote it like a(5) only it would have made array of size 5 with all the numbers as 0 b default.)*/
    cout << "capacity " << v.capacity() <<endl;  //capacity shows the actual size of array
                                                 //intial size of a vector is 0.

    v.push_back(1);                              //1 is inserted inside the array
    cout << "capacity " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity " << v.capacity() << endl;
    v.push_back(7);
    cout << "capacity " << v.capacity() << endl; 
    /* we will get capacity = 4 here. 
    the reason is that when no. of elemnts exceeds the capacity or the size of array then computer doubles the size of the array.
    since array size was 2, it got double and ended up being 4.
     if in future no. of elements exceed size again then size will double to 8 and so on.  */

    cout << "size " << v.size() << endl; // it will show the actual no. of elements in the array

    cout<< "elements at 2nd index " << v.at(2) <<endl;  //it will show element at index 2.

    cout<< "first" << v.front() <<endl;
    cout << "last" << v.back() <<endl;

    cout << "before pop" << endl;
    for(int i:v) {
        cout << i << " ";
    } 
    cout << endl;

    v.pop_back();                       // it deletes one element from the end of the array.

    cout<<"after pop" << endl;
    for(int i:v) {                     
        cout << i << " ";
    }
    /* it is a different way of printing array. it can't be used in normal array.
     we can also use simple way of printing array for examle
     for(int i=0; i< v.size(); i++)
     {
        cout << i << " ";
     }
     */
    v.resize(8);                    //changes the size of array
    v.insert(v.begin() + 2,7);      // it is used to insert an element at specific location. it uses varaible.insert(address,element)
    v.erase(v.end()-2);            //it is used to delete an element at specfic position. it uses variable.insert(address)
    // v.clear                    //it is used to clear whole array    
}
