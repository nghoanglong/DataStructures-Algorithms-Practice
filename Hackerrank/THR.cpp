int hurdleRace(int k, vector<int> height) {
    vector<int>:: iterator inter;
    int result;
    inter = max_element(height.begin(),height.end());
    result = (*inter - k < 0) ? 0 : *inter - k;
    return result;
}