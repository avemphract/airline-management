cmake_minimum_required(VERSION 3.21)

project(AirlineProjects VERSION 1.0)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(Sources
    src/Airplanes/Airplane.cpp
    src/Airplanes/Seat.cpp

    src/Airports/Airport.cpp
    src/Airports/AirlineRoad.cpp

    src/Others/MaintenceTeam.cpp
    src/Others/Route.cpp

    src/People/Passengers/Passenger.cpp

    src/People/Workers/CrewWorker.cpp
    src/People/Workers/GroundServicesWorker.cpp
    src/People/Workers/MaintenanceWorker.cpp
    src/People/Workers/PilotWorker.cpp

    src/People/Document.cpp
    src/People/Person.cpp

    src/Places/City.cpp
    src/Places/Country.cpp

    src/main.cpp
)

set(Headers
    src/Airplanes/Airplane.h
    src/Airplanes/AirplaneStatus.h
    src/Airplanes/Seat.h

    src/Airports/Airport.h
    src/Airports/AirlineRoad.h

    src/Others/MaintenceTeam.h
    src/Others/Route.h

    src/People/Passengers/Passenger.h

    src/People/Workers/CrewWorker.h
    src/People/Workers/GroundServicesWorker.h
    src/People/Workers/MaintenanceWorker.h
    src/People/Workers/PilotWorker.h

    src/People/Document.h
    src/People/Person.h

    src/Places/City.h
    src/Places/Country.h
)

add_executable(AirlineProjects ${Headers} ${Sources})