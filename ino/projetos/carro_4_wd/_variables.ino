

int controls[] = {
    5, 10, 15, 20, 25,
    30, 35, 40, 45, 50,
    7, 17, 27, 37,
    1, 2, 3, 4,
    11, 22, 33};
int delays[] = {50, 150, 250, 350, 450, 550, 650, 750, 850, 950, 1050};
int delaysLonger[] = {700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700};


// Loop
int index = random(14);
int index2 = random(10);
int index3 = random(11);
int option = controls[index];
int thisDuration = delays[index2];
int thisDurationLonger = delays[index3];
