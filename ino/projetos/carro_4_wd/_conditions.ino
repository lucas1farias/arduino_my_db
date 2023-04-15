

if (option == 5 || option == 10 || option == 15 || option == 20 || option == 25)
  {
    goForward(fast, thisDurationLonger);
  }
  else if (option == 30 || option == 35 || option == 40 || option == 45 || option == 50)
  {
    goBackward(fast, thisDurationLonger);
  }
  //  } else if (option == 2) {
  //    sampleMove(fast, thisDuration);
  //  }

  else if (option == 7)
  {
    runEvenEnginesForward(fast, thisDuration);
  }
  else if (option == 17)
  {
    runEvenEnginesBackward(fast, thisDuration);
  }
  else if (option == 27)
  {
    runOddEnginesForward(fast, thisDuration);
  }
  else if (option == 37)
  {
    runOddEnginesBackward(fast, thisDuration);
  }

  else if (option == 1)
  {
    runEnginesTwoThreeFirstWay(fast, thisDuration);
  }
  else if (option == 2)
  {
    runEnginesTwoThreeSecondWay(fast, thisDuration);
  }
  else if (option == 3)
  {
    runEnginesOneFourFirstWay(fast, thisDuration);
  }
  else if (option == 4)
  {
    runEnginesOneFourSecondWay(fast, thisDuration);
  }

  else if (option == 11)
  {
  }
  else if (option == 22)
  {
    turnLeft(fast, thisDurationLonger);
  }
  else if (option == 33)
  {
    turnRight(fast, thisDurationLonger);
  }
