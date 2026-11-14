// This class manages the event which happens randomely in the game and affects every classes
// It affects the remodeling, room, task, materials, and family members
// For example, the event of "water leak" can be happen in the kitchen in the class "Room" and it decreases its "status" and adds a "need" to deal with the problem.

class Event {
    private:
        string eventName;
        int costImpact;

    public:
        bool isHappening();
        void applyEvent();   
    }