/*
	Replace your CfgPricing with this file
	Adjust, add or removed prices as needed.
*/
class CfgKarmaTradingSettings
{
	minHeroKarma = 1000;
	maxHeroKarma = 5000;
	maxHeroRank = 5;
	minBanditKarma = -1000;
	maxBanditKarma = -5000;
	maxBanditRank = 5;
	// Link Karma values to a loadout 
	karmaBandit[] = {
			{-5001,-6000, 5 },
			{-5000,-4001, 4 },
			{-4000,-3001, 3 },
			{-3000,-2001, 2 },
			{-2000,-1001, 1 }
		};
	karmaHero[] = {
			{1001, 2000, 1 },
			{2001, 3000, 2 },
			{3001, 4000, 3 },
			{4001, 5000, 4 },
			{5001, 6000, 5 }
	};
};

class CfgPricing
{
    #include "ammo.h"
    #include "arifle.h"
    #include "attachments.h"
    #include "backpacks.h"
    #include "epoch.h"
    #include "hgun.h"
    #include "helmets.h"
    #include "lmg.h"
    #include "optics.h"
    #include "sgun.h"
    #include "smg.h"
    #include "srifle.h"
    #include "uniforms.h"
    #include "vehicles.h"
    #include "vests.h"
};

