#include<bits/stdc++.h>
using namespace std;

void explainPair() {
    // initialization
    pair<int, int> pr1 = {2, 3};
    pair<int, int> pr2 = make_pair(2, 1);

    // accessing elements
    cout << pr1.first << " " << pr2.second << endl;
}

void explainIterator() {
    vector<int> vec = {1, 2, 0};

    vector<int>::iterator beginItr = vec.begin(); // returns a reference to the memory address of 1
    vector<int>::iterator endItr = vec.end(); // returns a reference to the memory address of 0

    for(vector<int>::iterator i = beginItr; i < endItr; i++) {
        cout << *i << " ";
    }
    cout << endl;

    // Using auto keyword
    for(auto i = beginItr; i < endItr; i++) {
        cout << *i << " ";
    }
    cout << endl;

    // for-each loop
    for(auto x: vec) {
        cout << x << " ";
    }

    // Reverse iterator
    auto rbegin = vec.rbegin();
    auto rend = vec.rend();

    for(auto it = rbegin; it < rend; it++) {
        cout << *it << " ";
    }
}

void explainVector() {
    vector<int> vec = {7, 8};

    // inserting elements at the back
    vec.push_back(1);
    vec.emplace_back(2);
    vec.emplace_back(0);

    // inserting elements before a given position
    vec.insert(vec.begin() + 2, 4); // [7 8 4 1 2 0]

    cout << vec.size() << endl; // length/ size of the vector

    vector<int> num(5); // creates a vector of size 5 with all values 0
    vector<int> hum(5, 9); // creates a vector of size 5 with all values 9

    vector<int> jug(num); // assign one vector to another
    vector<int> fug(num.begin() + 1, num.end()); // assigns some part of the vector to another

    fug.pop_back(); // pop out the last element
    fug.assign(5, 10); // removes existing elements and fills the vector with 5 copies of 10

    cout << vec.front() << endl; // gives the front/first element
    cout << vec.back() << endl; // gives the back/last element

    vec.erase(vec.begin() + 1); // delete a single element
    vec.erase(vec.begin() + 1, vec.end() - 1); // delete a range of elements

    vec.clear(); // deletes all elements
}

void explainList() {
    // has the same methods and functions as on vector except here we have push_front
    list<int> ls = {6, 7};
    ls.push_front(1);
    ls.emplace_front(2);

    for(auto x: ls) {
        cout << x << " ";
    }
}

void explainStack() {
    // LIFO
    stack<int> st;
    st.push(1);
    st.push(7);
    st.push(71);
    st.push(72);
    st.push(73);

    cout << st.size() << endl; // 5
    
    // can't use iterator in case of stack, we use as such:
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    } // 73 72 71 7 1

    cout << "\n" << st.size(); // 0
}

void explainQueue() {
    // FIFO
    queue<int> q;
    q.push(2);
    q.push(21);
    q.push(22);
    q.push(23);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

void explainPriorityQueue() {
    // stores the highest element at the top
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);

    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    // min heap
    priority_queue<int, vector<int>, greater<int>> mh;
    mh.push(5);
    mh.push(2);
    mh.push(10);
    mh.push(8);

    cout << endl;
    while(!mh.empty()) {
        cout << mh.top() << " ";
        mh.pop();
    }
}

void explainSet() {
    // stores unique elements in ascending order
    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(21);
    st.insert(21);
    st.insert(22);
    st.insert(23);
    st.insert(12);

    for(auto it: st) {
        cout << it << " "; // 2 12 21 22 23
    }

    auto it = st.find(12);
    if(it != st.end()) {
        cout << *it << " found"; // 12 found
    }
    cout << st.count(12) << endl; // 1

    auto it1 = st.begin();
    it1++;
    auto it2 = st.end();
    it2--;
    st.erase(it1, it2); // 2 23

    // lower bound -> returns an iterator that points to an element >= given number
    auto itr = st.lower_bound(11);
    if(itr != st.end()) {
        cout << *itr << endl; // 12
    }

    // upper bound -> returns an iterator that points to an element > given number
    auto uitr = st.upper_bound(12);
    if(uitr != st.end()) {
        cout << *uitr << endl; // 21
    }

}

void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);

    ms.erase(1); // deletes all the occurrences of 1
    auto it = ms.find(1); // returns a pointer pointing to the first occurrence of 1
}

void explainUnorderedSet() {
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(12);
    st.insert(12);
    
    // better time complexity in terms of searching
    auto it = st.find(11); // O(1) - optimal, O(N) - worst case
}

void explainMap() {
    map<int, string> mp;
    mp[1] = "abc";
    mp[2] = "bcd";
    mp[3] = "aman";
    mp.insert({4, "hey"});

    for(auto it: mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    auto it = mp.find(3);
    if(it != mp.end()) {
        cout << it->first << " -> " << it->second << endl;
    }
}

void explainUnorderedMap() {
    unordered_map<int, string> mp;

    // better time complexity than map in terms of searching
}

void explainMultiMap() {
    multimap<int, char> mp;
    mp.insert({3, 'b'});
    mp.insert({1, 'a'});
    mp.insert({1, 'b'});
    mp.insert({1, 'a'});
    mp.insert({2, 'a'});
    mp.insert({2, 'a'});
    mp.insert({2, 'b'});

    auto it = mp.equal_range(2); // returns a pair of iterators denoting the starting and ending of the given key

    for(auto i = it.first; i != it.second; i++) {
        cout << i->first << " -> " << i->second << endl;
    }
}

void explainSort() {
    int arr[5] = {6, 1, 7, 2, 8};
    sort(arr, arr + 5);
}

void explainAccumulate() {
    int arr[5] = {6, 1, 7, 2, 8};
    cout << accumulate(arr, arr+5, 0); // from, to, initialSumVal
}

void explainCount() {
    int arr[5] = {6, 1, 1, 2, 8};
    cout << count(arr, arr+5, 1) << endl; // 2
}

void explainFind() {
    int arr[5] = {6, 1, 7, 2, 8};
    auto it = find(arr, arr+5, 1);
}

void explainNextPermutation() {
    string str = "abc";

    do {
        cout << str << endl;
    } while(next_permutation(str.begin(), str.end()));
}

void explainPrevPermutation() {
    string str = "cba";

    do {
        cout << str << endl;
    } while(prev_permutation(str.begin(), str.end())); //
}

void explainMaxElement() {
    int arr[] = {7, 6, 5, 10, 9};
    auto it = max_element(arr, arr+5);
    cout << *it << endl;
}

void explainMinElement() {
    int arr[] = {7, 6, 5, 10, 9};
    auto it = min_element(arr, arr+5);
    cout << *it << endl;
}

void explainReverse() {
    int arr[] = {7, 6, 5, 10, 9};
    reverse(arr, arr+5);
}

bool comparator(pair<int, int> el1, pair<int, int> el2) {
    if(el1.second > el2.second) return true;
    if(el1.second < el2.second) return false;
    if(el1.first < el2.first) return true;
    return false;
}
void explainComparator() {
    pair<int, int> arr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};
    // sort it according to second element
    // {2, 9}, {3, 9}, {1, 6}, {2, 6}, {1, 5}
    sort(arr, arr+5, comparator);
    for(auto it: arr) {
        cout << "{" << it.first << ", " << it.second << "} ";
    }
}

int main() {
    explainComparator();

    return 0;
}