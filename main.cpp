#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: cat
 action 1: eats
 action 2: walks
 action 3: purs
 */

cat.eat();
cat.walk();
cat.purr();

/*
 2)
 Noun: synthesizer
 action 1: plays melody
 action 2: plays rhythm
 action 3: turnsOn
 */

synthesizer.playMelody();
synthesizer.playRhythm();
synthesizer.turnOn();

/*
 3)
 Noun: chef
 action 1: chops
 action 2: sautees
 action 3: grates
 */

chef.chop();
chef.sautee();
chef.grate();

/*
 4)
 Noun: dealer
 action 1: shuffles
 action 2: deals
 action 3: makes bet
 */

dealer.shuffle();
dealer.deal();
dealer.makeBet();

/*
 5)
 Noun: phone
 action 1: dial
 action 2: call
 action 3: hangup
 */

phone.dial();
phone.call();
phone.hangup();

/*
 6)
 Noun: house
 action 1: open front door
 action 2: set alarm
 action 3: turn on heater
 */

house.openFrontDoor();
house.setAlarm();
house.turnOnHeater();

/*
 7)
 Noun: bus
 action 1: drive
 action 2: toggle door open or closed
 action 3: stop
 */

bus.drive();
bus.toggleDoor();
bus.stop();

/*
 8)
 Noun: coffee maker
 action 1: grind beans
 action 2: heat water
 action 3: brew
 */

coffeeMaker.grindBeans();
coffeeMaker.heatWater();
coffeeMaker.brew();

/*
 9)
 Noun: stereo
 action 1: play music
 action 2: increase volume
 action 3: change music source
 */

stereo.playMusic();
stereo.setVolume();
stereo.changeSource();

/*
 10)
 Noun: light
 action 1: light on
 action 2: dim
 action 3: light off
 */

light.on();
light.dim();
light.off();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}



/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};

/*
 1)
 */

struct Person{
  int age;
  double heightInCM;
  int numberOfPets;

  struct Pet {
    bool isCat;
    bool isDog;
    int age;
  };

  bool isPetHungry( Pet pet);
};

/*
 2)
 */

struct Synthesizer {
  int polyphony;
  bool multitimbral;

  struct Sequencer {
    bool isPlaying = 0;
    bool playForward = 1;
    bool playReverse = 0;
    void playSequence(int sequence);
  };

  Sequencer sequencer;
  void playNote(int frequency);
};

/*
 3)
 */

struct Playlist {
  bool isSharable = 1;
  int songs;
  double idOfCoverImage = 8717241; //ID for default image

  bool addSongToPlaylist(int id);
  bool deleteSongFromPlaylist(int id);
  int listSongsInPlaylist();
};

/*
 4)
 */

struct Student{
  float currentGPA;

  struct Class {
    float currentGrade;
    int daysMissed;
    void addAssignment(double assignmentID, int grade);
    void addMissedDay(bool excused);
  };

  double calculateGPA();
  double calculateTotalDaysMissed();
};

/*
 5)
 */

struct RadioShow {
  char showDays;
  int showTime;
  double hostID;

  void updateShowTime(double hostID, char updatedShowDay, int updatedShowTime);
};


/*
 6)
 */

struct Driver{
  bool licenseIsValid;
  int numberOfViolations;
  int numberOfCars;

  struct Car {
    bool isRegistered;
    bool isSmogged;

    bool registerCar();
    bool smogCar();
  };

  bool isDriverAllowedToDrive();
  int addCarToDriver(Car car);
};


/*
 7)
 */

struct Bike {
  int numberOfGears;
  bool hasDiscBrakes;
  bool hasCarbonFrame;
};

/*
 8)
 */

struct Warddrobe {
  int numberOfSweaters;
  int numbersOfShirts;

  bool addItemsToWardrobe(int quantityOfSweaters, int quantityOfShirts);
};

/*
 9)
 */

struct Patient {
  double patientId;
  bool hasHadAnnual;
  double doctorId;

  struct Visit {
    int lastVisitDate;
    float icdCode;
    char icdPrefix;
  };

  bool addVisit(Visit visit, double doctor);
  /* why can't I use doctorId as a default? */
};

/*
 10)
 */

struct Artist {
  double genreId;
  bool isActive;

  struct Album {
    int numberOfTracks;
    bool isReleased;
  };

  bool addAlbumToArtist(int numberOfTracks, bool isReleased);
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

