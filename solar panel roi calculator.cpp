// Solar Panel ROI Calculator in C++
// GitHub Project Version

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double installationCost;
    double monthlyElectricityBill;
    double solarCoverage;
    double annualMaintenance;
    int lifespan;

    cout << "====== Solar Panel ROI Calculator ======\n\n";

    // User Inputs
    cout << "Enter total solar panel installation cost (?): ";
    cin >> installationCost;

    cout << "Enter current monthly electricity bill (?): ";
    cin >> monthlyElectricityBill;

    cout << "Enter percentage of bill covered by solar (0-100): ";
    cin >> solarCoverage;

    cout << "Enter annual maintenance cost (?): ";
    cin >> annualMaintenance;

    cout << "Enter expected lifespan of solar panels (years): ";
    cin >> lifespan;

    // Calculations
    double annualSavings =
        (monthlyElectricityBill * 12 * (solarCoverage / 100.0))
        - annualMaintenance;

    double totalSavings = annualSavings * lifespan;

    double roi =
        ((totalSavings - installationCost) / installationCost) * 100;

    double paybackPeriod = installationCost / annualSavings;

    // Output
    cout << fixed << setprecision(2);

    cout << "\n====== ROI RESULTS ======\n";
    cout << "Annual Savings       : ?" << annualSavings << endl;
    cout << "Total Lifetime Savings: ?" << totalSavings << endl;
    cout << "ROI Percentage       : " << roi << "%" << endl;
    cout << "Payback Period       : " << paybackPeriod << " years" << endl;

    if (roi > 0)
        cout << "\nSolar investment is PROFITABLE.\n";
    else
        cout << "\nSolar investment may not be profitable.\n";

    return 0;
}
