#include <utility>
#include <optional>

class Schedule{
    public:
        unsigned int getScheduleId() const;
        unsigned int getPersonId() const;
        std::time_t getBeginTime() const;
        std::time_t getEstimatedEndTime() const;
        std::optional<std::time_t> getEndTime() const;
        void setEndTime(std::optional<std::time_t> endTime);
        std::string getTaskName() const;
    private:
        unsigned int mScheduleId;
        unsigned int mPersonId;
        std::time_t mBeginTime;
        std::time_t mEstimatedEndTime;
        std::optional<std::time_t> mEndTime;
        std::string mTaskName;
}