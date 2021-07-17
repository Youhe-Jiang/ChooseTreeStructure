#include <iostream>
using namespace std;
#include "GetPrimeFactor.h"


vector<vector<int>> getWidth(int numberOfProcess) {
    int t_n;
    vector<int> v;
    vector<int> x;
    t_n = numberOfProcess;
    x.push_back(1);
    v = getPrimeFactor(t_n);
    for (int i = 0; i < v.size(); i++) {
        if (x[x.size() - 1] != v[i]) {
            x.push_back(v[i]);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (x[x.size() - 1] != v[i] * v[j]) {
                x.push_back(v[i] * v[j]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                if (x[x.size() - 1] != v[i] * v[j] * v[k]) {
                    x.push_back(v[i] * v[j] * v[k]);
                }
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                for (int l = k + 1; l < v.size(); l++) {
                    if (x[x.size() - 1] != v[i] * v[j] * v[k] * v[l]) {
                        x.push_back(v[i] * v[j] * v[k] * v[l]);
                    }
                }
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                for (int l = k + 1; l < v.size(); l++) {
                    for (int m = l + 1; m < v.size(); m++) {
                        if (x[x.size() - 1] != v[i] * v[j] * v[k] * v[l] * v[m]) {
                            x.push_back(v[i] * v[j] * v[k] * v[l] * v[m]);
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                for (int l = k + 1; l < v.size(); l++) {
                    for (int m = l + 1; m < v.size(); m++) {
                        for (int n = m + 1; n < v.size(); n++) {
                            if (x[x.size() - 1] != v[i] * v[j] * v[k] * v[l] * v[m] * v[n]) {
                                x.push_back(v[i] * v[j] * v[k] * v[l] * v[m] * v[n]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                for (int l = k + 1; l < v.size(); l++) {
                    for (int m = l + 1; m < v.size(); m++) {
                        for (int n = m + 1; n < v.size(); n++) {
                            for (int o = n + 1; o < v.size(); o++) {
                                if (x[x.size() - 1] != v[i] * v[j] * v[k] * v[l] * v[m] * v[n] * v[o]) {
                                    x.push_back(v[i] * v[j] * v[k] * v[l] * v[m] * v[n] * v[o]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                for (int l = k + 1; l < v.size(); l++) {
                    for (int m = l + 1; m < v.size(); m++) {
                        for (int n = m + 1; n < v.size(); n++) {
                            for (int o = n + 1; o < v.size(); o++) {
                                for (int p = o + 1; p < v.size(); p++) {
                                    if (x[x.size() - 1] != v[i] * v[j] * v[k] * v[l] * v[m] * v[n] * v[o] * v[p]) {
                                        x.push_back(v[i] * v[j] * v[k] * v[l] * v[m] * v[n] * v[o] * v[p]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vector<int> y = x;
    vector<int> z = y;
    vector<int> h = z;
    vector<int> g = h;
    vector<int> f = g;
    vector<int> e = f;
    vector<int> d = e;
    vector<int> tree_structure;
    vector<vector<int>> tree;
    for (int i = 0; i < x.size(); i++) {
        for (int j = 0; j < y.size(); j++) {
            for (int k = 0; k < z.size(); k++) {
                for (int l = 0; l < h.size(); l++) {
                    for (int m = 0; m < g.size(); m++) {
                        for (int n = 0; n < f.size(); n++) {
                            for (int o = 0; o < e.size(); o++) {
                                for (int p = 0; p < d.size(); p++) {
                                    if (x[i] * y[j] * z[k] * h[l] * g[m] * f[n] * e[o] * d[p] == t_n) {
                                        int a[] = {x[i], y[j], z[k], h[l], g[m], f[n], e[o], d[p]};
                                        for (int it = 0; it < sizeof(a) / sizeof(int); ++it) {
                                            if (a[it] == 1) {
                                                continue;
                                            } else {
                                                tree_structure.push_back(a[it]);
                                            }
                                        }
                                        tree.push_back(tree_structure);
                                        tree_structure.clear();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    sort(tree.begin(), tree.end());
    tree.erase(unique(tree.begin(), tree.end()), tree.end());
    tree.pop_back();
    return tree;
}

