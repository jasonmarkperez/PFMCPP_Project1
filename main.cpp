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
