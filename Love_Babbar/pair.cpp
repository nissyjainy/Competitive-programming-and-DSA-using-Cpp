#include <bits/stdc++.h>
using namespace std;
#define int long long int
int main()
{
    pair<int, string> p;
    // method 1
    p = make_pair(2, "nisarg");
    // method 2
    p = {2, "abcd"};
    cout << p.first << " " << p.second << endl;
    // here pair can be copied
    pair<int, string> p1 = p;
    // if (p1.first = 4) then the value of p.first will not change ok
    pair<int, string> &p1 = p; // by refrence pass karyu che ok
    return 0;
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << endl;
    }
}
// vector of size 8 is taken
vector<int> v(8);
// size is dynamic in nature
vector<int> v(8, 3); // ahiya mare 8 size che ane each element is 3 byy defalut 0 hoy che ok
vector<int> vec;
// n to size che ok
for (int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    v.push_back(x);
    // hu jetla bhi x che ae push_back karu chu vector m aok
}
v.pop_back()            // last element remove kare che ok
    v.push_back()       // last ma add kare che ok
    vector<int> v2 = v; // by reference nathi ok atle jema kai change karo aema j reflect thashe ok
                        // copying takes o(n) complexity
                        // vector of pair ok atle darek element of vector is a  pair
vector<pair<int, int>> v

    // atle vector na darek element je pair che ae mare 2 vastu che int type ni ok
    vector<pair<int, int>>
        v = {{1, 2}, {2, 3}, {3, 4}};
// print the vector<pair>
for (int i = 0; i < v.size(); i++)
{
    cout << v[i].first // aa vector ni andar present pair no first element aape che
    // ahiya v[i] ae pair ne represent kare che ok atle v[i].first etc lakhvanu ok
}
// ARRAY OF VECTOR (Here the column is dynamic ok  but the rows are fixed only)
vector<int> v[10];
/*
3
3
1 2 3
3
3 4 5
2
1 2
Here N is the number of the test case
int N ;
cin>>N;
vector<int> v[N];
for(int i=0;i<N;i++)
{
    int n ;
    cin>>n;
    for(int j =0;j<n;j++)
    {
        int x;
        cin>>x;
        v[i].push_back(x); Ahiya x represents the elements and v[i] ae mare kaya vector ma nakhvanu che ok
    }
    cout<<v[0][0] atle 0 vector ma 1st element
}
*/
// VECTORS OF VECTORS (here no of rows and column is dynamic)

Here N is the number of the test case 
int N ;
cin>>N;
vector<vector<int>> v[N]; // here v[0]  is the vector ok atle je aapde int che ae ahiya vector aavshe ok 
for(int i=0;i<N;i++)
{
    int n;
    cin>>n;
    vector<int> temp;
    for(int i =0;i<n;i++)
    {
          int x;
          cin>>x;
          temp.push_back(x);
    }
    v.push_back(temp); // atle temp is the one vector where mare badha j elements che ok 
}
v[0] is the vector to aani aagad badhu thay je vetor ma thay ok 
// v[0].push_back(10); is possible ok 
// ITERATORS
 // syntax of iterator ok 
 vector<int> :: iterator it = v.begin();
 cout<<(*(it+1))<<endl; // ahiya it v.begin start ne point kare che and continuios che atle it+1 aagad vala element neprint karshe
 for(it = v.begin();it!=v.end();it++)
 {
    cout<<(*it)<<endl;
 }
 // it++ next iterator and it+1 next location maps and sets ma iterators are discontinous in nature 
 vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
 vector<pair<int,int>> :: iterator it ;
 for(it = v_p.begin();it!=v_p.end();it++)
 {
    cout<<(*it).first // or it->first same j che 
 }
 // RANGE BASED LOOPS
 vector<int> v = {2,3,4,5,6};
 for(int value:v) // atle vector na elements ae value ma store thay che ane pachi hu aene print karu chu
{
    cout << value << "\n"; // this is the copy of the vector element for the actual elements to use by refrence pass kar ok
}
for (int &value : v)
    // aana thi actual values change thay che ok
    cout
    << endl;

// AUTO KEYWORD

auto a = 1; // automaticallay gives the datatype to the variable

cout << a << endl;

// QUESTION CHE EK OK
map<pair<string, string>, vector<int>> m;
int n; // mare che ne ketla che ae jo ok
cin >> n;
// shu hovu joiye first name last name ane marks ok
for (int i = 0; i < n; i++)
{
    string first, last;
    cin >> first >> last;
    int x; // aa ek na corresponding ketla che
    cin >> x;
    // have che ne map ma insert kar ok
    for (int i = 0; i < x; i++)
    {
        int cnt;
        cin >> cnt;
        m[{first, last}].push_back(cnt);
    }
    // have mare access karvanu che ok
    for (auto &it : m)
    {
        cout << it.first.first << it.first.second << endl;
        // aama first name ane last name print thai jashe ok
        auto &list = it.second;
        // ahiya tare pelo int walo number aavshe
        for (int element : list)
        {
            cout << element << endl;
        }
        cout << endl;
    }
}

