/*
	Merge this file with your init.sqf if you have one.
	Or include it in your epoch.mapname folder if you do not.
*/



if(hasInterface) then{

	GRG_fnc_getCurrKarmaRank = {
		params[["_config","CfgKarmaTradingSettings"]];
		private _minHeroKarma = getNumber(missionConfigFile >> _config >> "minHeroKarma");
		private _maxHeroKarma = getNumber(missionConfigFile >> _config >> "maxHeroKarma");
		private _maxHeroRank = getNumber(missionConfigFile >> _config >> "maxHeroRank");
		private _minBanditKarma = getNumber(missionConfigFile >> _config >> "minBanditKarma");
		private _maxBanditKarma = getNumber(missionConfigFile >>_config >> "maxBanditKarma");
		private _maxBanditRank = getNumber(missionConfigFile >> _config >> "maxBanditRank");		
		//diag_log format["isNill EPOCH_totalKarma = %1",isNil "EPOCH_totalKarma"];
		//diag_log format["isNil GRG_karma = %1",isNil "GRG_karma"];
		private _currKarma = missionNamespace getVariable ["EPOCH_totalKarma",0];
		diag_log format["(35) _currKarma %3 | _maxHeroKarma %1 | _maxHeroRank %2",_maxHeroKarma,_maxHeroRank, _currKarma];
		//private _karma = 5500;
		private "_karmaRange";
		if (_currKarma >= 0) then 
		{
			_karmaRange = getarray(missionConfigFile >> "CfgKarmaTradingSettings" >> "karmaHero"); 
			diag_log format["(40)  _currKarma = %1 | _karmaRange = %2",_currKarma,_karmaRange];
		};

		if (_currKarma < 0) then 
		{
			_karmaRange = getarray(missionConfigFile >> "CfgKarmaTradingSettings" >> "karmaBandit"); 
		};
		private _karmaRank = 0;
		if (_currKarma >= _maxHeroKarma) then 
		{
			_karmaRank = _maxHeroRank;
			diag_log format["_karmaRank set to _maxHeroRank = %1",_maxHeroRank];
		} else {
			if (_currKarma < _maxBanditKarma) then 
			{
				_karmaRank = _maxBanditRank;
			} else {
				diag_log format["(58)  _karmaRange = %1",_karmaRange];
				{
					_x params["_min","_max","_rank"];
					if (_currKarma >= _min && _currKarma <= _max) exitWith 
					{
						_karmaRank = _rank;
						diag_log format["_karmaRank set to _rank = %1",_rank];
					};
				} forEach _karmaRange;
			};
		};
		diag_log format["(67) _karmaRank (final) = %1",_karmaRank];
		_karmaRank
	};

	GRG_fnc_canBuyItem = {
		params["_item"];
		if (isNil "GRG_karmaRank") then {["CfgKarmaTradingSettings"] call GRG_fnc_getCurrKarmaRank};
		private _karma =  missionNamespace getVariable ["EPOCH_totalKarma",0];												
		//private _karma = 100;
		private _banditAccess = getNumber(missionConfigFile >> "CfgPricing" >> _item >> "banditAccess");			
		private _heroAccess = getNumber(missionConfigFile >> "CfgPricing" >> _item >> "heroAccess");
		private _errormsg = "";
		private _allowAdd = true;
		if (GRG_karmaRank < _banditAccess && _karma < 0) then {
			_allowAdd = false; 
			_errormsg = "You are not bandit enough!";
		};
		if (GRG_karmaRank < _heroAccess && _karma > 0) then {
			_allowAdd = false; 
			_errormsg = "You need more heroic deeds!";							
		};
		private _return = [_allowAdd,_errormsg];
		//_m = format["_item %1 | _karma %2 | _banditAccess %3 | _heroAccess %4 | _return %5",_item,_karma,_banditAccess,_heroAccess,_return];
		//systemChat _m;
		//diag_log _m;
		_return
	};
};