#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main() {

    vector<vector<int>> A(3, vector<int>(4));
    cout << "Enter the number of items sold for each seller and item (matrix A): " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Salesman " << i + 1 << ", Product " << j + 1 << ": ";
            cin >> A[i][j];
        }
    }

 
    vector<vector<double>> B(4, vector<double>(2));
    cout << "Enter the price and commission for each item (Matrix B): " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Product " << i + 1 << ", Price: ";
        cin >> B[i][0];
        cout << "Product " << i + 1 << ", Commission: ";
        cin >> B[i][1];
    }

    vector<vector<double>> C(3, vector<double>(2, 0));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 4; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    int maxRevenueSeller = -1, minRevenueSeller = -1;
    double maxCommissionSeller = -1, minCommissionSeller = -1;
    double totalRevenue = 0, totalCommission = 0, totalMoney = 0;

    for (int i = 0; i < 3; ++i) {
        int revenue = C[i][0];
        double commission = C[i][1];
        totalRevenue += revenue;
        totalCommission += commission;
        totalMoney += revenue + commission;

        if (maxRevenueSeller == -1 || revenue > C[maxRevenueSeller][0]) {
            maxRevenueSeller = i;
        }
        if (minRevenueSeller == -1 || revenue < C[minRevenueSeller][0]) {
            minRevenueSeller = i;
        }

        if (maxCommissionSeller == -1 || commission > C[maxCommissionSeller][1]) {
            maxCommissionSeller = i;
        }
        if (minCommissionSeller == -1 || commission < C[minCommissionSeller][1]) {
            minCommissionSeller = i;
        }
    }
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "1) Seller " << maxRevenueSeller + 1 << " made the most money, seller "<< minRevenueSeller + 1 << " - less." << endl;
    cout << "2) Seller " << maxCommissionSeller + 1 << " received the largest commission, the seller "<< minCommissionSeller + 1 << " - smallest." << endl;
    cout << "3) The total amount of money received for goods sold: " << totalRevenue << endl;
    cout << "4) Amount of commissions received by sellers: " << totalCommission << endl;
    cout << "5) The total amount of money passed through the hands of sellers: " << totalMoney << endl;

    return 0;
}
