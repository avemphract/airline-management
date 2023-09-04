#include "MaintenceTeam.h"
#include <algorithm>
#include "../Airplanes/AirplaneStatus.h"

bool MaintenceTeamRequirements::isValidWorker(unsigned short taskOrder, MaintenanceWorker worker) const
{
    return false;
}

const std::vector<std::tuple<std::string, bool, RequirementTeam>> MaintenceTeamRequirements::getTeamRequirements() const
{
    return std::vector<std::tuple<std::string, bool, RequirementTeam>>();
}

MaintenceTeamRequirements::MaintenceTeamRequirements(AirplaneStatus repairAuthorization, std::vector<std::tuple<std::string, bool, RequirementTeam>> teamRequirements)
{
}


const MaintenceTeamRequirements MaintenceTeamRequirements::AFTER_FLIGHT_MAINTANCE = MaintenceTeamRequirements(
    AirplaneStatus::NEED_AFTER_FLIGHT_MAINTANENCE, 
    std::vector<std::tuple<std::string, bool, RequirementTeam>>{
            std::tuple<std::string, bool, RequirementTeam>("Team Leader", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 4 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Senior Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 3 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Mid Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 2 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Mid Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 2 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1 && worker->getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
            std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
            std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
            std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
            std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
            std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
            std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
    });

const MaintenceTeamRequirements MaintenceTeamRequirements::ROUTINE_MAINTANENCE = MaintenceTeamRequirements(
    AirplaneStatus::NEED_ROUTINE_MAINTANENCE,
    std::vector<std::tuple<std::string, bool, RequirementTeam>>{
        std::tuple<std::string, bool, RequirementTeam>("Team Leader", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 4 && worker.getPersonDetails()->isPersonAvaiable(mBeginTime, getEndTime()); }),
        std::tuple<std::string, bool, RequirementTeam>("Supervisour", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 2 && std::count_if(worker.getPersonDetails()->getDocuments().begin(), worker.getPersonDetails()->getDocuments().end(), [](Document* d) { return d->getDocumentType() == "Supervisour Certificate" && d->isValid(); }); }),
        std::tuple<std::string, bool, RequirementTeam>("Senior Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 3; }),
        std::tuple<std::string, bool, RequirementTeam>("Senior Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 3; }),
        std::tuple<std::string, bool, RequirementTeam>("Senior Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 3; }),
        std::tuple<std::string, bool, RequirementTeam>("Mid Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 2; }),
        std::tuple<std::string, bool, RequirementTeam>("Mid Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 2; }),
        std::tuple<std::string, bool, RequirementTeam>("Mid Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 2; }),
        std::tuple<std::string, bool, RequirementTeam>("Mid Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 2; }),
        std::tuple<std::string, bool, RequirementTeam>("Mid Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 2; }),
        std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1; }),
        std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1; }),
        std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", true, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1; }),
        std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1; }),
        std::tuple<std::string, bool, RequirementTeam>("Juniour Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() > 1; }),
        std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
        std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
        std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
        std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
        std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
        std::tuple<std::string, bool, RequirementTeam>("Intern Maintance Worker", false, [](const MaintenanceWorker& worker, std::time_t beginTime) { return worker.getLevel() == 1 && worker.getPersonDetails()->getAge() < 30; }),
});

bool MaintenceTeam::isValid() const
{
    return false;
}

bool MaintenceTeam::repairAirplane(Airplane& airplane)
{
    return false;
}

bool MaintenceTeam::addTeam(size_t taskIndex, MaintenanceWorker& worker)
{
    return false;
}
