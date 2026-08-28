
class UndergroundSystem {
    // id -> {startStation, startTime}
    unordered_map<int, pair<string, int>> checkIns;

    // route -> {totalTime, numberOfTrips}
    unordered_map<string, pair<int, int>> routes;

public:
    UndergroundSystem() {
    }

    void checkIn(int id, string stationName, int t) {
        checkIns[id] = {stationName, t};
    }

    void checkOut(int id, string stationName, int t) {
        string startStation = checkIns[id].first;
        int startTime = checkIns[id].second;

        string route = startStation + "#" + stationName;

        routes[route].first += (t - startTime);
        routes[route].second++;

        checkIns.erase(id);
    }

    double getAverageTime(string startStation, string endStation) {
        string route = startStation + "#" + endStation;

        return (double)routes[route].first / routes[route].second;
    }
};



/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */