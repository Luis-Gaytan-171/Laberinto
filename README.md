Labyrinth

A labyrinth is a complex structure of passages and walls designed to challenge navigation and problem-solving abilities. Its main features include multiple paths, some of which end in dead ends while others lead to the exit or goal.
This symbolic and physical structure has fascinated humanity since ancient times, appearing in myths, legends, and artworks across various civilizations.
For instance, labyrinths were significant in Cretan culture, where the labyrinth of Minos in Greek mythology was known as the prison of the Minotaur, a creature half-man and half-bull. 
This story is linked to the hero Theseus, who managed to defeat the Minotaur with the help of a thread given to him by Ariadne, which he used to retrace his way out.
Furthermore, labyrinths have held symbolic roles in different cultures, representing spiritual journeys, the quest for knowledge, and the struggle between order and chaos. 
In the Middle Ages, labyrinths were commonly found on the floors of cathedrals, serving as symbols of pilgrimage and spiritual contemplation.
This fascination continues today, with labyrinths appearing in recreational contexts, artistic expressions, and as metaphors for personal or social challenges.

I think this is an interesting game to do in c++ because i can create diferent kinds not only of maps but also different types of solutions,
making the gameplay more dynamic and varied. Personally i get inspired by Warren Robinett who makes the game Adventure, I know him because of the movie Ready player one
and I think the labyrinth is a very tricky and fun way to chill out of the world so thats why I want to make one.

Class Diagram

![labyrinth drawio (1)](https://github.com/user-attachments/assets/b644eef4-2b2d-420f-a774-b15faafb2d04)

Classes explanation:

-Game:
  Is the principal class of the program, its coposed by the classes Player, Achievement and Maze, and its functiin its to have control on whats happening in the game
  
-Player:
  Records the x and y postion of the player and its methods let the player to move in game
  
-Achievemnt:
 Take control of things taht you reach in the game like an easter egg
 
-Maze:
  Composed by the calss zone, the class maze is what controls all of the valid movements of the user, and also generates the map
  
-Zone:
  This class tells you the type of zone where you are and let you interect whit it
  
-SecretZone:
  Related by inheritance to the class zone, this class generates a zone where you can find the easter egg of the game
