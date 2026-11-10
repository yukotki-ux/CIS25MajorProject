classDiagram
    class House {
        -value : int
        -status : char //A, B, C or D
        +getValue() : int
        +updateValue(int amount) : void
        +getStatus() : char
   }

    class FamilyMember {
        -name : string
        -satisfaction : int
        -preference : string
        +getName() : string
        +updateSatisfaction(int amount) : void //check if the remodeling matches their preference
    }
    
    class Remodeling {
        -roomName : string
        -cost : int
        -duration : int
        +getCost() : int
        +completeRemodel() : void
        
    }

    class Room {
        -name : string
        +status : char
        +need : string
        +renovated() : void

    }

    class Game {
        -count : int
        -playing : bool
        +isPlaying() : bool
        +turnCount() : int
        +endGame() : void

    }

    class Task {
        -name : string
        -cost : int
        -duration : int
        -completed : bool
        +Task(string name, int cost, int duration);
        +completeTask(): void
        +isCompleted() : bool
        +getCost() : int
        +getDuration() : int
    }

    class Budget {
        -balance : int
        +getBudget() : int
        +canAfford(int cost) : bool
        +updateBudget(int amount) : void
    }

    class Material {
        -materialName : string
        -cost : int
        -lead time : int
        +getCost() : int
        +getLeadTime() : int
    }

    class Event {
        -eventName : string
        -costImpact : int
        +isHappening() : bool
        +applyEvent() : void
        
    }

    class Contractor {
        -name : string
        -reliability : int
        -speed : int
        -accuracy : int
        +getName() : string
        +getReliability() : int
        +getSpeed() : int
        +getAccuracy() : int

    }


    Game "1" *-- "1" House : owns
    Game "1" *-- "1" Budget : owns
    Game "1" *-- "1..*" FamilyMember : manages
    Game "1" o-- "0..*" Event : has
    Game "1" o-- "0..*" Remodeling : manages

    House "1" *-- "1..*" Room : contains

    Remodeling "0..*" --> "1" Room : renovates
    Remodeling "1" *-- "1..*" Task : contains
    Remodeling "0..*" --> "0..*" Material : uses
    Remodeling "0..*" --> "0..1" Contractor : hires
    Remodeling "0..*" --> "1" Budget : uses
    Remodeling "0..*" --> "1" House : improves
    Remodeling "0..*" --> "0..*" FamilyMember : affects