// This class manages each contractor's information such as reliability, speed, and accuracy.
It affects "Task" and "House". Its reliability affects the task completion, its speed affects duration, and its accuracy affects "House" value.

class Contractor {
    private:
        string name;
        int reliability;
        int speed;
        int accuracy;
    public:
        string getName();
        int getReliability();
        int getSpeed();
        int getAccuracy();

        void performTask(Task& task);
    }