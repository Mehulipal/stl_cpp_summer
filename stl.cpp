#include <bits/stdc++.h>
using namespace std;

bool fun(int x, int y)
{
    return x>y;
}

void practice ()
{
    vector<int> A = {11,102,3,14};
    cout << A[1] << " " << *A.begin() << endl;

    int B[] = {11,2,6,3,14};
    cout << B[1] << endl;

    sort(A.begin(),A.end());
    //sort(A.end(),A.begin());

    bool present = binary_search(A.begin(),A.end(),3);
   // present = binary_search(A.begin(),A.end(),4);
    cout << A[1] << "@" << present << endl;

    A.push_back(100);
    cout << *(A.end()-1) << " " << *(&A[4]-1) << " " << A[5] << " " << A[6] << endl;

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);

  //  A.push_back(123);

    sort(A.begin(), A.end());

    auto it = lower_bound(A.begin(), A.end(), 100);
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);

  //  cout << *(A.end()-2) << endl;

    cout << *it << " " << *it2 << " " << *(it-1) << endl;
    cout << it2 - it << endl; //count of 100

    sort(A.begin(), A.end(), fun);
    //vector<int>::iterator it3;

    for(auto it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;

    for(int x : A)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;


    for(int x : A)
    {
        cout << x << " ";
    }
    cout << endl;


    for(int &x : A)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;


    for(int x : A)
    {
        cout << x << " ";
    }
    cout << endl;


}

void setDemo()
{
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-100);
    S.insert(1);
    S.insert(1);

    S.erase(1);

    for(int x : S)
    cout << x << " ";
    cout << endl;

    auto it4 = S.lower_bound(1);
    auto it5 = S.upper_bound(2);

    if(it5 == S.end())
    cout << "Does not exist" << endl;

    cout << *it5 << " " << *it4 << endl;

    bool present2 = binary_search(S.begin(),S.end(),1);
    cout << present2 << endl;

    auto it = S.find(100);
    if(it == S.end())
        cout << "Not present";
    else
        cout << "Present";
        cout << endl;


}

void mapDemo()
{
    map<int, int> A;
    A[3] = 5;
    A[6] = 10;
    A[9] = 15;
    A[12] = 20;
    A[15] = 25;

    map<string, int> B;
    B["how are you?"] = 10;
    B["where are you now?"] = 20;

    cout << A[0] << " " << A[9] << " " << B["s"] << " " << B["how are you?"];
    cout << endl;

    map<char,int> D;
    string C = "Heart beats fast colors and promises";

    for(int x : C)
    cout << x << " ";
    cout << endl;

    for(char x : C)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;

    cout << D['H'] << " " << D['s'];
    cout << endl;

    for(char x : C)
        D[x]++;

    cout << D['H'] << " " << D['s'];
    cout << endl;
}

void stl()
{   // Pairs are ordered on the basis of their x coordinates (ascending) and if x coordinates are same, they are ordered based on their y coordinates
    set< pair<int,int> > A;

    A.insert({401, 450});
    A.insert({2, 20});
    A.insert({2, 3});
    A.insert({2, 0});
    A.insert({30, 400});
    A.insert({401, 450});
    A.insert({10, 20});

    //2,0
    //2,3
    //2,20
    //10,20
    //30,400
    //401,450

    auto iit = A.begin();

    pair<int,int> found2 = *iit;
    cout << found2.first << "@" << found2.second << endl;

    iit++;
    pair<int,int> found3 = *iit;
    cout << found3.first << "@" << found3.second << endl;

    iit++;
    pair<int,int> found4 = *iit;
    cout << found4.first << "@" << found4.second << endl;

    iit++;
    pair<int,int> found5 = *iit;
    cout << found5.first << "@" << found5.second << endl;

    iit++;
    pair<int,int> found6 = *iit;
    cout << found6.first << "@" << found6.second << endl;

    iit++;
    pair<int,int> found7 = *iit;
    cout << found7.first << "@" << found7.second << endl;


    auto iit2 = A.upper_bound({2,10});
    auto iit3 = A.lower_bound({2, 20});
    pair<int,int> oki = *iit2;
    pair<int,int> oki2 = *iit3;

    cout << oki.first << " " << oki.second << " " << oki2.first << " " << oki2.second << endl;


    A.erase({2, 0});
    A.erase({2, 20});

    auto it = A.find({2, 0});
    if(it == A.end())
        cout << "Not present";
    else
        cout << "Present";
    cout <<endl;

     auto it2 = A.find({401, 450});
    if(it2 == A.end())
        cout << "Not present";
    else
        cout << "Present";
    cout << endl;

    pair<int,int> found = *A.begin();
    cout << found.first << " " << found.second << endl;

    auto it5 = A.begin();
    it5++;
    it5++;
    pair<int,int> found1 = *(it5);
    cout << found1.first << " " << found1.second << endl;

    int point = 50;
    auto it3 = A.upper_bound({point, INT_MAX});
    it3--;

    pair<int,int> current = *it3;

    cout << current.first << " " << current.second << endl;

    pair<int,int> cur = {100, 200};

    cout << cur.first << " " << cur.second << endl;
    A.insert(cur);

     auto it4 = A.find({100, 200});
    if(it4 == A.end())
        cout << "Not present";
    else
        cout << "Present";
}

void pq()
{
    priority_queue<int> maxh; //max heap : max element on top
    priority_queue<int,vector<int>, greater<int>> minh; //min heap : min element on top

    vector<int> v;
    //elements inserted in random order.
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    v.push_back(3);

    for(auto num: v)
    {
        //num : element in vector
        maxh.push(num);
        minh.push(num);
        // elements inserted into both heaps.
    }

    // print in ascending order using min heap since it gives min in top.
    cout<<"Ascending order:"<<endl;
    while(minh.size()>0)
    {
        cout<<minh.top()<<endl;
        minh.pop(); //forgetting this step results in infinite loop.
    }

    cout<<"Descending order:"<<endl;
    // print in descending order using max heap since it gives max in top.
    while(maxh.size()>0)
    {
        cout<<maxh.top()<<endl;
        maxh.pop(); //forgetting this step results in infinite loop.
    }
}

int main()
{
    //practice();
<<<<<<< HEAD
    //setDemo();
    mapDemo();
=======
    setDemo();
   // mapDemo();
>>>>>>> 4cb1d99b5b081461c7b06dedf98be13ea49d6961
    // stl();
    // pq();
}
