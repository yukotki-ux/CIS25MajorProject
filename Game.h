// This class manages game's turn counts and a game's start/end

class Game {
    private:
        int count;
        bool playing;

    public:
        bool isPlaying();
        int turnCount();
        void endGame();

    }