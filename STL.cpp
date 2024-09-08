// STL - Standard Template Library

#include <bits/stdc++.h>
using namespace std;

// // -----------------------------------------------------------STL array -------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     int basic[3] = {1, 2, 3};

//     array<int, 4> a = {1, 2, 3, 4};

//     int size = a.size();

//     for(int i=0; i<size; i++)
//     {
//         cout << a[i] << " ";
//     } cout << endl;

//     cout << "Element at 2nd index -> " << a.at(2) << endl;

//     cout << "Empty or not -> " << a.empty() << endl;

//     cout << "First element -> " << a.front() << endl;
//     cout << "Last element -> " << a.back() << endl;

//     return 0;
// }


// //----------------------------------------------------------- Vector -------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     vector<int> v;

//     vector<int> a(5, 0);

//     cout << "Print a" << endl;
//     for(int i: a)
//     {
//         cout << i << " ";
//     } cout << endl;

//     vector<int> b(a); // copy a in b

//     cout << "Print b" << endl;
//     for(int i: b)
//     {
//         cout << i << " ";
//     } cout << endl;

//     cout << "Capacity -> " << v.capacity() << endl;

//     v.push_back(1);
//     cout << "Capacity -> " << v.capacity() << endl;

//     v.push_back(2);
//     cout << "Capacity -> " << v.capacity() << endl;

//     v.push_back(3);
//     cout << "Capacity -> " << v.capacity() << endl;
    
//     v.push_back(4);
//     cout << "Capacity -> " << v.capacity() << endl;

//     // size()
//     cout << "Size -> " << v.size() << endl; // capacity shows total space and size shows total elements

//     // at()
//     cout << "Element at 2nd index -> " << v.at(2) << endl;

//     // front() and back()
//     cout << "Front element -> " << v.front() << endl;
//     cout << "Back element -> " << v.back() << endl;

//     // pop_back()
//     cout << "Before pop" << endl;
//     for(int i : v)
//     {
//         cout << i << " ";
//     } cout << endl;

//     v.pop_back();

//     cout << "After pop" << endl;
//     for(int i : v)
//     {
//         cout << i << " ";
//     } cout << endl;


//     // clear() - size will be cleared not capacity
//     v.clear(); 

//     return 0;
// }


// //----------------------------------------------------------- Deque --------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     deque<int> d;

//     d.push_back(1);
//     d.push_front(2);
//     d.push_back(3);
//     d.push_front(4);

//     for(int i: d)
//     {
//         cout << i << " ";
//     } cout << endl;

//     d.pop_back();

//     for(int i: d)
//     {
//         cout << i << " ";
//     } cout << endl;

//     d.pop_front();

//     for(int i: d)
//     {
//         cout << i << " ";
//     } cout << endl;

//     // at()
//     cout << "Element at first index: " << d.at(1) << endl;

//     // front() and back()
//     cout << "Front: " << d.front() << endl;
//     cout << "Back " << d.back() << endl;

//     // empty()
//     cout << "Empty or not: " << d.empty() << endl;

//     // erase()
//     cout << "Before erase: " << d.size() << endl;
//     d.erase(d.begin(), d.begin()+1);
//     cout << "After erase: " << d.size() << endl;

//     for(int i: d)
//     {
//         cout << i << " ";
//     } cout << endl;

//     return 0;
// }


// // ----------------------------------------------------------- List --------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     list<int> l;

//     list<int> n(5, 0);
//     for(int i: n) cout << i << " ";
//     cout << endl;

//     list<int> k(n); // copy n in k

//     cout << "List k:" << endl;
//     for(int i: k) cout << i << " ";
//     cout << endl;

//     l.push_front(1);
//     l.push_front(2);

//     for(int i: l) cout << i << " ";
//     cout << endl;

//     // erase()
//     l.erase(l.begin());

//     cout << "After erase: " << endl;
//     for(int i: l) cout << i << " ";
//     cout << endl;

//     cout << "Size of list: " << l.size() << endl;

//     return 0;
// }


// // ----------------------------------------------------------- Stack --------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     stack<string> s;

//     s.push("first");
//     s.push("second");
//     s.push("third");

//     cout << "Top element: " << s.top() << endl;

//     s.pop();

//     cout << "Top element: " << s.top() << endl;

