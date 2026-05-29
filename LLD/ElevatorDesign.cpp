#include<iostream>
#include<vector>

enum class ElevatorState
{
    IDLE,
    MOVING_UP,
    MOVING_DOWN
};

enum class Direction
{
    UP,
    DOWN
};

class Elevator
{
private:
    int id;
    int currentFloor;
    ElevatorState state;

public:
    Elevator(int id)
        : id(id),
          currentFloor(0),
          state(ElevatorState::IDLE)
    {
    }

    int getCurrentFloor()
    {
        return currentFloor;
    }

    ElevatorState getState()
    {
        return state;
    }
};

class ElevatorRequest
{
private:
    int sourceFloor;
    int destinationFloor;

public:
    ElevatorRequest(
        int source,
        int destination)
        : sourceFloor(source),
          destinationFloor(destination)
    {
    }

    int getSourceFloor()
    {
        return sourceFloor;
    }

    int getDestinationFloor()
    {
        return destinationFloor;
    }
};

class ElevatorController
{
private:
    std::vector<Elevator*> elevators;

public:
    void addElevator(Elevator* elevator)
    {
        elevators.push_back(elevator);
    }
    
    Elevator* assignElevator(int requestedFloor)
    {
        Elevator* best = nullptr;
        int minDistance = INT_MAX;
    
        for(auto elevator : elevators)
        {
            if(elevator->getState() ==
               ElevatorState::IDLE)
            {
                int distance =
                    abs(
                        elevator->getCurrentFloor()
                        - requestedFloor);
    
                if(distance < minDistance)
                {
                    minDistance = distance;
                    best = elevator;
                }
            }
        }
    
        return best;
    }
};


