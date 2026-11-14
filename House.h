
// This class manages house's value and status while relating to "remodel" class.
// "House" has "Room"
class House {
    private:
        int value;
        char status; //A, B, C or D
    
    public:
        int getValue();
        void updateValue(int amount);
        char getStatus();

    }