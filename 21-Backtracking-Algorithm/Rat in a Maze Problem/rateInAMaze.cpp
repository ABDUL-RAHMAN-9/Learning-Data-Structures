#include <iostream>
#include <vector>
using namespace std;

// Convert a path string like "DDRDRR" into a human-readable format
string formatPath(const string &path)
{
    string result;
    for (size_t i = 0; i < path.size(); i++)
    {
        if (path[i] == 'D')
            result += "Down";
        else if (path[i] == 'U')
            result += "Up";
        else if (path[i] == 'L')
            result += "Left";
        else if (path[i] == 'R')
            result += "Right";

        if (i != path.size() - 1)
            result += " -> ";
    }
    return result;
}

void helper(vector<vector<int>> &maze, int r, int c, string path, vector<string> &ans)
{
    int n = maze.size();
    if (r < 0 || c < 0 || r >= n || c >= n || maze[r][c] != 1)
        return;

    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // mark visited
    maze[r][c] = -1;

    helper(maze, r + 1, c, path + "D", ans); // Down
    helper(maze, r - 1, c, path + "U", ans); // Up
    helper(maze, r, c - 1, path + "L", ans); // Left
    helper(maze, r, c + 1, path + "R", ans); // Right

    // unmark
    maze[r][c] = 1;
}

vector<string> findPath(vector<vector<int>> &maze)
{
    vector<string> ans;
    helper(maze, 0, 0, "", ans);
    return ans;
}

int main()
{
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1},
    };

    vector<string> ans = findPath(maze);

    for (size_t i = 0; i < ans.size(); i++)
    {
        cout << "Path " << i + 1 << ": " << formatPath(ans[i]) << endl;
    }

    return 0;
}
