#include "tb_defines.hpp"
//Mission:
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         	SYNC  	PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}	, 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    {}      	, {}	, 1      , {}        , 0    , "%3" },

{ 2, TEAM_BLUE, 	SPAWN_NEVER,    {1}      	, {}	, 1      , {}        , 0    , "Black_Mountain" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {4}  		  , {5}	, 1      , {}        , 0    , "Crashsite" },

{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {2}      	, {}	, 1      , {}        , 0    , "Stronghold" },

{ 5, TEAM_BLUE, 	SPAWN_NEVER,    {4}      	, {3}	, 1      , {}        , 0    , "Dump" },

{ 6, TEAM_RED, 		SPAWN_XRAY ,    {5,3}      	, {}	, 1      , {}        , 0    , "%3" },

{ 7, TEAM_RED, 		SPAWN_NEVER,    {}     		, {} 	, 1      , {}        , 0    , "" }


};
