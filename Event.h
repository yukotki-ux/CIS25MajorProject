class Event {
    private:
        string eventName;
        int costImpact;

    public:
        bool isHappening();
        void applyEvent();   
    }