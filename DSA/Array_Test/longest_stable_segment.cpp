#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int longestStableSegment(vector<int>& arr, int k) {
    deque<int> maxDeque;
    deque<int> minDeque;

    int left = 0;
    int answer = 0;

    for (int right = 0; right < arr.size(); right++) {

        while (!maxDeque.empty() && arr[maxDeque.back()] <= arr[right])
            maxDeque.pop_back();

        while (!minDeque.empty() && arr[minDeque.back()] >= arr[right])
            minDeque.pop_back();

        maxDeque.push_back(right);
        minDeque.push_back(right);

        while (arr[maxDeque.front()] - arr[minDeque.front()] > k) {

            if (maxDeque.front() == left)
                maxDeque.pop_front();

            if (minDeque.front() == left)
                minDeque.pop_front();

            left++;
        }

        answer = max(answer, right - left + 1);
    }

    return answer;
}

int main() {

    int N, K;
    cin >> N >> K;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    cout << longestStableSegment(arr, K);

    return 0;
}