//     cout << "Size of stack: " << s.size() << endl;

//     cout << "Empty or not: " << s.empty() << endl;

//     return 0;
// }


// // ----------------------------------------------------------- Queue --------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     queue<string> q;

//     q.push("first");
//     q.push("second");
//     q.push("third");

//     cout << "Size: " << q.size() << endl;

//     cout << "First element: " << q.front() << endl;

//     q.pop();

//     cout << "First element: " << q.front() << endl;

//     cout << "Size after pop: " << q.size() << endl;

//     return 0;
// }


// // ----------------------------------------------------------- Priority Queue --------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     // max heap - top element will be always max
//     priority_queue<int> pq;

//     // min heap - top element will be always min
//     priority_queue<int, vector<int>, greater<int>> min;

//     pq.push(1);
//     pq.push(5);
//     pq.push(2);
//     pq.push(4);
//     pq.push(3);

//     cout << "Size: " << pq.size() << endl;

//     cout << "Top element: " << pq.top() << endl;

//     int n = pq.size();

//     for(int i=0; i<n; i++) {
//         cout << pq.top() << " ";
//         pq.pop();
//     } cout << endl;

//     cout << "Min heap priority queue" << endl;

//     min.push(1);
//     min.push(5);
//     min.push(2);
//     min.push(4);
//     min.push(3);

//     cout << "Size: " << min.size() << endl;

//     cout << "Top element: " << min.top() << endl;

//     int m = min.size();

//     for(int i=0; i<m; i++) {
//         cout << min.top() << " ";
//         min.pop();
//     } cout << endl;

//     cout << "pq empty or not: " << pq.empty() << endl;
//     cout << "min empty or not: " << min.empty() << endl;

//     return 0;
// }


// // ----------------------------------------------------------- Set --------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     set<int> s;

//     s.insert(5);
//     s.insert(6);
//     s.insert(6);
//     s.insert(2);
//     s.insert(2);
//     s.insert(2);
//     s.insert(1);
//     s.insert(5);

//     for(int i : s) cout << i << " ";
//     cout << endl;

//     cout << "Size: " << s.size() << endl;

//     // erase()
//     set<int> :: iterator it = s.begin();
//     it++;
//     s.erase(it);

//     for(int i : s) cout << i << " ";
//     cout << endl;

//     // count()
//     cout << "5 is present or not: " << s.count(5) << endl;

//     // find()
//     set<int> :: iterator itr = s.find(5);

//     for(auto it=itr; it != s.end(); it++) cout << *it << " ";
//     cout << endl;

//     return 0;
// }


// // ----------------------------------------------------------- Map --------------------------------------------------------
// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     map<int, string> m;

//     m[1] = "first";
//     m[4] = "second";
//     m[3] = "third";

//     m.insert({6, "bheem"});

//     for(auto i : m) cout << i.first << " " << i.second << endl;

//     // count()
//     cout << "Finding 4: " << m.count(4) << endl;

//     // erase()
//     cout << "Before erase: " << endl;
//     for(auto i : m) cout << i.first << " " << i.second << endl;

//     m.erase(4);

//     cout << "After erase: " << endl;
//     for(auto i : m) cout << i.first << " " << i.second << endl;

//     // find()
//     auto it = m.find(3);

//     for(auto i=it; i!=m.end(); i++) cout << (*i).first << endl; 

//     return 0;
// }


// ---------------------------------------------------------- STL Algorithms --------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // binary search
    cout << "2 is present or not: " << binary_search(v.begin(), v.end(), 2) << endl;

    // lower bound
    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 3)-v.begin() << endl;

    // upper bound
    cout << "Upper bound: " << upper_bound(v.begin(), v.end(), 4)-v.begin() << endl;

    // We can also use max(), min(), swap() functions

    // reverse()
    string a = "abcd";
    reverse(a.begin(), a.end());
    cout << a << endl;

    // rotate()
    rotate(v.begin(), v.begin()+1, v.end());

    cout << "After rotate: " << endl;

    for(int i : v) cout << i << " ";
    cout << endl;

    // sort()
    sort(v.begin(), v.end());
    cout << "After sort: " << endl;
    for(int i : v) cout << i << " ";
    cout << endl;

    return 0;
}
