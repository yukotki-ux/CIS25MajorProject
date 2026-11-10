class Task {
    private:
        string name;
        int cost;
        int duration;
        bool completed;

    public:
        Task(string name, int cost, int duration);
        void completeTask();
        bool const isCompleted();
        int const getCost();
        int const getDuration();
    }