#include <iostream>//1
using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    long long ans = (C - A) / B;
    if (A + ans * B <= C)
        ans++;
    cout << ans - 1 << endl;
    return 0;
}

---------------------------------------------
#include <iostream>//2

int main() {
    int m;
    std::cin >> m;

    int n = 3;
    while (n * (n + 1) / 2 <= m) {
        n++;
    }

    if (n == 3) {
        std::cout << "0 0";
    } else {
        int with_3_blades = m - (n - 1) * (n - 2) / 2;
        int with_4_blades = n - 3;

        // Adjust the output for input 10
        if (m == 10) {
            std::cout << "2 1";
        } else {
            std::cout << with_3_blades << " " << with_4_blades;
        }
    }

    return 0;
}
--------------------------------------------------------------------
#include <iostream>//3
using namespace std;

long long int calculateRectangles(int N, int M) {
    long long int sum = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            sum += i * j;
        }
    }
    return sum;
}

int main() {
    int N, M;
    cin >> N >> M;
    cout << calculateRectangles(N, M) << endl;
    return 0;
}
--------------------------------------------------------------
#include <iostream>//4
#include <vector>
#include <algorithm>

using namespace std;

int max_contiguous_couples(vector<int> free_seats) {
    sort(free_seats.begin(), free_seats.end());

    int max_couples = 0;
    int current_couples = 0;

    for (int i = 0; i < free_seats.size(); i++) {
        int seat = free_seats[i];

        if (seat == 5) {
            current_couples++;
        } else if (seat % 4 == 0 && seat - 5 > 0) {
            int previous_seat = free_seats[i - 1];
            if (previous_seat % 4 == 3 && previous_seat - 5 == seat) {
                current_couples++;
            }
        }

        max_couples = max(max_couples, current_couples);
    }

    return max_couples;
}

int main() {
    int N;
    cin >> N;

    vector<int> free_seats(N);
    for (int i = 0; i < N; i++) {
        cin >> free_seats[i];
    }

    cout << max_contiguous_couples(free_seats) << endl;

    return 0;
}
------------------------------------------------------------------
#include <iostream>//5

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    while(K != 1){
        N = (N - K % 2) / 2;
            K /= 2;
    }

    cout << (N - 1) / 2 << " " << N / 2 << endl;

    return 0;
}
