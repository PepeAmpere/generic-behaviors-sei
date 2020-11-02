class SEIGenericFormationBase
{
	name = "SEI Generic base class formation";
	class Fixed
	{
		FormationPositionInfo0[] = {0,0,0,0};
	};

	class Pattern
	{
		FormationPositionInfo1[] = {-1,0,0,0};
	};
	
	reorderRules[] = {
		0,2,
		0,3,
		0,4,
		0,5,
		0,6,
		0,7,
		0,8,
		0,9,
		0,1
	};
};

class SEIGenericTeamWedgeLeft: SEIGenericFormationBase
{
	name = "SEI Generic Team Wedge Left";
	class Fixed
	{
		FormationPositionInfo0[] = {0, 0, 0, 0, true, "TL"};
		FormationPositionInfo1[] = {0, 5, -3, 6, true, "MG"};
		FormationPositionInfo2[] = {0, -5, -3, -6, true, "GL"};
		FormationPositionInfo3[] = {0, -10, -6, -12, true, "MKSM"};
		FormationPositionInfo4[] = {0, 10, -6, 12, true, "Any"};
		FormationPositionInfo5[] = {0, -15, -9, 18, true, "Any"};
	};
};

class SEIGenericTeamWedgeRight: SEIGenericFormationBase
{
	name = "SEI Generic Team Wedge Right";
	class Fixed
	{
		FormationPositionInfo0[] = {0, 0, 0, 0, true, "TL"};
		FormationPositionInfo1[] = {0, -5, -3, 6, true, "MG"};
		FormationPositionInfo2[] = {0, 5, -3, -6, true, "GL"};
		FormationPositionInfo3[] = {0, 10, -6, -12, true, "MKSM"};
		FormationPositionInfo4[] = {0, -10, -6, 12, true, "Any"};
		FormationPositionInfo5[] = {0, 15, -9, 18, true, "Any"};
	};
};

class SEIGenericTeamScattered: SEIGenericFormationBase
{
	name = "SEI Generic Team Scattered";
	class Fixed
	{
		FormationPositionInfo0[] = {0, 0, 0, 0, true, "TL"};
		FormationPositionInfo1[] = {0, 3, -2, 6, true, "MG"};
		FormationPositionInfo2[] = {0, -5, -3, -6, true, "GL"};
		FormationPositionInfo3[] = {0, 8, -6, -12, true, "MKSM"};
		FormationPositionInfo4[] = {0, -10, 4, -12, true, "MKSM"};
		FormationPositionInfo5[] = {0, 12, -8, -12, true, "MKSM"};
	};
};

class SEIGenericSquadOrderLeft: SEIGenericFormationBase
{
	name = "SEI Generic Squad Order Left";
	class Fixed
	{
		FormationPositionInfo0[] = {0, 0, 0, 0, true, "LD"};
		FormationPositionInfo1[] = {0, -15, -10, 0, true, "FF"};
		FormationPositionInfo2[] = {0, -30, -20, 0, true, "FF"};
		FormationPositionInfo3[] = {0, -45, -30, 0, true, "FF"};
		FormationPositionInfo4[] = {0, -60, -40, 0, true, "FF"};
		FormationPositionInfo5[] = {0, -75, -50, 0, true, "FF"};
	};
};

class SEIGenericSquadOrderRight: SEIGenericFormationBase
{
	name = "SEI Generic Squad Order Right";
	class Fixed
	{
		FormationPositionInfo0[] = {0, 0, 0, 0, true, "LD"};
		FormationPositionInfo1[] = {0, 15, -10, 0, true, "FF"};
		FormationPositionInfo2[] = {0, 30, -20, 0, true, "FF"};
		FormationPositionInfo3[] = {0, 45, -30, 0, true, "FF"};
		FormationPositionInfo4[] = {0, 60, -40, 0, true, "FF"};
		FormationPositionInfo5[] = {0, 75, -50, 0, true, "FF"};
	};
};
