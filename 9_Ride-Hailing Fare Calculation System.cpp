#include <iostream>
using namespace std;
int main() {
    double distance, rideTime, waiting; int hour; char premium, cancelled;
    cout << "Distance (km): "; cin >> distance;
    cout << "Ride Time (min): "; cin >> rideTime;
    cout << "Waiting Time (min): "; cin >> waiting;
    cout << "Hour (0-23): "; cin >> hour;
    cout << "Premium Member? (y/n): "; cin >> premium;
    cout << "Driver Cancelled after Accept? (y/n): "; cin >> cancelled;

    double fare = 150 + (distance * 50) + (rideTime * 10) + (waiting * 10);
    if (hour >= 22 || hour < 6) fare += fare * 0.20; // Night charges
    if (premium == 'y') fare -= fare * 0.10;
    cout << "Final Fare: Rs. " << fare << endl;
    if (cancelled == 'y') cout << "Penalty Rs. 300 charged to Driver";
    return 0;
}
