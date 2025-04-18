// Returns the greatest x in range [low, high] for which f(x) is true
int binarySearchMax(int low, int high, auto f) {
    while (low < high) {
        int mid = (low + high + 1) / 2; // right-biased mid
        if (f(mid)) low = mid;
        else high = mid - 1;
    }
    return low;
}


// Returns the smallest x in range [low, high] for which f(x) is true
int binarySearchMin(int low, int high, auto f) {
    while (low < high) {
        int mid = (low + high) / 2; // left-biased mid
        if (f(mid)) high = mid;
        else low = mid + 1;
    }
    return low;
}
