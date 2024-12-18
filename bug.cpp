std::vector<bool> is not the same as a bitset.  While it uses 1 bit per element, it is significantly slower and has a different memory layout.  It's a common mistake to assume they're equivalent.  Using std::vector<bool> when you want a fast bitset can lead to substantial performance issues.