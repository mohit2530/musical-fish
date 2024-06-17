#include <iostream>

int main() {
    
    /*
     1. 4 birds are sitting on a branch. 1 flies away. How many birds are left on
     the branch?
     */
    
    // ### EXAMPLE:
    int initialNumberOfBirds = 4;
    int birdsThatFlewAway = 1;
    int remainingNumberOfBirds = initialNumberOfBirds - birdsThatFlewAway;
    
    std::cout << remainingNumberOfBirds <<std::endl;
    /*
     2. There are 6 birds and 3 nests. How many more birds are there than
     nests?
     */
    
    // ### EXAMPLE:
             int numberOfBirds = 6;
             int numberOfNests = 3;
             int numberOfExtraBirds = numberOfBirds - numberOfNests;
    std::cout << numberOfExtraBirds << std::endl;
    /*
     3. 3 raccoons are playing in the woods. 2 go home to eat dinner. How
     many raccoons are left in the woods?
     */
    
    int totalRaccoonsInWoods = 3;
    int numberOfRacoonsOnDinner = 2;
    int remainingNumberOfRacoons = totalRaccoonsInWoods - numberOfRacoonsOnDinner;
    std::cout << remainingNumberOfRacoons << std::endl;
    
    /*
     4. There are 5 flowers and 3 bees. How many less bees than flowers?
     */
    
    int totalNumberOfFlowers = 5;
    int totalNumberOfBees = 3;
    
    int idleNumberOfBees = totalNumberOfFlowers - totalNumberOfBees;
    std::cout << idleNumberOfBees <<std::endl;
    
    /*
     5. 1 lonely pigeon was eating breadcrumbs. Another pigeon came to eat
     breadcrumbs, too. How many pigeons are eating breadcrumbs now?
     */
    
    int pigeonEatingBreadcrumb = 1;
    int additionalPigeonEatingBreadcrumb = 1;
    int totalPigeonsEatingBreadcrumb = pigeonEatingBreadcrumb + additionalPigeonEatingBreadcrumb;
    std::cout << totalPigeonsEatingBreadcrumb <<std::endl;
    
    /*
     6. 3 owls were sitting on the fence. 2 more owls joined them. How many
     owls are on the fence now?
     */
    int initialOwlsSittingOnTree = 3;
    int additionalOwlsJoined = 2;
    int totalOwlsOnTree = initialOwlsSittingOnTree + additionalOwlsJoined;
    std::cout << totalOwlsOnTree <<std::endl;
    /*
     7. 2 beavers were working on their home. 1 went for a swim. How many
     beavers are still working on their home?
     */
    int initialBeaversWorking = 2;
    int totalBeaversOnSwim = 1;
    int remainingBeaversWorking = initialBeaversWorking - totalBeaversOnSwim;
    std::cout << remainingBeaversWorking <<std::endl;
    
    /*
     8. 2 toucans are sitting on a tree limb. 1 more toucan joins them. How
     many toucans in all?
     */
    
    int initialToucansOnTreeLimb = 2;
    int additionalToucanJoined = 1;
    int totalToucansOnTreeLimb = initialToucansOnTreeLimb + additionalToucanJoined;
    std::cout << totalToucansOnTreeLimb <<std::endl;
    
    /*
     9. There are 4 squirrels in a tree with 2 nuts. How many more squirrels
     are there than nuts?
     */
    
    int initialNumberOfSquirrels = 4;
    int totalNumberOfSqurrelNuts = 2;
    int totalSquirrelsWithoutNuts = initialNumberOfSquirrels - totalNumberOfSqurrelNuts;
    std::cout << totalSquirrelsWithoutNuts << std::endl;
    
    /*
     10. Mrs. Hilt found a quarter, 1 dime, and 2 nickels. How much money did
     she find?
     */
    int quater= 25;
    int dime = 10;
    int nickel = 5;
    
    int totalMoney = quater + dime + 2 *(nickel);
    std::cout << totalMoney <<std::endl;
    
    /*
     11. Mrs. Hilt's favorite first grade classes are baking muffins. Mrs. Brier's
     class bakes 18 muffins, Mrs. MacAdams's class bakes 20 muffins, and
     Mrs. Flannery's class bakes 17 muffins. How many muffins does first
     grade bake in all?
     */
    
    int firstGradeMuffinsBaked = 18;
    int secondGradeMuffinsBaked = 20;
    int thirdGradeMuffinsBaked = 17;
    
    int totalMuffinsBakedByFirstClass = firstGradeMuffinsBaked + secondGradeMuffinsBaked + thirdGradeMuffinsBaked;
    std::cout << totalMuffinsBakedByFirstClass << std::endl;
    
    /*
     12. Mrs. Hilt bought a yoyo for 24 cents and a whistle for 14 cents. How
     much did she spend in all for the two toys?
     */
    
    int totalCostOfYoyo = 24;
    int totalCostOfWhistle = 14;
    int totalMoneySpent = totalCostOfYoyo + totalCostOfWhistle;
    std::cout << totalMoneySpent << std::endl;
    
    /*
     13. Mrs. Hilt made 5 Rice Krispie Treats. She used 8 large marshmallows
     and 10 mini marshmallows.How many marshmallows did she use
     altogether?
     */
    
    int totalMarshamellows = 8;
    int totalMiniMarshmellows = 10;
    int total = totalMarshamellows + totalMiniMarshmellows;
    std::cout << total << std::endl;
    
    /*
     14. At Mrs. Hilt's house, there was 29 inches of snow, and Brecknock
     Elementary School received 17 inches of snow. How much more snow
     did Mrs. Hilt's house have?
     */
    
    int snowFallInHouse = 29;
    int snowFallInElementarySchool = 17;
    int differenceInSnowfall = snowFallInHouse - snowFallInElementarySchool;
    std::cout << differenceInSnowfall <<std::endl;
    /*
     15. Mrs. Hilt has $10. She spends $3 on a toy truck and $2 on a pencil
     case. How much money does she have left?
     */
    
    double initialMoney = 10;
    double toyTruckCost = 3;
    double remainingAmt = initialMoney - toyTruckCost;
    std::cout << remainingAmt << std::endl;
    
    /*
     16. Josh had 16 marbles in his collection. He lost 7 marbles. How many
     marbles does he have now?
     */
    
    int initialMarbles = 16;
    int additionMarbles = 7;
    int totalMarbles = initialMarbles + additionMarbles;
    std::cout << totalMarbles << std::endl;
    
    /*
     17. Megan has 19 seashells. How many more seashells does she need to
     find to have 25 seashells in her collection?
     */
    
    int acquiredSeashells = 19;
    int totalRequiredSeashells = 25;
    int remainingSeashells = totalRequiredSeashells - acquiredSeashells;
    std::cout << remainingSeashells << std::endl;
    
    /*
     18. Brad has 17 balloons. 8 balloons are red and the rest are green. How
     many green balloons does Brad have?
     */
    
    int initialBalloons = 17;
    int redBalloons = 8;
    int greenBalloons = initialBalloons - redBalloons;
    std::cout << greenBalloons <<std::endl;
    
    /*
     19. There are 38 books on the shelf. Marta put 10 more books on the shelf.
     How many books are on the shelf now?
     */
    
    int initialBooksOnShelf = 30;
    int additionalBooks = 10;
    int totalBooksOnShelf = initialBooksOnShelf + additionalBooks;
    std::cout << totalBooksOnShelf << std::endl;
    
    /*
     20. A bee has 6 legs. How many legs do 8 bees have?
     */
    
    int beeLegs = 6;
    int numberOfBees = 8;
    int totalLegsOfBees = numberOfBees * beeLegs;
    std::cout << totalLegsOfBees << std::endl;
    
    /*
     21. Mrs. Hilt bought an ice cream cone for 99 cents. How much would 2 ice
     cream cones cost?
     */
    
    double costOfIceCream = 99;
    int totalIceCreams = 2;
    double totalCost = totalIceCreams * costOfIceCream;
    double totalCostInDollars = totalCost / 100;
    std::cout << totalCostInDollars << std::endl;
    
    /*
     22. Mrs. Hilt wants to make a border around her garden. She needs 125
     rocks to complete the border. She has 64 rocks. How many more rocks
     does she need to complete the border?
     */
    
    int totalRocksRequired = 125;
    int initialRocks = 64;
    int remainingRocks = totalRocksRequired - initialRocks;
    std::cout << remainingRocks << std::endl;
    
    
    /*
     23. Mrs. Hilt had 38 marbles. She lost 15 of them. How many marbles does
     she have left?
     */
    
    int totalPlayingMarbles = 38;
    int marblesLost = 15;
    int remainingMarbles = totalPlayingMarbles - marblesLost;
    std::cout << remainingMarbles << std::endl;
    
    /*
     24. Mrs. Hilt and her sister drove to a concert 78 miles away. They drove 32
     miles and then stopped for gas. How many miles did they have left to drive?
     */
    
    int distanceToConcert = 78;
    int totalDriving = 32;
    int remainingMiles = distanceToConcert - totalDriving;
    std::cout << remainingMiles << std::endl;
    
    /*
     25. Mrs. Hilt spent 1 hour and 30 minutes shoveling snow on Saturday
     morning and 45 minutes shoveling snow on Saturday afternoon. How
     much total time did she spend shoveling snow?
     */
    
    double totalTimeSpentInMinsFirstDay = 90;
    double totalTimeSpentNextDayInMins = 45;
    double totalTimeSpentInMins = totalTimeSpentNextDayInMins + totalTimeSpentInMinsFirstDay;
    double totalTimeSpentInHours = totalTimeSpentInMins / 60;
    std::cout << totalTimeSpentInHours << std::endl;
    
    /*
     26. Mrs. Hilt bought 6 hot dogs. Each hot dog cost 50 cents. How much
     money did she pay for all of the hot dogs?
     */
    
    int totalHotDogsBought = 6;
    double totalCostOfHotDogsInCent = 60;
    double totalMoneySpentForHotDogs = totalHotDogsBought * totalCostOfHotDogsInCent;
    double totalMoneySpentForHotDogsInDollar = totalMoneySpentForHotDogs / 100;
    std::cout << totalMoneySpentForHotDogsInDollar << std::endl;
    
    /*
     27. Mrs. Hilt has 50 cents. A pencil costs 7 cents. How many pencils can
     she buy with the money she has?
     */
    
    int totalMoneyInPurse = 50;
    int costOfPencil = 7;
    // keeping int so that we ignore the decimals
    int totalPencilsBoughts = totalMoneyInPurse / costOfPencil;
    std::cout << totalPencilsBoughts << std::endl;
    
    /*
     28. Mrs. Hilt saw 33 butterflies. Some of the butterflies were red and others
     were orange. If 20 of the butterflies were orange, how many of them
     were red?
     */
    
    int totalButterflies = 33;
    int orangeButterflies = 20;
    int redButterflies = totalButterflies - orangeButterflies;
    std::cout << redButterflies << std::endl;
    
    
    /*
     29. Kate gave the clerk $1.00. Her candy cost 54 cents. How much change
     should Kate get back?
     */
    
    double totalMoneyProvided = 1;
    double totalMoneyInCent = totalMoneyProvided * 100;
    double costOfCandy = 54;
    double change = totalMoneyInCent - costOfCandy;
    std::cout << change <<std::endl;
    
    /*
     30. Mark has 13 trees in his backyard. If he plants 12 more, how many trees
     will he have?
     */
    
    int totalTreesInBackyard = 13;
    int addedTrees = 12;
    int totalTrees = totalTreesInBackyard + addedTrees;
    std::cout << totalTrees << std::endl;
    
    /*
     31. Joy will see her grandma in two days. How many hours until she sees
     her?
     */
    
    int totalTimeToSeeGrandma = 2;
    double totalTimeToSeeGrandmaInHours = totalTimeToSeeGrandma * 24;
    
    std::cout <<totalTimeToSeeGrandmaInHours <<std::endl;
    
    /*
     32. Kim has 4 cousins. She wants to give each one 5 pieces of gum. How
     much gum will she need?
     */
    
    int totalCousins = 4;
    int eachPersonGetsGum = 5;
    int totalGumsNeeded = totalCousins * eachPersonGetsGum;
    std::cout << totalGumsNeeded << std::endl;
    
    /*
     33. Dan has $3.00. He bought a candy bar for $1.00. How much money is
     left?
     */
    
    double moneyWithDan = 3;
    double moneyForCandy = 1;
    double remainingMoney = moneyWithDan - moneyForCandy;
    std::cout << remainingMoney << std::endl;
    
    /*
     34. 5 boats are in the lake. Each boat has 3 people. How many people are
     on boats in the lake?
     */
    
    int totalBoatsInLake = 5;
    int totalPersonInEachBoat = 3;
    int totalPeople = totalBoatsInLake * totalPersonInEachBoat;
    std::cout << totalPeople << std::endl;
    
    /*
     35. Ellen had 380 legos, but she lost 57 of them. How many legos does she
     have now?
     */
    
    int totalLegos = 380;
    int legosLost = 57;
    int remainingLegos = totalLegos - legosLost;
    std::cout << remainingLegos << std::endl;
    
    
    /*
     36. Arthur baked 35 muffins. How many more muffins does Arthur have to
     bake to have 83 muffins?
     */
    
    int totalMuffins = 35;
    int requiredMuffins = 83;
    int remainingMuffins = requiredMuffins - totalMuffins;
    std::cout << remainingMuffins << std::endl;
    
    /*
     37. Willy has 1400 crayons. Lucy has 290 crayons. How many more
     crayons does Willy have then Lucy?
     */
    
    int totalCrayons = 1400;
    int lucyCrayons = 290;
    int willyHas = totalCrayons - lucyCrayons;
    std::cout << willyHas << std::endl;
    
    /*
     38. There are 10 stickers on a page. If you have 22 pages of stickers, how
     many stickers do you have?
     */
    
    int totalStickers = 10;
    int numberOfPage = 22;
    int totalCombinedStickers = numberOfPage * totalStickers;
    std::cout <<  totalCombinedStickers << std::endl;
    
    /*
     39. There are 96 cupcakes for 8 children to share. How much will each
     person get if they share the cupcakes equally?
     */
    
    double totalCupcakes = 96;
    int totalChildren = 8;
    double eachPersonGets = totalCupcakes / totalChildren;
    std::cout << eachPersonGets << std::endl;
    
    /*
     40. She made 47 gingerbread cookies which she will distribute equally in
     tiny glass jars. If each jar is to contain six cookies each, how many
     cookies will not be placed in a jar?
     */
    
    int totalGingerBreads = 47;
    int eachJarHas = 6;
    int cookiesNotInJar = totalGingerBreads % eachJarHas;
    std::cout << cookiesNotInJar << std::endl;
    
    /*
     41. She also prepared 59 croissants which she plans to give to her 8
     neighbors. If each neighbor received and equal number of croissants,
     how many will be left with Marian?
     */
    
    int totalCrossiants = 57;
    int numberOfNeighbors = 8;
    int remaining = totalCrossiants % numberOfNeighbors;
    std::cout << remaining << std::endl;
    
    /*
     42. Marian also baked oatmeal cookies for her classmates. If she can
     place 12 cookies on a tray at a time, how many trays will she need to
     prepare 276 oatmeal cookies at a time?
     */
    
    int totalBakedCookies = 12;
    int requiredTotalCookies = 276;
    int totalTraysRequired = requiredTotalCookies / totalBakedCookies;
    std::cout << totalTraysRequired << std::endl;
    
    /*
     43. Marian’s friends were coming over that afternoon so she made 480
     bite-sized pretzels. If one serving is equal to 12 pretzels, how many
     servings of bite-sized pretzels was Marian able to prepare?
     */
    
    int totalPretzels = 480;
    int oneServing = 12;
    int totalMade = totalPretzels / oneServing;
    std::cout << totalMade << std::endl;
    
    /*
     44. Lastly, she baked 53 lemon cupcakes for the children living in the city
     orphanage. If two lemon cupcakes were left at home, how many
     boxes with 3 lemon cupcakes each were given away?
     */
    
    int totalBaked = 53;
    int leftAtHome = 2;
    int oneBoxContains = 3;
    int totalBoxes = (totalBaked - leftAtHome) / oneBoxContains;
    std::cout << totalBoxes << std::endl;
    
    /*
     45. Susie's mom prepared 74 carrot sticks for breakfast. If the carrots
     were served equally to 12 people, how many carrot sticks were left
     uneaten?
     */
    int totalCarrotSticks = 74;
    int totalPeopleForCarrot = 12;
    int uneatenCarrot = totalCarrotSticks % totalPeopleForCarrot;
    std::cout << uneatenCarrot << std::endl;
    
    /*
     46. Susie and her sister gathered all 98 of their teddy bears and placed
     them on the shelves in their bedroom. If every shelf can carry a
     maximum of 7 teddy bears, how many shelves will be filled?
     */
    
    int totalTeddyBears = 98;
    int oneShelfCarries = 7;
    int totalShelvesFilled = totalTeddyBears / oneShelfCarries;
    std::cout << totalShelvesFilled << std::endl;
    
    /*
     47. Susie’s mother collected all family pictures and wanted to place all of
     them in an album. If an album can contain 20 pictures, how many
     albums will she need if there are 480 pictures?
     */
    
    int totalPicsForAlbum = 20;
    int totalPics = 480;
    int albumsRequired = totalPics / totalPicsForAlbum;
    std::cout << albumsRequired << std::endl;
    
    /*
     48. Joe, Susie’s brother, collected all 94 trading cards scattered in his
     room and placed them in boxes. If a full box can hold a maximum of 8
     cards, how many boxes were filled and how many cards are there in
     the unfilled box?
     */
    
    int totalTradingCards = 94;
    int oneBoxHolds = 8;
    int totalBoxesFilled = totalTradingCards / oneBoxHolds;
    int totalUnfilled = totalTradingCards % oneBoxHolds;
    std::cout << totalBoxesFilled << std::endl;
    std::cout << totalUnfilled << std::endl;
    
    
    /*
     49. Susie’s father repaired the bookshelves in the reading room. If he has
     210 books to be distributed equally on the 10 shelves he repaired,
     how many books will each shelf contain?
     */
    
    int totalBooks = 210;
    int totalShelves = 10;
    int oneShelfContains = totalBooks / totalShelves;
    std::cout << oneShelfContains << std::endl;
    
    /*
     50. Cristina baked 17 croissants. If she planned to serve this equally to
     her seven guests, how many will each have?
     */
    
    int totalCross = 17;
    int totalGuests = 7;
    int eachHas = totalCross / totalGuests;
    std::cout << eachHas << std::endl;
    
    /*
     CHALLENGE PROBLEMS
     */
    
    /*
     Bill and Jill are house painters. Bill can paint a 12 x 14 room in 2.15 hours, while Jill averages
     1.90 hours. How long will it take the two painter working together to paint 5 12 x 14 rooms?
     Hint: Calculate the hourly rate for each painter, combine them, and then divide the total walls in feet by the combined hourly rate of the painters.
     Challenge: How many days will it take the pair to paint 623 rooms assuming they work 8 hours a day?.
     */
    double totalRoomBillPaints = 12 * 14;
    double billPaints = 2.15;
    double billPaintsInOneHour = totalRoomBillPaints / billPaints;
    
    double jillPaints = 1.90;
    double jillPaintsInOneHour = totalRoomBillPaints / jillPaints;
    
    double totalHourlyPaint = billPaintsInOneHour + jillPaintsInOneHour;
    double totalWall = totalRoomBillPaints * 623;
    double timeTook = totalWall / totalHourlyPaint;
    double timeTookInDays = timeTook / 8;
    std::cout << timeTook << std::endl;
    std::cout << timeTookInDays << std::endl;
    

    /*
     Create and assign variables to hold your first name, last name, and middle initial. Using concatenation,
     build an additional variable to hold your full name in the order of last name, first name, middle initial. The
     last and first names should be separated by a comma followed by a space, and the middle initial must end
     with a period.
     Example: "Hopper, Grace B."
     */
    
    std::string firstName = "Grace";
    std::string middleName = "B";
    std::string lastName = "Hopper";
    
    std::string fullName = lastName + ", " + firstName + " " + middleName + ".";
    std::cout << fullName << std::endl;
    
    /*
     The distance between New York and Chicago is 800 miles, and the train has already travelled 537 miles.
     What percentage of the trip has been completed?
     Hint: The percent completed is the miles already travelled divided by the total miles.
     Challenge: Display as an integer value between 0 and 100 using casts.
     */
    
    double totalDistanceFromNewYorkToCicago = 800;
    double travelledMiles = 537;
    double percentageOfTripCompleted = (travelledMiles / totalDistanceFromNewYorkToCicago) * 100;
    std::cout << percentageOfTripCompleted << std::endl;
    return 0;
}
