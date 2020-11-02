#include "\vbs2\basic_defines.hpp"
#define __CurrentDir__ \core\addons\plugins\generic_behaviors_sei

//Class necessary for VBS to load the new addon correctly
class CfgPatches
{
	class vbs2_vbs_plugins_generic_behaviors_sei
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {vbs2_editor, vbs2_people};
		modules[] =
		{
			vbs_core_content_module
		};
	};
};

// Adds btset to list of btsets which are loaded automatically
class CfgBehaviorTrees
{
	class generic_behaviors_sei //this is an arbitrary className, it needs to be unique though
	{
		path = "\core\addons\plugins\generic_behaviors_sei\data\generic_behaviors_sei\generic_behaviors_sei.btset"; //This is the relative path to the BT-set file to load
		name = "generic_behaviors_sei"; // This is the btset name duplicated in the configuration
	};
};

class vbs_functions_base;
class CfgFunctions
{
	// Macro to build a function in sripts top folder
	#define MAKE_CORE_FUNCTION(functionName)                                 \
	class fn_vbs_generic_sei_##functionName : vbs_functions_base                     \
	{                                                                       \
		path = __CurrentDir__\data\scripts\fn_vbs_generic_sei__##functionName##.sqf;  \
	}

};

// formations
class CfgFormations
{
	class West
	{
		#include "cfgFormations.hpp"
	};

	class East : West
	{
		#include "cfgFormations.hpp"
	};

	class Civ : West
	{
		#include "cfgFormations.hpp"
	};

	class Guer : West
	{
		#include "cfgFormations.hpp"
	};
};

// Defines the new order as available from the Control AI - Military
class CfgAvailableBehaviors
{
	class generic_sei_team_move
	{
		icon = "\core\addons\plugins\generic_sei_team_move\data\generic_sei_team_move.paa";
		allowRotate = true;

		identity = "generic_team";
		displayname = "SEI FT Move";
		description = "SEI specific fireteam move";				

		//displayCondition = "\vbs2\vbs_plugins\ai\generic_behaviors_sei\data\scripts\waypointDisplayCondition.sqf";

		newOrderSubject = "NewOrder";
		
		class RootBehaviors
		{
			group[] = {"generic_behaviors_sei", "genericRoot"};
			entity[] = {"generic_behaviors_sei", "genericRoot"};
		};
		
		class Parameters
		{
			class behaviorName
			{
				displayName = "behaviorName";
				value = "move";
				type = "string";
			}
			class behaviorParameters
			{
				displayName = "behaviorParameters";
				value = "";
				type = "table";
			};
			class reportCompletedToExternal
			{
				displayName = "reportCompletedToExternal";
				value = "true";
				type = "boolean";
			};
			class debugEnabled
			{
				displayName = "debugEnabled";
				value = "false";
				type = "boolean";
			};
		};
	};
};
