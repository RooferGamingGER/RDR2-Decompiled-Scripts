#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	PED::SET_PED_RESET_FLAG(Global_35, 304, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			iVar0 = func_2(Global_35, 0);
			if ((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("weapon_melee_torch")) && iVar0 != joaat("weapon_fishingrod"))
			{
				if (Global_36604 != 0)
				{
				}
				else
				{
					WEAPON::_0x6929E22158E52265(Global_35, 0, &Global_36605);
				}
			}
			iVar1 = func_2(Global_35, 1);
			if (WEAPON::_0xC212F1D05A8232BB(iVar1) || WEAPON::_0xDDC64F5E31EEDAB6(iVar1))
			{
				if (Global_36604 != 0)
				{
				}
				else
				{
					WEAPON::_0x6929E22158E52265(Global_35, 1, &Global_36609);
				}
			}
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
		}
		else
		{
			Global_36605 = { func_3() };
			Global_36609 = { func_3() };
		}
	}
	Global_1935689->f_10226 = 0;
	Global_1935689->f_10227 = 0;
	iVar2 = -1723036365;
	if (func_4(0))
	{
		iVar2 = joaat("shop");
	}
	while (true)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 304, true);
		switch (func_5())
		{
			case 0:
				if (func_6())
				{
					func_7();
				}
				if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-4058091, iVar2) != 0)
				{
				}
				else
				{
					func_8(1);
				}
				break;
			case 1:
				if (func_6())
				{
					func_7();
				}
				if (((!UIAPPS::_IS_APP_ACTIVE(-4058091) || &Global_1935689 == 2) || Global_16) || PED::IS_PED_DEAD_OR_DYING(Global_35, true))
				{
					func_8(2);
				}
				else if (func_9() != -1)
				{
				}
				else
				{
					func_10();
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				break;
			case 2:
				if (func_6())
				{
					func_7();
					func_1();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	UIAPPS::_CLOSE_APP_BY_HASH(-4058091);
	func_11(0);
	Global_1935689->f_1 = 0;
	Global_36632 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

struct<4> func_3()
{
	struct<4> Var0;

	return Var0;
}

bool func_4(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

int func_5()
{
	return Global_1935689->f_10226;
}

bool func_6()
{
	return Global_1935689->f_10227;
}

void func_7()
{
	Global_1935689->f_10227 = 0;
}

void func_8(int iParam0)
{
	if (Global_1935689->f_10226 != iParam0)
	{
		Global_1935689->f_10226 = iParam0;
		func_12();
	}
}

int func_9()
{
	return Global_1572887->f_12;
}

void func_10()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_12()
{
	Global_1935689->f_10227 = 1;
}
