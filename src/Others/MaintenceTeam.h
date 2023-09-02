#pragma once

#include "../People/Workers/MaintenanceWorker.h"
#include "../Airports/Airport.h"
#include "../Airplanes/AirplaneStatus.h"


typedef bool (*RequirementTeam)(const MaintenanceWorker&);

class MaintenceTeamRequirements {
    public:
        static const MaintenceTeamRequirements AFTER_FLIGHT_MAINTANCE;
        static const MaintenceTeamRequirements ROUTINE_MAINTANENCE;
        static const MaintenceTeamRequirements FULL_MAINTANENCE;
        bool isValidWorker(unsigned short taskOrder, MaintenanceWorker worker) const;
        const std::vector<std::tuple<std::string, bool, RequirementTeam>> getTeamRequirements() const;
    private:
        MaintenceTeamRequirements(AirplaneStatus repairAuthorization, std::vector<std::tuple<std::string, bool, RequirementTeam>> teamRequirements);
        AirplaneStatus mRepairAuthorization;
        std::vector<std::tuple<std::string, bool, RequirementTeam>> mTeamRequirements;
};

class MaintenceTeam {
public:
    bool isValid() const;
    bool repairAirplane(Airplane& airplane);
    bool addTeam(size_t taskIndex, MaintenanceWorker& worker);
private:
    MaintenceTeamRequirements mRequirements;
    AirplaneStatus mAirPlaneStatus;
    Airport mLocation;
    std::map<unsigned short,MaintenanceWorker> mTeam;
};