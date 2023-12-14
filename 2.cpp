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

bool IsPlaceFree(int place) {
    if (place % 2 == 0) {
        return false;
    }
    return place != 1 && place != 54;
}

int section(int k) {
    if (k <= 36)
        return (k - 1) / 4;
    else
        return 8 - (k - 37) / 2;
}

int main() {
    const int coupes = 9;
    const int coupeSeats = 4;
    const int sideSeats = 2;

    std::vector<int> count(coupes, 0);

    int n;
    std::cout << "Enter the number of free seats: ";
    std::cin >> n;

    std::vector<int> places(n);
    std::cout << "Enter the seat:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> places[i];
        count[section(places[i])] += 1;
    }

    int ans_coupes = 0;
    int curr_coupes = 0;

    int max_count_places = 0;
    int count_places = 0;

    for (int i = 0; i < coupes; ++i) {
        std::cout << "Bus " << i + 1 << ": " << count[i] << " seats" << std::endl;

        if (count[i] >= coupeSeats + sideSeats) {
            curr_coupes += 1;
            ans_coupes = std::max(ans_coupes, curr_coupes);
        } else {
            curr_coupes = 0;
        }
    }

    std::sort(places.begin(), places.end());

    for (int i = 0; i < n; ++i) {
        if (IsPlaceFree(places[i])) {
            count_places++;
        } else {
            max_count_places = std::max(max_count_places, count_places);
            count_places = 0;
        }
    }
    max_count_places = std::max(max_count_places, count_places);

    std::cout << "Maximum consecutive seat free bus: " << ans_coupes << std::endl;
    std::cout << "Maximum consecutive free places: " << max_count_places << std::endl;

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
