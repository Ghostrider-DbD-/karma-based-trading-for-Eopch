# karma-based trading for Eopch
 Adds a check for Karma to traders used to determine what can be bought

 Many thanks to He-Man and Grahame for helpful discussions.
 All credit for the code and config files included goes to the Arm3 Epoch team.
 I have only modified their work to add new functionalities.

 Installation:

 copy the contents of epoch.code and epoch.config folders into your epoch.mapname folder
 Merge the contents of init.sqf with your init.sqf, if you have one, or simply copy init.sqf into your epoch.mapname folder.

 How it works:
 - for each item that can be bought or sold by epoch traders the script will check to see if there is a value for karma that must be exceeded for you to purchase the item. Karma is maintained by epoch and changes based on your actions. This karma based trading provides a reward for continue good (or bad) behavior.

 - to add karma checks simply add parameters in the appropriate conig file using the config below as an example
  class sr25_epoch
    {
        price = 500;
        tax = 1.0; 
        banditAccess = 4;
        heroAccess = 4;             
    };
