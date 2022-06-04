#include <bits/stdc++.h>
using namespace std;

struct node{
    int start;
    int ending;
    int index;
};
bool comp(node a,node b){
    return a.ending < b.ending;
}

int main()
{
    int n;
    cin >> n;
    vector<node> activity(n);
    for (int i = 0; i < n; i++){
        cin >> activity[i].start;
        activity[i].index = i + 1;
    }
    for (int i = 0; i < n; i++){
        cin >> activity[i].ending;
    }
    sort(activity.begin(), activity.end(), comp);
    int lastEnd=-1;
    vector<int> act;
   for (auto it : activity)
    {
        if(it.start >=lastEnd){
            lastEnd = it.ending;
            act.push_back(it.index);
        }
    }

    cout << "No. of non conflicting activities: " << act.size();
    cout << "\nList of selected activities: ";
    for (auto it : act){
        cout << it << ", ";
    }
        return 0;
}
