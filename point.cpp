#include <iostream>
using namespace std;
class point
{
    public:
     // DECLARAION OF VARIABLES
     float xOne;
     float yOne;
     float xTwo;
     float yTwo;

     // null constructor
    point(void)
    {
      xOne = 1;
      yOne = 2;
      xTwo = 0;
      yTwo = 0;
    }

    // parametrize constructor
    point(float Fno, float Sno , float THno,  float FOno )
    {
        xOne = Fno;
        yOne = Sno;
        xTwo = THno;
        yTwo = FOno;

    }

    // copy constructor
    point(const point& userObj)
    {
        xOne = userObj.xOne;
        yOne = userObj.yOne;
        xTwo = userObj.xTwo;
        yTwo = userObj.yTwo;
    }

    // get number and show
    void getAndshow(point a, point b, point c, point d)
      { 
            cout<<"input x1"<<endl;
            cin>>xOne;
            cout<<"input y1"<<endl;
            cin>>yOne;
            cout<<"input x2"<<endl;
            cin>>xTwo;
            cout<<"input y2"<<endl;
            cin>>yTwo;
            cout<<"x1 = "<< xOne<<" , y1 = "<< yOne<<" , x2 = "<< xTwo<<" , y2 = "<< yTwo<<endl;
      }

     // add
    void PointAdd(point a, point b, point c, point d)
    {
        int nOne = a.xOne + c.xTwo;
        int nTwo = b.yOne + d.yTwo;
        cout <<"added new point is:"<<nOne << "," << nTwo << endl;
    }

     // multiply
    void PointMultiply(point a, point b, point c, point d)
    {
        int nOne = a.xOne * c.xTwo;
        int nTwo = b.yOne * d.yTwo;
        cout << "multiplied new point is :"<<nOne << "," << nTwo<<endl;
    }


    // subract
    void PointSubract(point a, point b, point c, point d)
    {
        int nOne = a.xOne - c.xTwo;
        int nTwo = b.yOne - d.yTwo;
         cout<<"subracted new point is :" <<nOne<< "," << nTwo <<endl;
    }
    


};

int main(void)
{
    point noOne;
    point noTwo;
    point noThree;
    point noFourth;
    
    noOne.getAndshow(noOne, noTwo, noThree, noFourth);
    noOne.PointAdd( noOne, noTwo, noThree, noFourth);
    noOne.PointSubract(noOne, noTwo, noThree, noFourth);
    noOne.PointMultiply(noOne, noTwo, noThree, noFourth);


}