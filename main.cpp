#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: lion
//  action 1: the lion eats prey
lion.eatPrey();
//  action 2: the lion sleeps in a cave
lion.sleepInCave();
//  action 3: the lion feeds her children
lion.feedChildren();

//  2)
//  Noun: dolphin
//  action 1: the dolphin jumps out of water
lion.jumpOutWater();
//  action 2: the dolphin fights a shark
dolphin.fightShark();
//  action 3: the dolphin becomes sentient
dolphin.discoverReality();

//  3)
//  Noun: Brooklyn
//  action 1: Brooklyn snows
brooklyn.heavySnow();
//  action 2: Brooklyn opens a new park
brooklyn.createPark();
//  action 3: Brooklyn just hosted a marathon
brooklyn.hostMarathon();

//  4)
//  Noun: Michael Jordan
//  action 1: Michael Jordan releases a new shoe
mj.releaseNewShoe();
//  action 2: MJ shoots three point attempt
mj.shootThreePointer();
//  action 3: MJ answers post game questions
mj.answerReporter();

//  5)
//  Noun: Spongebob
//  action 1:  Spongebob makes a krabby patty
  spongebob.cookKrabbyPatty();
//  action 2: Spongebob feeds Gary
  spongebob.feedGary();
//  action 3: Spongebob tries to catch jellyfish
  spongebob.jellyfishCatchAttempt();

//  6)
//  Noun: maid
//  action 1: a Maid dusts
  maid.dust();
//  action 2: a Maid sweeps the floor
  maid.sweepFloor();
//  action 3: a maid washes towels
  maid.washTowel();

//  7)
//  Noun: skateboard
//  action 1: a skateboard breaks
  skateboard.destroy();
//  action 2: a skateboard get its wheels replaced
  skateboard.changeWheels();
//  action 3: a skateboard flips over
  skateboard.flip();

//  8)
//  Noun: EQ
//  action 1: an EQ is bypassed
  EQ.bypass();
//  action 2: an EQ is automated via touch
  EQ.touchAutomation();
//  action 3: an EQ is muted
  EQ.mute();

//  9)
//  Noun: Reverb
//  action 1: a reverb has its predelay modulated
  reverb.modulatePreDelay();
//  action 2: a reverb has a high pass filter added
reverb.activateHighPassFilter();
//  action 3: a reverb has its serial code activated for a paid subscription
  rever.activateSubscriber();

//  10)
//  Noun: football
//  action 1: a football is kicked off
football.kickoff()
//  action 2: a football is spiked after a touchdown
football.spike()
//  action 3: a football has its color changed for a special event
football.changeColor()

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
