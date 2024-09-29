class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> mp;
        vector<pair<int, string>> vec;

        for (string &word : words)
        {
            mp[word]++;
        }

        for (auto &it : mp)
        {
            vec.push_back({it.second, it.first});
        }

        auto lambda = [](pair<int, string> P1, pair<int, string> P2)
        {
            if (P1.first == P2.first)
            {
                return P1.second < P2.second;
            }
            return P1.first > P2.first;
        };

        sort(vec.begin(), vec.end(), lambda);

        vector<string> result(k);
        for (int i = 0; i < k; ++i)
        {
            result[i] = vec[i].second;
        }

        return result;
    }
};
