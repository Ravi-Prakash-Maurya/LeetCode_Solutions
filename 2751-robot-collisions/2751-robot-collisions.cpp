class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& pos, vector<int>& heal, string dir) {
        vector<tuple<int, int, char, int>> tup;
        for(int i = 0; i < pos.size(); i++) {
            tup.emplace_back(pos[i], heal[i], dir[i], i);
        }
        sort(tup.begin(), tup.end());
        stack<tuple<int, int, char, int>> s;
        for (auto& robot : tup) {
            int position = get<0>(robot);
            int health = get<1>(robot);
            char direction = get<2>(robot);
            int index = get<3>(robot);
            if (direction == 'R') {
                s.push(robot);
            } else {
                while (!s.empty() && get<2>(s.top()) == 'R' && health > 0) {
                    auto topRobot = s.top();
                    int topHealth = get<1>(topRobot);
                    if (health > topHealth) {
                        health -= 1;
                        s.pop();
                    } else if (health < topHealth) {
                        get<1>(s.top()) -= 1;
                        health = 0;
                    } else {
                        health = 0;
                        s.pop();
                    }
                }
                if (health > 0) {
                    s.push(make_tuple(position, health, direction, index));
                }
            }
        }
        vector<pair<int, int>> p;
        while (!s.empty()) {
            auto robot = s.top();
            s.pop();
            p.push_back({get<3>(robot), get<1>(robot)});
        }
        sort(p.begin(), p.end());
        vector<int> vec;
        for (auto& x : p) {
            vec.push_back(x.second);
        }
        return vec;
    }
};