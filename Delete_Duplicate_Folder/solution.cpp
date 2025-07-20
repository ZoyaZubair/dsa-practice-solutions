class TrieNode {
public:
    unordered_map<string, TrieNode*> children;
    string name;
    string serial;
    bool deleted = false;

    TrieNode(string name = "") : name(name) {}
};

class Solution {
    unordered_map<string, int> count;
    vector<vector<string>> result;

    string dfs(TrieNode* node) {
        if (!node) return "";
        string serial;
        for (auto& [name, child] : node->children) {
            serial += "(" + name + dfs(child) + ")";
        }
        node->serial = serial;
        count[serial]++;
        return serial;
    }

    void collect(TrieNode* node, vector<string>& path) {
        if (!node || (node->serial != "" && count[node->serial] > 1)) return;
        if (!path.empty()) result.push_back(path);
        for (auto& [name, child] : node->children) {
            path.push_back(name);
            collect(child, path);
            path.pop_back();
        }
    }

public:
    vector<vector<string>> deleteDuplicateFolder(vector<vector<string>>& paths) {
        TrieNode* root = new TrieNode();
        for (auto& path : paths) {
            TrieNode* curr = root;
            for (auto& folder : path) {
                if (!curr->children.count(folder))
                    curr->children[folder] = new TrieNode(folder);
                curr = curr->children[folder];
            }
        }

        dfs(root);
        vector<string> path;
        collect(root, path);
        return result;
    }
};
