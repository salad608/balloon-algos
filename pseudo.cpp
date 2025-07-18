#include <bits/stdc++.h>

bool isGoal(int row, int col, pair<int, int> goal) {
    return (row==goal.first && col==goal.second);
}

int heuristic(int row, int col, pair<int, int> goal) {
    //distance formula
    return sqrt((row - goal.first) * (row - goal.first) + (col - goal.second) * (col - goal.second));
}

void aStar(int row, int col, pair<int, int> goal, pair<int, int> src) {
    int curX, curY;
    bool closedList[r][c]; //already accessed
    set<int, int> openList; //to be accessed
    openList.insert(src.first, src.second);

    if (isGoal(row, col, goal)) {
        cout << "Lat/Long:" << endl;
        cout << src.first << " " << src.second << endl;
        cout << "Windfield Data:" << endl;
        cout << wf.loc << " " << wf.temp << " " << wf.wind << endl;
        return 0;
    }

    if (heuristic(row, col, goal)>50) { //set tolerance, e.g. 50m
        aStar(row, col, goal, src<++curX, ++curY>);
    }
    //unfinished
}

int main() {

}