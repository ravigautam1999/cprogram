#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void makeUndGraph(int v, int u, vector<pair<int, int>> &d){
       d.push_back(make_pair(v, u));
       d.push_back(make_pair(u, v));

}

void makeDirGraph(int v, int u, vector<pair<int, int>> &d){
       d.push_back(make_pair(v, u));
}


void makeWeightedUndGraph(int v, int u, int w, vector<pair<pair<int, int>, int>> &d){
    d.push_back(make_pair(make_pair(v, u), w));
    d.push_back(make_pair(make_pair(u, v), w));
}

void makeWeightedDirGraph(int v, int u, int w, vector<pair<pair<int, int>, int>> &d){
    d.push_back(make_pair(make_pair(v, u), w));
    
}



void printUndGraph(vector<pair<int, int>> v){
    cout << "\nUnweighted Undirected Graph\n" << endl;

    cout << "Node 1\t-->\t" << "Node 2" << endl;
    for(auto i : v){
        cout << i.first << "\t-->\t" << i.second << endl;
    }
}

void printDirGraph(vector<pair<int, int>> v){
    cout << "\nUnweighted Undirected Graph\n" << endl;

    cout << "Node 1\t-->\t" << "Node 2" << endl;
    for(auto i : v){
        cout << i.first << "\t-->\t" << i.second << endl;
    }
}

void printWeightedUndGraph(vector<pair<pair<int, int>, int>> v){
    cout << "\nWeighted Undirected Graph\n" << endl;

    cout << "Node 1\t-->\t" << "Node 2" << "\tWeight"<< endl;
    for(auto i : v){
        cout << "( " << i.first.first << "\t-->\t" << i.first.second << " )\t : "<< i.second << endl;
    }
}

void printWeightedDirGraph(vector<pair<pair<int, int>, int>> v){
    cout << "\nWeighted Undirected Graph\n" << endl;

    cout << "Node 1\t-->\t" << "Node 2" << "\tWeight"<< endl;
    for(auto i : v){
        cout << "( " << i.first.first << "\t-->\t" << i.first.second << " )\t : "<< i.second << endl;
    }
}

bool searchEdgeExist(int v, int u, vector<pair<int, int>> g){
    for (auto i : g){
        if (i.first == v && i.second == u){return true;}
    }
    return false;
}

void printAllConnectedNode(int v, vector<pair<int, int>> g , int visited = -1){
    cout << v << endl;
    int i=0;
    if(v != visited){
        while(g[i].first != v && i <= g.size()){
        i+=1;
    }
    if(i<g.size()){printAllConnectedNode(g[i].second, g, g[i].first);}
        
    }

    
}

int main() {
    vector<pair<int, int>> undGraph;
    vector<pair<pair<int, int>, int>> weightedUndGraph;


    makeUndGraph(1, 2, undGraph);
    makeUndGraph(2, 5, undGraph);
    makeUndGraph(3, 6, undGraph);
    makeUndGraph(4, 7, undGraph);
    makeUndGraph(5, 8, undGraph);

    cout << searchEdgeExist(1, 2, undGraph);
    printAllConnectedNode(1, undGraph);

    makeWeightedUndGraph(1, 2, 6, weightedUndGraph);
    makeWeightedUndGraph(2, 5, 11, weightedUndGraph);

    printUndGraph(undGraph);
    printWeightedUndGraph(weightedUndGraph);



    
    return 0;
}