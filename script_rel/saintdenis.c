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
	int iLocal_9 = 0;
	bool bLocal_10 = false;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	struct<27> Local_14 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 24;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 1;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 1065353216;
	var uLocal_171 = 1119092736;
	var uLocal_172 = 1092616192;
	var uLocal_173 = 1085276160;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	int iLocal_176 = 0;
	struct<45> Local_177[9];
	var uLocal_583 = 0;
	var uLocal_584[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_602 = false;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_665 = NULL;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	bool bLocal_670 = false;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	bool bLocal_680 = false;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683[7] = { 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_691 = false;
	bool bLocal_692 = false;
	bool bLocal_693 = false;
	int iLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = -1;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = -1;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	int iLocal_762[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_769 = false;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_602 = true;
	iLocal_679 = -1;
	iLocal_770 = -1;
	iLocal_771 = 1;
	iLocal_774 = 20000;
	iLocal_777 = vScriptParam_0.x;
	iLocal_775 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_776 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_776)
		{
			iLocal_776 = 0;
			func_4(iLocal_777, &iLocal_775);
			switch (iLocal_775)
			{
				case 0:
					iLocal_775 = 1;
					break;
				case 1:
					func_5(iLocal_777);
					if (func_7(func_6(iLocal_777)))
					{
						func_8(func_6(iLocal_777), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), func_9(iLocal_777));
					iVar1 = func_10(iLocal_777);
					if (iVar1 != -1)
					{
						Global_1935183->f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_778 = (MISC::GET_GAME_TIMER() + iLocal_774);
					iLocal_775 = 2;
					break;
				case 2:
					if (func_11() || iLocal_778 < MISC::GET_GAME_TIMER())
					{
						func_12(iLocal_777);
						iLocal_778 = (MISC::GET_GAME_TIMER() + iLocal_774);
						iLocal_775 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_777) || iLocal_778 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_777);
						iLocal_778 = (MISC::GET_GAME_TIMER() + iLocal_774);
						iLocal_775 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_777) || iLocal_778 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_777);
						iLocal_778 = (iLocal_774 + MISC::GET_GAME_TIMER());
						iLocal_775 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iLocal_777)))
					{
						if (func_17(func_6(iLocal_777), 4) && !iLocal_778 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_18(iLocal_777) || iLocal_778 < MISC::GET_GAME_TIMER())
							{
								func_19(iLocal_777, 4);
								iLocal_778 = (iLocal_774 + MISC::GET_GAME_TIMER());
								iLocal_775 = 7;
							}
							Jump @870; //curOff = 518
							if (iLocal_778 < MISC::GET_GAME_TIMER() || (func_20() != 0 || Global_1051260->f_3790))
							{
								func_21(iLocal_777);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_777);
								func_28(iLocal_777);
								func_29();
								func_30();
								iLocal_775 = 8;
							}
							Jump @870; //curOff = 622
							func_31(iLocal_777);
							func_32();
							iLocal_775 = 9;
							Jump @870; //curOff = 641
							func_33(Global_1898004);
							func_34(iLocal_777, Global_1898004);
							iLocal_775 = 10;
							Jump @870; //curOff = 668
							func_35(iLocal_777);
							if (func_20() != -1)
							{
							}
							else
							{
								HUD::_0x8BC7C1F929D07BF3(1833957607);
							}
							func_19(iLocal_777, 8);
							if (func_36(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_37(32);
							}
							iLocal_775 = 11;
							Jump @870; //curOff = 741
							if (func_38(iLocal_777))
							{
								iLocal_776 = (1000 + MISC::GET_GAME_TIMER());
							}
							func_39(Global_1898004, iLocal_777);
							func_40(iLocal_777);
							func_19(iLocal_777, 8);
							if (func_41())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1888801)[iLocal_777 /*35*/])->f_10);
							if (((*Global_1888801)[iLocal_777 /*35*/])->f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1888801)[iLocal_777 /*35*/])->f_11);
							}
							Jump @870; //curOff = 851
							func_42(iVar0);
							iVar0++;
						}
						if (((*Global_1888801)[iLocal_777 /*35*/])->f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(((*Global_1888801)[iLocal_777 /*35*/])->f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
			}
		}
	}

void func_1()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_42(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
}

int func_3()
{
	return 1;
}

void func_4(int iParam0, int iParam1)
{
	if (!func_36(16))
	{
		return;
	}
	if (Global_1894899->f_7 == 0)
	{
		func_37(16);
		return;
	}
	if (!func_43(iParam0))
	{
		Global_1894899->f_7 = 0;
		func_37(16);
		return;
	}
	if (func_44(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_45(8);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_45(2);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_45(16);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			func_45(4);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			func_45(1);
			*iParam1 = 11;
			return;
		}
	}
}

void func_5(int iParam0)
{
}

int func_6(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

bool func_7(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_8(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

int func_9(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 38:
			iVar0 = -34953917;
			break;
		case 82:
			iVar0 = -1182515549;
			break;
		case 69:
			iVar0 = -180439396;
			break;
		case 61:
			iVar0 = -380981263;
			break;
		case 110:
			iVar0 = 960614592;
			break;
		case 5:
			iVar0 = -896916581;
			break;
		case 35:
			iVar0 = 503372696;
			break;
		case 105:
			iVar0 = 1004478670;
			break;
		case 26:
			iVar0 = -1545648199;
			break;
		case 76:
			iVar0 = -379634634;
			break;
		case 92:
			iVar0 = 288297518;
			break;
		case 56:
			iVar0 = 1812404612;
			break;
		case 78:
			iVar0 = 1827444358;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

int func_11()
{
	int iVar0;

	iLocal_603 = ((*Global_1888801)[5 /*35*/])->f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_603, 3);
	func_46(iLocal_603, 0, 0, 0);
	iLocal_604 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2714.648f, -1285.207f, 50.173f, 0f, 0f, 25f, 12.259f, 9.427f, 4.002f, "SDN-m_volGunsmith");
	iLocal_605 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2716.798f, -1284.737f, 49.46929f, 0f, 0f, -155.898f, 3.382181f, 1.741518f, 1.678f, "SDN-m_volGunsmithPrompt");
	iLocal_606 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2721.924f, -1281.781f, 49.68018f, 0f, 0f, 27.50082f, 2.604466f, 8.359895f, 3.813055f, "SDN-m_volGunsmithPorch");
	iLocal_634 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2713.302f, -1287.348f, 55.73129f, 0f, 0f, -154.72f, 21.799f, 13.459f, 15.193f, "SDN-m_volGunsmithOwned");
	VOLUME::_0xB469CFD9E065EB99(iLocal_604, 10016);
	iLocal_607 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGunsmithOfflimits Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_607, 2716.952f, -1287.544f, 49.46929f, 0f, 0f, -155.898f, 4.360659f, 1.741518f, 1.678f);
	VOLUME::_0x39816F6F94F385AD(iLocal_607, 2710.5f, -1287.142f, 50.21229f, 0f, 0f, 25f, 3.074021f, 9.427f, 3.163f);
	iLocal_620 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2553.141f, -1164.299f, 55.07949f, 0f, 0f, -90.293f, 18.31693f, 12.58955f, 4.791f, "SDN-m_volTailorOwner");
	iLocal_621 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2554.85f, -1169.459f, 53.92649f, 0f, 0f, 89.804f, 2.031777f, 3.197688f, 2.484f, "SDN-m_volTailorPrompt");
	iLocal_622 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2555.342f, -1166.591f, 53.92649f, 0f, 0f, 89.804f, 1.641972f, 2.211613f, 2.484f, "SDN-m_volTailorOfflimits");
	iLocal_623 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volTailorPARENT");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_623, iLocal_620);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_623, iLocal_622);
	VOLUME::_0xB469CFD9E065EB99(iLocal_623, 10019);
	iLocal_611 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2826.795f, -1316.664f, 47.5f, 0f, 0f, 49.75f, 18.75406f, 7.946727f, 6.97787f, "SDN-m_volGeneralStore");
	iLocal_612 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2825.75f, -1318.25f, 46.5f, 0f, 0f, 140f, 3f, 1f, 2f, "SDN-m_volGeneralStorePrompt");
	iLocal_614 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2824.25f, -1319.25f, 46.25f, 0f, 0f, 140f, 4f, 1f, 1.25f, "SDN-m_volGeneralStoreOffLimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_611, 10014);
	iLocal_613 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGeneralStorePorch Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_613, 2831.25f, -1320.236f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 6.642959f, 3.509136f);
	VOLUME::_0x39816F6F94F385AD(iLocal_613, 2822.573f, -1312.954f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 9.205815f, 3.509136f);
	iLocal_616 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2655.185f, -1180.077f, 54.07192f, 0f, 0f, 0f, 9.196758f, 6.114635f, 3.576711f, "SDN-m_volBarberShop");
	iLocal_617 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2655.359f, -1180.46f, 53.28771f, 0f, 0f, 0f, 6.583728f, 4.267162f, 2.03105f, "SDN-m_volBarberPrompt");
	iLocal_618 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volBarberPorch Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_618, 2661.405f, -1180.077f, 53.38316f, 0f, 0f, 0f, 2.748698f, 7.856023f, 3.576711f);
	VOLUME::_0x39816F6F94F385AD(iLocal_618, 2648.97f, -1178.597f, 53.38316f, 0f, 0f, 0f, 2.748698f, 9.535893f, 3.576711f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_616, 10006);
	iLocal_643 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volVegMarket Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_643, 2842.875f, -1226.905f, 49.94888f, 0f, 0f, -6.134115f, 11.54989f, 6.402104f, 7.299754f);
	VOLUME::_0x39816F6F94F385AD(iLocal_643, 2840.582f, -1230.514f, 50.87685f, 0f, 0f, -35.12744f, 11.84795f, 7.163202f, 9.132706f);
	iLocal_644 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2842.382f, -1224.84f, 48.28931f, 0f, 0f, -4.719481f, 3.839659f, 2.450074f, 3.736892f, "SDN-m_volVegMarketPrompt");
	iLocal_645 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2816.753f, -1324.524f, 46.45f, 0f, 0f, 49.75f, 4.595f, 2.43f, 2.869f, "SDN-m_volFrenchMarket");
	iLocal_646 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2836.302f, -1305.196f, 46.90116f, 0f, 0f, -39.45339f, 12.6513f, 9.796144f, 4.036131f, "SDN-m_volFrenchMarket02");
	iLocal_647 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2837.245f, -1306.1f, 47.2232f, 0f, 0f, -36.91755f, 2.950097f, 7.146157f, 3.243663f, "SDN-m_volFrenchMarketPrompt02");
	iLocal_637 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_637, 2748.327f, -1397.359f, 46.234f, 0f, 0f, 24.583f, 4.62f, 3.944f, 2.741917f);
	VOLUME::_0x39816F6F94F385AD(iLocal_637, 2746.954f, -1394.676f, 46.234f, 0f, 0f, 24.583f, 2.197f, 2.146f, 2.742f);
	VOLUME::_0x39816F6F94F385AD(iLocal_637, 2749.686f, -1400.236f, 46.234f, 0f, 0f, 24.583f, 1.971f, 2.636f, 2.742f);
	iLocal_638 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_638, 2747.206f, -1395.105f, 46.214f, 0f, 0f, 22.919f, 1.779f, 1.111f, 2.494324f);
	VOLUME::_0x39816F6F94F385AD(iLocal_638, 2749.444f, -1399.819f, 46.214f, 0f, 0f, 22.919f, 1.767f, 1.472f, 2.494324f);
	iLocal_639 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2748.29f, -1397.222f, 46.214f, 0f, 0f, 25.95989f, 4.162762f, 3.173493f, 2.117f, "SDN - m_volPostOfficeOFF");
	VOLUME::_0xB469CFD9E065EB99(iLocal_637, 10018);
	iLocal_640 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficeNoCombat Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_640, 2739.465f, -1399.159f, 45.69f, 0f, 0f, 24.504f, 22.224f, 9.58f, 6.554f);
	VOLUME::_0x39816F6F94F385AD(iLocal_640, 2737.356f, -1394.378f, 47.02f, 0f, 0f, 24.737f, 5.686f, 1.805f, 3.673f);
	func_47();
	iLocal_625 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.034f, -1450.197f, 48.076f, 0f, 0f, 0f, 6.704965f, 28.73499f, 6.621f, "SDN Horse Shop - m_volHorseShop");
	iLocal_626 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN Horse Shop - m_volHorseShopOutsideDoor Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_626, 2502.26f, -1435.017f, 45.37257f, 0f, 0f, 0f, 3.869675f, 2.62296f, 7.47769f);
	VOLUME::_0x39816F6F94F385AD(iLocal_626, 2499.42f, -1450.354f, 45.37257f, 0f, 0f, -90f, 3.869675f, 2.62296f, 7.47769f);
	VOLUME::_0x39816F6F94F385AD(iLocal_626, 2502.348f, -1465.799f, 45.37257f, 0f, 0f, 180f, 3.869675f, 2.62296f, 7.47769f);
	func_48(9, iLocal_626);
	VOLUME::_0xB469CFD9E065EB99(iLocal_625, 10017);
	iLocal_669 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volIndGuardDogOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2597.014f, -1453.302f, 47.84009f, 0f, 0f, -35.27248f, 13.32053f, 38.94104f, 13.77784f);
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2594.038f, -1466.641f, 47.84009f, 0f, 0f, 89.60727f, 12.63065f, 19.94241f, 13.77784f);
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2581.743f, -1471.003f, 47.84009f, 0f, 0f, 89.60727f, 3.533205f, 8.003942f, 13.77784f);
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2582.623f, -1467.664f, 47.84009f, 0f, 0f, -35.60653f, 6.672962f, 8.003942f, 13.77784f);
	VOLUME::_0x39816F6F94F385AD(iLocal_669, 2593.001f, -1445.323f, 47.84009f, 0f, 0f, 55.78225f, 7.109884f, 5.264667f, 13.77784f);
	iLocal_619 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2683.454f, -1400.018f, 46.693f, -1.313f, -1.416f, 67.454f, 4.909f, 5.2f, 4.113f, "Saint Denis - newspaper boy");
	iLocal_627 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2645.735f, -1295.139f, 53.79828f, 0f, 0f, 25.62823f, 16.5815f, 20.83208f, 5.240817f, "Saint Denis - m_volBank");
	iLocal_628 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2644.218f, -1292.576f, 52.36508f, 0f, 0f, 25.62823f, 2.356534f, 1.366835f, 2.623696f, "Saint Denis - m_volBankPrompt");
	iLocal_629 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2645.618f, -1295.548f, 51.55162f, 0f, 0f, 0f, 2.535386f, 2.647964f, 2.654926f, "Saint Denis - m_volBankShopOfflimits Agg");
	iLocal_674 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volRiverBoatGuardArea");
	VOLUME::_0x39816F6F94F385AD(iLocal_674, 2788.009f, -1499.647f, 45.91699f, 0f, 0f, -59.52556f, 28.86597f, 15.03598f, 14.77563f);
	VOLUME::_0x39816F6F94F385AD(iLocal_674, 2807.164f, -1500.584f, 45.91699f, 0f, 0f, 179.899f, 28.86597f, 15.03598f, 14.77563f);
	iLocal_627 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_49(0), func_50(0), func_51(0), "BRL_SAINTDENIS - Bank");
	VOLUME::_0xB469CFD9E065EB99(iLocal_627, 10005);
	iLocal_677 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2839.348f, -1229.419f, 47.30768f, 0f, 0f, -26.82762f, 22.30358f, 30.06492f, 16.24477f, "Saint Denis - m_volSlumsMarketHorseAvoidance");
	POPULATION::_0xB56D41A694E42E86(iLocal_677, 393217, 0, 0, -1, -1, 0);
	iLocal_608 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2720f, -1230.25f, 51f, 0f, 0f, -90f, 10f, 8f, 4f, "SDN-m_volDoctor");
	iLocal_609 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2720f, -1232f, 50f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volDoctorPrompt");
	iLocal_610 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2721.5f, -1233f, 50f, 0f, 0f, 0f, 1f, 3.5f, 3f, "SDN-m_volDoctorOffLimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_608, 10011);
	iLocal_630 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2767.35f, -1417.88f, 43.96f, 0f, 0f, -35.20718f, 55.10648f, 55.98696f, 21.39363f, "SDN-m_volTrainStation");
	VOLUME::_0xB469CFD9E065EB99(iLocal_630, 10020);
	iLocal_675 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2734.174f, -1119.755f, 50.10792f, 0f, 0f, 0f, 5.762633f, 7.941937f, 4.04453f, "St. Denis - m_volPhotoStudio");
	iLocal_676 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2734.174f, -1119.957f, 50.10792f, 0f, 0f, 0f, 5.762633f, 6.069339f, 4.04453f, "St. Denis - m_volPhotoStudioPrompt");
	iLocal_624 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2546.452f, -1301.997f, 51.59172f, 0f, 0f, 0.496382f, 18.19264f, 24.24748f, 8.938443f, "Saint Denis - m_volTheatre");
	POPULATION::_0xB56D41A694E42E86(iLocal_624, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_624, 10208, 0, 0, -1, -1, 0);
	iLocal_678 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(2607.1f, -1253.1f, 52.9f, 300f, 3f, 3f, 0, 6f, 10f, 25f, 7.5f);
	iLocal_615 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2857.228f, -1199.688f, 47.8205f, 0f, 0f, 4.503f, 10.98f, 10.95572f, 7.601785f, "SDN - m_volFence");
	iLocal_635 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.36f, -1200.223f, 49.71552f, 0f, 0f, 4.313612f, 2.547739f, 1.659313f, 2.393255f, "SDN - m_volFencePrompt");
	iLocal_636 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.542f, -1202.452f, 49.78863f, 0f, 0f, 4.313612f, 2.547739f, 1.326916f, 2.393255f, "SDN - m_volFenceCounterOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_615, 10013);
	iLocal_631 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-Cemetery-Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2700.761f, -1102.983f, 50.71395f, 0f, 0f, 0.216256f, 56.07924f, 9.712024f, 9.222456f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2763.792f, -1031.355f, 46.77443f, 0f, 0f, -0.624653f, 69.38274f, 16.03568f, 7.964019f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2728.395f, -1068.828f, 46.80749f, 0f, 0f, 179.1824f, 105.5484f, 62.22727f, 8.774147f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2785.364f, -1058.214f, 46.63797f, 0f, 0f, 89.47796f, 34.10864f, 25.3308f, 7.36563f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_631, 2783.674f, -1084.674f, 47.11552f, 0f, 0f, -37.88909f, 11.44402f, 18.43804f, 3.770358f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2677.399f, -1052.453f, 45.53098f, 0f, 0f, -33.10271f, 19.00153f, 27.72343f, 8.265499f);
	VOLUME::_0x39816F6F94F385AD(iLocal_631, 2681.971f, -1079.012f, 45.86315f, 0f, 0f, -77.70405f, 51.40699f, 30.2015f, 14.18493f);
	POPULATION::_0xB56D41A694E42E86(iLocal_631, 2048, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_631, 2048, 0, 0, -1, -1, 0);
	func_52();
	iLocal_681 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.495f, -1309.387f, 50.70366f, 0f, 0f, 0f, 17f, 9f, 7f, "sd_police_station");
	iLocal_682 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.091f, -1308.705f, 47.9537f, 0f, 0f, 0f, 16.88976f, 16.00587f, 10f, "SDN - m_volLawPoliceStationLoitering");
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_682, 5, 1);
	iLocal_641 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2819.564f, -1331.075f, 46.45f, 0f, 0f, 49.75f, 8.176f, 6.124f, 2.869f, "SDN-m_volButcher");
	iLocal_642 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2817.843f, -1329.871f, 46.45f, 0f, 0f, 49.75f, 2.5f, 1.877f, 2f, "SDN-m_volButcherPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_641, 10008);
	iLocal_648 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2696.853f, -1353.716f, 50.90947f, -0.01f, 7E-06f, 39.03817f, 25f, 9.1f, 9f, "SDN - m_volMagicLanternTheatre");
	POPULATION::_0xB56D41A694E42E86(iLocal_648, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_648, 10208, 0, 0, -1, -1, 0);
	iLocal_671 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.552f, -1224.573f, 47.5f, 0f, 0f, 0f, 6.381909f, 6.088969f, 3.5f, "SDN-m_volTrapper");
	iLocal_672 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.5f, -1225.328f, 47.5f, 0f, 0f, 0f, 3f, 2f, 3f, "SDN-m_volTrapperPrompt");
	iLocal_673 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.5f, -1222.75f, 47.5f, 0f, 0f, 0f, 3f, 2.5f, 3f, "SDN-m_volTrapperOffLimits");
	iLocal_650 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictLoitering Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2401.805f, -1199.688f, 50.64869f, 0f, 0f, 89.35063f, 118.7466f, 27.85054f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2404.337f, -1183.499f, 50.6487f, 0f, 0f, 89.5351f, 8.550712f, 187.7067f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2461.883f, -1136.172f, 50.64869f, 0f, 0f, 0f, 278.0189f, 27.85054f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2493.894f, -1198.237f, 50.6487f, 0f, 0f, -179.2395f, 22.47914f, 148.257f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2311.967f, -1157.098f, 50.6487f, 0f, 0f, -2.1579f, 20.14263f, 77.43121f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2450.991f, -1255.936f, 50.6487f, 0f, 0f, 74.44216f, 17.99708f, 81.91428f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2404.273f, -1283.045f, 50.6487f, 0f, 0f, 162.6364f, 27.31752f, 67.13039f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_650, 2432.95f, -1310.865f, 50.6487f, 0f, 0f, 71.7864f, 17.99708f, 81.91428f, 75.92666f);
	iLocal_651[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2427.054f, -1284.265f, 49.2916f, 0f, 0f, -15.29399f, 23.856f, 58.70475f, 12.94626f, "SDN-m_volGardenDistrictTrespassing 0");
	iLocal_651[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 1 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[1]), 2448.448f, -1286.899f, 49.2916f, 0f, 0f, -15.29399f, 17.29098f, 48.36654f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[1]), 2456.016f, -1310.996f, 49.2916f, 0f, 0f, -15.29399f, 16.53504f, 5.606594f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[1]), 2455.733f, -1288.545f, 49.2916f, 0f, 0f, -178.5714f, 16.65417f, 45.1132f, 18.53969f);
	iLocal_651[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 2 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[2]), 2362.462f, -1272.869f, 49.2916f, 0f, 0f, -19.75965f, 60.68886f, 48.63572f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[2]), 2389.465f, -1278.762f, 49.2916f, 0f, 0f, 164.0191f, 13.08261f, 54.88486f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[2]), 2364.107f, -1246.863f, 49.2916f, 0f, 0f, -89.30434f, 15.33103f, 78.01559f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[2]), 2339.069f, -1267.846f, 49.2916f, 0f, 0f, -0.4259f, 28.2545f, 35.02214f, 18.52822f);
	iLocal_651[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 3 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[3]), 2361.655f, -1164.18f, 49.2916f, 0f, 0f, -90.15806f, 27.47045f, 82.17483f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[3]), 2354.933f, -1148.675f, 49.2916f, 0f, 0f, 75.14153f, 13.61488f, 64.51537f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[3]), 2331.474f, -1143.846f, 49.2916f, 0f, 0f, -90.15805f, 27.47045f, 21.4971f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[3]), 2344.552f, -1139.157f, 49.2916f, 0f, 0f, -111.0944f, 3.614755f, 17.73002f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[3]), 2345.342f, -1138.515f, 49.2916f, 0f, 0f, 39.12743f, 3.614755f, 17.73002f, 20.96592f);
	iLocal_651[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 4 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[4]), 2400.034f, -1058.885f, 49.2916f, 0f, 0f, 0.018814f, 55.618f, 80.51579f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[4]), 2401.558f, -1073.348f, 49.2916f, 0f, 0f, 0.018814f, 52.17577f, 99.82372f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[4]), 2401.558f, -1014.455f, 49.2916f, 0f, 0f, 0.018814f, 5.173525f, 9.729424f, 18.52822f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_651[4]), 2401.313f, -1002.282f, 39.19f, 0f, 0f, 0f, 9.068625f, 9.340483f, 18.87085f);
	iLocal_651[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2451.604f, -1078.587f, 49.2916f, 0f, 0f, 0.018814f, 47.07628f, 90.20814f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 5");
	iLocal_651[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 6 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[6]), 2488.193f, -1058.567f, 49.2916f, 0f, 0f, 0.018814f, 24.72538f, 21.73822f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[6]), 2493.978f, -1092.539f, 49.2916f, 0f, 0f, 0.018814f, 37.74252f, 62.8319f, 18.52822f);
	iLocal_651[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2539.709f, -1096.017f, 49.2916f, 0f, 0f, 0.018814f, 52.81096f, 55.85768f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 7");
	iLocal_651[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2597.531f, -1096.083f, 49.2916f, 0f, 0f, 0.018814f, 30.5856f, 56.0564f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 8");
	iLocal_651[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2623.401f, -1074.223f, 49.2916f, 0f, 0f, 0.018814f, 43.08669f, 27.58172f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 9");
	iLocal_651[10] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 10 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[10]), 2629.527f, -1105.324f, 49.2916f, 0f, 0f, 0.018814f, 40.67762f, 37.41682f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[10]), 2651.13f, -1110.501f, 49.2916f, 0f, 0f, 0.018814f, 3.892076f, 27.00792f, 18.52822f);
	iLocal_651[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2453.628f, -1164.804f, 52.55637f, 0f, 0f, 179.9622f, 72.70865f, 27.57841f, 19.55484f, "SDN-m_volGardenDistrictTrespassing 11");
	iLocal_651[12] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 12 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[12]), 2479.08f, -1220.485f, 52.55637f, 0f, 0f, -179.7821f, 20.63473f, 59.85671f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[12]), 2471.073f, -1249.139f, 52.55637f, 0f, 0f, -16.01828f, 17.98121f, 4.191609f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[12]), 2465.776f, -1238.28f, 52.55637f, 0f, 0f, -89.74155f, 16.83455f, 6.001091f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[12]), 2468.223f, -1225.058f, 52.55637f, 0f, 0f, -114.8564f, 14.11476f, 6.010783f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_651[12]), 2484.649f, -1251.897f, 52.55637f, 0f, 0f, 178.8598f, 9.602062f, 4.226469f, 19.55484f);
	iVar0 = 0;
	while (iVar0 < iLocal_651)
	{
		VOLUME::_0x3EFABB21E14A6BD1(&(iLocal_651[iVar0]), 2, 1);
		VOLUME::_0x3EFABB21E14A6BD1(&(iLocal_651[iVar0]), 3, 1);
		iVar0++;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_666 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedRegistration Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_666, 2351.493f, -1215.674f, 52.55637f, 0f, 0f, 179.9622f, 103.357f, 46.93462f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_666, 2289.215f, -1216.538f, 45.98805f, 0f, 0f, 0f, 24.45309f, 6.611898f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_666, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 17.01238f, 24.97074f, 32.63914f);
		iLocal_668 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2331.856f, -1216.377f, 44.63484f, 0f, 0f, 0f, 11.67815f, 5.418246f, 2.162155f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_668, 2337.601f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_668, 2326.144f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2379.45f, -1206.713f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2375.269f, -1216.244f, 48.15978f, 0f, 0f, 0f, 38.31001f, 18.0602f, 24.88261f);
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2379.45f, -1225.62f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		VOLUME::_0x39816F6F94F385AD(iLocal_668, 2364.137f, -1231.286f, 48.31032f, 0f, 0f, 0f, 15.13832f, 2.382603f, 7.528201f);
		iLocal_667 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedRestriction Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_667, iLocal_668);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2351.483f, -1228.943f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 20f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2351.501f, -1203.041f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 21.08849f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2327.945f, -1216.194f, 52.55637f, 0f, 0f, 179.9622f, 56.37261f, 5.997283f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2289.417f, -1216.377f, 45.98805f, 0f, 0f, 0f, 22.04649f, 5.418246f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 15.4733f, 22.61529f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2398.721f, -1216.24f, 52.55637f, 0f, 0f, 179.9622f, 8.560711f, 5.997283f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_667, 2351.493f, -1215.559f, 51.74344f, 0f, 0.411779f, 179.9622f, 104.655f, 47.92646f, 10.28843f);
		sLocal_665 = "BRONTE";
		LAW::_CREATE_GUARD_ZONE(sLocal_665);
		LAW::_0x8C598A930F471938(sLocal_665, iLocal_666);
		LAW::_0x35815F372D43E1E5(sLocal_665, iLocal_667);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_665, iLocal_667);
		LAW::_0xA1B0E6301E2E02A6(sLocal_665, iLocal_668);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_665, 2376.87f, -1216.214f, 47.3213f);
		LAW::_0xA8A74AA79FB67159(sLocal_665, iLocal_666);
	}
	iLocal_770 = func_53(2834.069f, -1229.412f, 46.6618f, 0f, 0f, 0f, 18f, 18f, 18f, 1065353216 /* Float: 1f */);
	iLocal_772 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volBankWindowBlocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_772, 2644.869f, -1281.59f, 52.684f, 0f, 0f, 26f, 7.327f, 4.785f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772, 2635.472f, -1286.07f, 52.58f, 0f, 0f, 26f, 6.885f, 4.545f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_772, 2633.45f, -1294.192f, 52.515f, 0f, 0f, 114f, 9.058f, 4.339f, 3f);
	iLocal_773 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGunsmithWindowBlocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_773, 2707.66f, -1288.135f, 49.768f, 0f, 0f, 115.25f, 8.19f, 2.586f, 2.34f);
	return 1;
}

void func_12(int iParam0)
{
	iParam0 = iParam0;
}

bool func_13(int iParam0)
{
	iParam0 = iParam0;
	return !STREAMING::_0xCF45DF50C7775F2A();
}

void func_14(int iParam0)
{
	int iVar0[4];
	int iVar5;
	int iVar6[4];
	int iVar11[4];

	iParam0 = iParam0;
	func_54();
	if (func_20() == -1)
	{
		func_55();
		func_56(-516807739, 1);
		func_56(-777091906, 1);
		func_56(-875333368, 1);
		func_56(1313209843, 1);
		func_56(1291327218, 1);
		func_56(1587886668, 1);
		func_56(895866323, 1);
		func_56(1130131904, 1);
		func_56(-3733011, 1);
		func_56(913143609, 1);
		func_56(622515348, 1);
		func_56(-634437954, 1);
		func_56(-777462925, 1);
		func_57(945612176, 1, 0);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(426813831) && !func_58(31))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(426813831, true);
		}
		func_56(1401130182, 1);
		func_56(-1582225124, 1);
		func_56(957998097, 1);
		func_56(1440476271, 1);
		func_56(463894517, 1);
		func_56(895396725, 1);
		func_56(-43861138, 1);
		func_56(260726717, 1);
		func_56(-1864410491, 1);
		func_56(-2103132656, 1);
		func_56(515307058, 1);
		func_56(2049189737, 1);
		func_56(1214137310, 1);
		func_56(1462821251, 1);
		func_56(883203179, 1);
		func_56(1123170566, 1);
		func_56(287888768, 1);
		func_56(534737645, 1);
		func_56(-31117447, 1);
		func_56(681362779, 1);
		func_56(981199129, 1);
		func_56(-183337932, 1);
		func_56(-993485919, 1);
		func_56(714041173, 1);
		func_56(-120290336, 1);
		func_56(-443916980, 1);
		func_56(-213583679, 1);
		func_56(1881469563, 1);
		func_56(1072042494, 1);
		func_56(1282026246, 1);
		func_56(64755943, 1);
		iVar0[0] = -929446589;
		iVar0[1] = 1995743734;
		iVar0[2] = 1711767580;
		iVar0[3] = -1779376146;
		func_59(1);
		func_60(5, &iVar0, 2);
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			func_61(&(iVar0[iVar5]), 1, 0, 0, 0, 0, 0, 0);
			iVar5++;
		}
		func_56(-1137392295, 1);
		func_56(-894606774, 1);
		func_56(1140042273, 1);
		func_56(1136437687, 1);
		func_56(-1248137864, 1);
		func_56(-165507760, 1);
		func_56(-637159859, 1);
		func_56(-926477360, 1);
		func_56(1716899875, 1);
		func_56(-1251534382, 1);
		func_56(-1716919724, 1);
		func_56(-1946335493, 1);
		func_56(2081859374, 1);
		func_56(1839303236, 1);
		func_56(1840778346, 1);
		func_56(2138484711, 1);
		func_56(-1267558038, 1);
		func_56(-961462809, 1);
		func_56(-2001944097, 1);
		func_56(-1696700862, 1);
		func_56(-17027456, 1);
		func_56(156648244, 1);
		func_56(-743286807, 1);
		func_56(-92962943, 1);
		func_61(-1677906128, 0, 0, 0, 1, 0, 0, 0);
		func_61(-1497938780, 0, 0, 0, 1, 0, 0, 0);
		func_61(777217026, 1, -1f, 0, 0, 0, 0, 0);
		func_61(1236966084, 1, 1f, 0, 0, 0, 0, 0);
		func_61(-1357945492, 1, 1f, 0, 0, 0, 0, 0);
		func_61(-1657159231, 1, 0.9f, 0, 0, 0, 0, 0);
		func_56(4672147, 1);
		func_56(1466300623, 1);
		func_56(-17775075, 1);
		func_56(904082413, 1);
		func_56(1814232526, 1);
		func_61(1074183412, 1, 0.85f, 0, 0, 0, 0, 0);
		func_56(-1811333998, 1);
		func_56(619011656, 1);
		func_56(-1303437386, 1);
		func_56(922364198, 1);
		func_56(-1017427261, 1);
		iVar6[0] = 544106233;
		iVar6[1] = 340151973;
		iVar6[2] = -317441493;
		iVar6[3] = -2128813450;
		func_61(544106233, 1, 0, 0, 0, 0, 0, 0);
		func_61(340151973, 1, 0, 0, 0, 0, 0, 0);
		func_61(534819197, 1, 0, 0, 0, 0, 0, 0);
		func_61(836064614, 1, 0, 0, 0, 0, 0, 0);
		func_61(2053545201, 1, 0, 0, 0, 0, 0, 0);
		func_61(1449678065, 1, 0, 0, 0, 0, 0, 0);
		func_61(-826896261, 1, 0, 0, 0, 0, 0, 0);
		func_61(627391959, 1, 0, 0, 0, 0, 0, 0);
		func_61(-317441493, 1, 0, 0, 0, 0, 0, 0);
		func_61(-2128813450, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(544106233, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(340151973, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(534819197, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(836064614, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(2053545201, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(1449678065, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-826896261, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(627391959, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-317441493, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-2128813450, 0);
		func_62(5, 0, iLocal_624, &iVar6, -1, 50);
		func_62(9, 0, iLocal_624, &iVar6, -1, 50);
		func_62(6, 0, iLocal_624, &iVar6, -1, 50);
		func_62(11, 0, iLocal_624, &iVar6, -1, 50);
		func_62(13, 0, iLocal_624, &iVar6, -1, 50);
		func_62(14, 0, iLocal_624, &iVar6, -1, 50);
		func_62(15, 0, iLocal_624, &iVar6, -1, 50);
		func_62(7, 0, iLocal_624, &iVar6, -1, 50);
		func_62(8, 0, iLocal_624, &iVar6, -1, 50);
		func_62(16, 0, iLocal_624, &iVar6, -1, 50);
		func_62(17, 0, iLocal_624, &iVar6, -1, 50);
		func_62(18, 0, iLocal_624, &iVar6, -1, 50);
		func_62(19, 0, iLocal_624, &iVar6, -1, 50);
		func_62(12, 0, iLocal_624, &iVar6, -1, 50);
		func_62(10, 0, iLocal_624, &iVar6, -1, 50);
		func_62(20, 0, iLocal_624, &iVar6, -1, 50);
		func_62(0, 0, iLocal_624, &iVar6, 0, 200);
		func_62(1, 0, iLocal_624, &iVar6, 1, 200);
		func_62(4, 0, iLocal_624, &iVar6, 2, 200);
		func_62(2, 0, iLocal_624, &iVar6, 3, 200);
		func_62(3, 0, iLocal_624, &iVar6, 4, 200);
		if (!func_63(559573222))
		{
			iVar11[0] = -2034821814;
			iVar11[1] = -786191838;
			iVar11[2] = -1518382426;
			iVar11[3] = -223351546;
		}
		else
		{
			iVar11[0] = 235202295;
			iVar11[1] = -71941542;
			iVar11[2] = -723815263;
			iVar11[3] = 1920184275;
		}
		func_61(&(iVar11[0]), 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(&(iVar11[0]), 0);
		func_61(&(iVar11[1]), 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(&(iVar11[1]), 0);
		func_61(&(iVar11[2]), 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(&(iVar11[2]), 0);
		func_61(&(iVar11[3]), 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(&(iVar11[3]), 0);
		func_64(625976453, 1, 0);
		func_64(1929232348, 1, 0);
		func_65(-278745837);
		func_62(21, 1, iLocal_648, &iVar11, -1, 50);
		func_62(22, 1, iLocal_648, &iVar11, -1, 50);
		func_62(23, 1, iLocal_648, &iVar11, -1, 50);
		func_62(24, 1, iLocal_648, &iVar11, -1, 50);
		func_62(25, 1, iLocal_648, &iVar11, -1, 50);
		func_62(26, 2, iLocal_648, &iVar11, -1, 50);
		func_62(27, 2, iLocal_648, &iVar11, -1, 50);
		func_62(28, 2, iLocal_648, &iVar11, -1, 50);
		func_62(29, 2, iLocal_648, &iVar11, -1, 50);
		func_62(30, 2, iLocal_648, &iVar11, -1, 50);
		if (func_66())
		{
			bLocal_602 = (!func_58(34) || func_58(43));
		}
		if (bLocal_602)
		{
			func_67(-785605431);
		}
		else
		{
			func_68(-785605431);
		}
		func_69(&uLocal_719, 947, 12, "", joaat("chuckwagon000x"), 2828.576f, -1331.005f, 46.3125f, 146.2f, 0, 0);
		func_69(&uLocal_739, 936, 13, "", joaat("wagondairy01x"), 2811.872f, -1280.704f, 47.0827f, -126.16f, 0, 0);
	}
	else
	{
		func_70(-516807739, 1);
		func_70(-777091906, 1);
		func_70(-875333368, 1);
		func_70(1313209843, 1);
	}
	func_71(0, "", "", "", "", 2741.693f, -1265.625f, 79.65331f, "SD_SINGLE_TOLL");
	func_72(9, 0, 0);
	func_72(12, 0, 0);
	func_72(19, 0, 0);
	func_57(-1080627546, 1, 0);
	func_57(-1847672446, 1, 0);
}

bool func_15(int iParam0)
{
	bool bVar0;

	bVar0 = true;
	HUD::_0xF66090013DE648D5("SCSCAUD");
	HUD::_0xF66090013DE648D5("SCSFAUD");
	HUD::_0xF66090013DE648D5("STDRGAU");
	HUD::_0xF66090013DE648D5("RESAMAU");
	HUD::_0xF66090013DE648D5("RERIAUD");
	if (!HUD::_0xD0976CC34002DB57("SCSCAUD"))
	{
		bVar0 = false;
	}
	if (!HUD::_0xD0976CC34002DB57("SCSFAUD"))
	{
		bVar0 = false;
	}
	if (!HUD::_0xD0976CC34002DB57("STDRGAU"))
	{
		bVar0 = false;
	}
	if (!HUD::_0xD0976CC34002DB57("RESAMAU"))
	{
		bVar0 = false;
	}
	if (!HUD::_0xD0976CC34002DB57("RERIAUD"))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_73();
	}
	return bVar0;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
}

bool func_17(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] && iParam1) != 0;
}

bool func_18(int iParam0)
{
	return func_74(iParam0, -1, -1, 0);
}

void func_19(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

int func_20()
{
	return Global_1572887->f_12;
}

void func_21(int iParam0)
{
	iParam0 = iParam0;
}

void func_22()
{
	func_75(0, iLocal_627);
	if (func_20() == -1)
	{
		func_76(0);
	}
}

int func_23(int iParam0, bool bParam1)
{
	if (func_77(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_78(5000))
		{
			return 1;
		}
	}
	switch (func_79(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_24()
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_80(27, &vVar0, 1);
	func_81(&vVar0, 1, 1);
	func_80(11, &vVar0, 1);
	func_81(&vVar0, 1, 1);
}

void func_25()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (func_20() == 0)
		{
		}
	}
}

void func_26()
{
	func_82(2, 2633.455f, -1226.72f, 52.3796f, iLocal_632, 5);
	func_82(1, 2796.278f, -1168.035f, 46.924f, iLocal_633, 5);
}

void func_27(int iParam0)
{
	func_83(0, 140, iLocal_608, iParam0, iLocal_609, iLocal_610, 12, 35f, 0, 0);
	func_84(0, -571840810, 0, 0);
	func_84(0, 79213682, 0, 0);
	func_84(0, 1104407261, 0, 0);
	func_84(0, 994323006, 0, 0);
	func_84(0, 82263429, 0, 0);
	func_85(0, 2725.972f, -1225.743f, 49.3667f, 133.1164f);
	func_83(3, 200, iLocal_611, iParam0, iLocal_612, iLocal_614, 12, -1082130432 /* Float: -1f */, 0, 0);
	func_84(3, -180076077, 0, 0);
	func_84(3, 1051874490, 0, 0);
	func_84(3, -308726915, 0, 0);
	func_84(3, -60894968, 0, 0);
	func_86(3, iLocal_613);
	func_85(3, 2829.407f, -1321.891f, 45.6826f, 335.9946f);
	func_83(4, 219, iLocal_615, iParam0, iLocal_635, iLocal_636, 44, -1082130432 /* Float: -1f */, 0, 0);
	func_84(4, 1687619371, 0, 0);
	func_85(4, 2859.97f, -1204.189f, 48.5888f, 271.4583f);
	func_83(6, 202, iLocal_604, iParam0, iLocal_605, iLocal_607, 20, 35f, 0, 0);
	func_84(6, 1057071735, 0, 0);
	func_84(6, -1011766303, 0, 0);
	func_86(6, iLocal_606);
	func_85(6, 2711.102f, -1286.316f, 48.6304f, 207.0424f);
	func_61(841127028, 1, 0f, 0, 0, 0, 0, 1);
	func_83(7, 142, iLocal_623, iParam0, iLocal_621, iLocal_622, 12, -1082130432 /* Float: -1f */, 0, 0);
	func_84(7, -1683351620, 0, 0);
	func_84(7, -548537711, 0, 0);
	func_84(7, -843327635, 0, 0);
	func_85(7, 2558.615f, -1164.232f, 52.6835f, 89.2214f);
	func_83(8, 201, iLocal_616, iParam0, iLocal_617, 0, 4098, -1082130432 /* Float: -1f */, 0, 0);
	func_84(8, 1410192354, 0, 0);
	func_84(8, 1708357485, 0, 0);
	func_84(8, -910885330, 0, 0);
	func_84(8, -1937144872, 0, 0);
	func_84(8, 527035651, 0, 0);
	func_84(8, 29962690, 0, 0);
	func_86(8, iLocal_618);
	func_83(12, 241, iLocal_643, iParam0, iLocal_644, 0, 1, (12.5f * 4f), 0, 0);
	func_83(13, 243, iLocal_645, iParam0, 0, 0, 1, (12.5f * 4f), 0, 0);
	func_83(14, 242, iLocal_646, iParam0, iLocal_647, 0, 1, (12.5f * 4f), 0, 0);
	func_87(49, 13, 1, 1);
	func_87(50, 14, 1, 1);
	VOLUME::_0xB469CFD9E065EB99(iLocal_643, 10113);
	VOLUME::_0xB469CFD9E065EB99(iLocal_645, 10114);
	VOLUME::_0xB469CFD9E065EB99(iLocal_646, 10115);
	func_83(2, 141, iLocal_637, iParam0, iLocal_638, iLocal_639, 491520, (12.5f * 2f), 0, iLocal_640);
	func_84(2, 286519629, 0, 0);
	func_84(2, 556568958, 0, 0);
	func_84(2, 1071894252, 0, 0);
	func_84(2, 1299147267, 0, 0);
	func_84(2, 1546618759, 0, 0);
	func_84(2, 1683822530, 0, 0);
	func_84(2, 1437137494, 0, 0);
	func_84(2, -1898189633, 0, 0);
	func_83(10, 139, iLocal_641, iParam0, iLocal_642, 0, 460, -1082130432 /* Float: -1f */, 0, 0);
	func_88(iParam0);
	func_83(9, 205, iLocal_625, iParam0, 0, 0, 2, -1082130432 /* Float: -1f */, 0, 0);
	func_89(9, 1);
	func_89(9, 16384);
	func_90(9, 1);
	func_84(9, 293111919, 1f, 1);
	func_84(9, -1550406539, 1f, 1);
	func_84(9, 726257907, -1f, 1);
	func_84(9, 229021101, -1f, 1);
	func_84(9, 1234907076, 1f, 1);
	func_84(9, 1388233219, -1f, 1);
	func_84(9, 1797818933, -1f, 1);
	func_84(9, 865213245, 0, 0);
	func_61(417838256, 1, 0, 0, 0, 0, 0, 0);
	func_61(-473281914, 1, 0, 0, 0, 0, 0, 0);
	func_61(-165417159, 1, 0, 0, 0, 0, 0, 0);
	func_61(-682315365, 1, 0, 0, 0, 0, 0, 0);
	func_61(-1451043336, 1, 0, 0, 0, 0, 0, 0);
	func_61(752868528, 1, 0, 0, 0, 0, 0, 0);
	_NAMESPACE48::_0x187D65F3AEC5D679(-402695257, "SaintDenis/SDN_MARKET_VENDOR2");
	if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x112DDF56300BC6E5(-402695257)))
	{
		_NAMESPACE48::_0xD4B614179BCD0654(_NAMESPACE48::_0x112DDF56300BC6E5(-402695257));
	}
	func_83(18, 952, iLocal_671, iParam0, iLocal_672, iLocal_673, 12, -1082130432 /* Float: -1f */, 0, 0);
	func_91();
	VOLUME::_0xB469CFD9E065EB99(iLocal_671, 10116);
	func_83(22, 251, iLocal_619, iParam0, iLocal_619, 0, 4, 60f, 0, 0);
	func_92();
	if (func_93())
	{
		func_94(51, 1);
	}
	else
	{
		func_94(51, 0);
	}
	func_95(&uLocal_695, 208, iLocal_627, iLocal_628, iLocal_629);
	func_83(21, 143, iLocal_675, iParam0, iLocal_676, 0, 2, -1082130432 /* Float: -1f */, 0, 0);
	func_84(21, 123675751, 0, 0);
	func_84(21, 1079875175, 0, 0);
	func_56(1915401053, 1);
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
	func_96(256, iLocal_681, 1);
	func_96(202, iLocal_634, 1);
	func_96(140, iLocal_608, 1);
	func_96(200, iLocal_611, 1);
	func_96(219, iLocal_615, 1);
	func_96(142, iLocal_623, 1);
	func_96(201, iLocal_616, 1);
	func_96(141, iLocal_637, 1);
	func_96(139, iLocal_641, 1);
	func_96(205, iLocal_625, 1);
	func_96(231, iLocal_669, 1);
	func_96(148, iLocal_674, 1);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_674, 3, 1);
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	func_97(1f, 0f, 0f, 0f);
	FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(-1190799868, 0, 48, true);
	iLocal_683[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionAgriculturalDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[0]), 2434.277f, -864.2632f, 100.0153f, 0f, 0f, 99.80928f, 76.1365f, 77.5857f, 75f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[0]), 2711.787f, -748.9066f, 100.009f, 0f, 0f, -19f, 136.4152f, 127.1571f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[0]), 2735.065f, -887.9319f, 99.99515f, 0f, 0f, 110.7696f, 246.8316f, 261.0551f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[0]), 2580.572f, -814.5414f, 100.007f, 0f, 0f, -172.8734f, 256.6486f, 158.023f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[0]), 2552.832f, -875.643f, 99.99637f, 0f, 0f, 92.39069f, 246.8316f, 169.3834f, 150f);
	iLocal_683[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionStFrancesSlums Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[1]), 2785.521f, -1056.387f, 100.0029f, 0f, 0f, 4.060894f, 91.00164f, 108.2891f, 150f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[1]), 2817.182f, -1129.093f, 100.0028f, 0f, 0f, -7.581066f, 33.52557f, 40.72814f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[1]), 2857.705f, -1075.989f, 100.0023f, 0f, 0f, 13.5399f, 134.8914f, 242.3996f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[1]), 2706.777f, -1061.12f, 100.0029f, 0f, 0f, 0.041871f, 83.65329f, 91.41635f, 150f);
	iLocal_683[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionMarketDistrict Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[2]), 2818.136f, -1302.344f, 100.0018f, 0f, 0f, 52.15482f, 136.6019f, 105.5725f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[2]), 2891.593f, -1292.117f, 99.99527f, 0f, 0f, 46.92012f, 94.54254f, 89.92535f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[2]), 2839.955f, -1372.414f, 99.99564f, 0f, 0f, 46.92012f, 94.54254f, 124.4491f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[2]), 2875.316f, -1240.993f, 100.0051f, 0f, 0f, 4.213234f, 159.0249f, 159.6049f, 150f);
	iLocal_683[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionWarehouseDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[3]), 2366.9f, -1476.441f, 100.0029f, 0f, 0f, -19f, 157.3157f, 152.8212f, 75f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[3]), 2230.301f, -1436.293f, 100.0025f, 0f, 0f, -19f, 74.26994f, 125.4343f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[3]), 2576.589f, -1518.787f, 99.99567f, 0f, 0f, 108.441f, 195.968f, 141.0048f, 150f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[3]), 2545.769f, -1422.399f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[3]), 2531.97f, -1414.802f, 99.99918f, 0f, 0f, -163.683f, 153.2008f, 51.76601f, 150f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[3]), 2491.278f, -1621.654f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	iLocal_683[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionCommercialDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[4]), 2742.656f, -1277.652f, 99.99838f, 0f, 0f, 152.9659f, 35.11092f, 35.81115f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[4]), 2777.891f, -1452.619f, 100.0045f, 0f, 0f, 47.08032f, 120.0883f, 101.6027f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[4]), 2718.392f, -1463.461f, 99.99609f, 0f, 0f, 21.14701f, 189.0947f, 206.6733f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[4]), 2504.361f, -1300.615f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[4]), 2574.647f, -1299.168f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[4]), 2666.968f, -1316.806f, 100.0025f, 0f, 0f, 21.48862f, 147.3396f, 167.8958f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[4]), 2773.729f, -1523.972f, 99.99609f, 0f, 0f, 21.14701f, 100.9043f, 86.45067f, 150f);
	iLocal_683[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionOldQuarter Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[5]), 2794.772f, -1168.501f, 99.99721f, 0f, 0f, -23.73808f, 40.52186f, 22.18659f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[5]), 2724.767f, -1177.132f, 99.99606f, 0f, 0f, -0.344003f, 131.9037f, 145.4713f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[5]), 2648.325f, -1217.937f, 99.99631f, 0f, 0f, 13.19646f, 112.413f, 48.05493f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[5]), 2638.866f, -1187.82f, 99.99606f, 0f, 0f, -0.344003f, 139.1532f, 82.29633f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[5]), 2559.47f, -1204.827f, 99.99649f, 0f, 0f, 91.19704f, 111.5756f, 115.1564f, 150f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_683[5]), 2782.788f, -1204.586f, 100.0032f, 0f, 0f, -4.684483f, 40.16883f, 52.17526f, 75f);
	iLocal_683[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionMansionDistrict Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[6]), 2274.675f, -1210.538f, 100f, 0f, 0f, -89.39697f, 61.03426f, 73.05703f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[6]), 2347.278f, -1207.533f, 100f, 0f, 0f, 0f, 116.7747f, 179.4705f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[6]), 2418.939f, -1287.882f, 100f, 0f, 0f, 168.6711f, 109.4838f, 85.72875f, 152.763f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[6]), 2485.194f, -1067.418f, 100f, 0f, 0f, 0f, 359.5392f, 180.9321f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_683[6]), 2446.779f, -1199.126f, 100f, 0f, 0f, -89.39697f, 124.0142f, 103.0166f, 150f);
}

void func_32()
{
	if (!Global_1894899->f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_33(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		((*uParam0)[iVar0 /*3*/])->f_1 = 0;
		((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_98(uParam1, iLocal_603, 1);
	func_98(uParam1, iLocal_604, 2);
	func_98(uParam1, iLocal_608, 2);
	func_98(uParam1, iLocal_611, 2);
	func_98(uParam1, iLocal_615, 2);
	func_98(uParam1, iLocal_623, 2);
	func_98(uParam1, iLocal_630, 10);
	func_98(uParam1, iLocal_641, 2);
}

void func_35(int iParam0)
{
	if (!func_99(iParam0))
	{
		return;
	}
	func_100();
	func_101(0, -7009108);
	func_101(2, -348077625);
}

bool func_36(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_37(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

int func_38(int iParam0)
{
	iParam0 = iParam0;
	switch (iLocal_771)
	{
		case 0:
			func_102();
			func_103(1);
			break;
		case 1:
			func_104();
			func_103(2);
			break;
		case 2:
			func_105();
			func_103(3);
			break;
		case 3:
			func_106();
			func_103(4);
			break;
		case 4:
			func_107(5);
			func_103(5);
			break;
		case 5:
			func_108();
			func_103(6);
			break;
		case 6:
			func_109();
			func_110();
			func_103(7);
			break;
		case 7:
			func_111();
			func_103(8);
			break;
		case 8:
			func_112();
			if (func_113(22, &iLocal_694))
			{
				func_114(iLocal_694);
			}
			func_103(9);
			break;
		case 9:
			if (!func_115())
			{
				func_116(&Local_177);
			}
			else if (func_117(6, 43) && func_118(43, 1))
			{
				func_119(5, 4, 8);
			}
			func_103(0);
			break;
	}
	func_120();
	func_121();
	func_122(&uLocal_719);
	func_122(&uLocal_739);
	func_123(&uLocal_695);
	func_124(iLocal_772);
	return 0;
}

void func_39(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_125(&Global_1935630, 16384)) || func_125(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_126(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_127();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch (((*uParam0)[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar3 /*3*/]))
				{
					if (VOLUME::_0xF256A75210C5C0EB(uParam0[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_128((*uParam0)[iVar3 /*3*/], 1) && func_129(iParam1)) && !func_130(iParam1, 16))
							{
								func_132(iParam1, func_131(), -1, 0, -1, 0);
								func_133((*uParam0)[iVar3 /*3*/], 1);
							}
							func_134(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_20() == -1)
	{
		if (func_135() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_136();
			func_137(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_138(bVar0);
	if (func_20() == -1)
	{
		func_140((iParam1 == func_139() && bVar0));
	}
}

int func_40(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

int func_41()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (func_141(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_142();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		func_19(iLocal_777, 2048);
		if (func_7(func_131()))
		{
			func_8(func_131(), 8);
		}
		func_143(iLocal_777, 4);
		func_143(iLocal_777, 8);
		func_138(0);
		if (func_20() == -1)
		{
			func_140(0);
		}
		func_144(iLocal_777);
		func_32();
		return 0;
	}
	else
	{
		func_145(iLocal_777);
		func_146(iLocal_777);
		func_147(iLocal_777);
		if (!func_148(iLocal_777, 0))
		{
			return 0;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return 1;
}

int func_43(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return func_149(iParam0, 8);
}

bool func_44(int iParam0)
{
	return (Global_1894899->f_7 && iParam0) != 0;
}

void func_45(int iParam0)
{
	Global_1894899->f_7 = (Global_1894899->f_7 - (Global_1894899->f_7 && iParam0));
}

void func_46(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_150(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_47()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_649))
	{
		iLocal_649 = VOLUME::_CREATE_VOLUME_BOX(2638.124f, -1222.767f, 59.76551f, 0f, 0f, 0f, 6.467232f, 5.443256f, 2.511638f);
	}
	func_151(9, 2638.124f, -1222.767f, 59.76551f, 0f, iLocal_649);
}

void func_48(int iParam0, int iParam1)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_32 = iParam1;
}

Vector3 func_49(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2644.397f, -1296.915f, 53.3029f;
		case 1:
			return 1289.142f, -1305.846f, 77.34f;
		case 2:
			return -306.3943f, 771.1057f, 119.2639f;
		case 3:
			return -815.711f, -1276.18f, 43.997f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -63.95661f;
		case 1:
			return 0f, 0f, 139.649f;
		case 2:
			return 0f, 0f, 10.06205f;
		case 3:
			return 0f, 0f, 89.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 18.36461f, 16.07587f, 4.061802f;
		case 1:
			return 12.37f, 19.599f, 5.349f;
		case 2:
			return 9.925132f, 17.83831f, 3.145048f;
		case 3:
			return 7.8f, 12.9f, 2.9f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_52()
{
	int iVar0;

	iLocal_632 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_632, iVar0);
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_632, iVar0);
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_632, iVar0);
	iLocal_633 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f, "volSaloonSlumInterior");
}

int func_53(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9)
{
	int iVar0;
	int iVar1;

	if (func_152(vParam0))
	{
		return -1;
	}
	if (func_152(vParam6))
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_153(iVar0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		Global_43893[iVar1] = VOLUME::_CREATE_VOLUME_CYLINDER(vParam0, vParam3, vParam6);
		Global_43893.f_6[iVar1] = iParam9;
		return iVar1;
	}
	return -1;
}

void func_54()
{
	if (!func_63(-789397228))
	{
		if (!Global_1934765->f_295)
		{
			MAP::_0x1392105DA88BBFFB(1807082723, 3290f, -1310f, 0, 0);
			Global_1934765->f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else if (Global_1934765->f_295)
	{
		MAP::_0xE057FEA9A22EB3EE(1807082723);
		Global_1934765->f_295 = 0;
		MAP::_0xDA98246C7A3C2189(1944800674);
	}
	if (func_63(1358491857))
	{
		if (!Global_1934765->f_294)
		{
			MAP::_0x1392105DA88BBFFB(1157868460, 2870f, -1400f, 0, 0);
			Global_1934765->f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else if (Global_1934765->f_294)
	{
		MAP::_0xE057FEA9A22EB3EE(1157868460);
		Global_1934765->f_294 = 0;
		MAP::_0xDA98246C7A3C2189(-296815465);
	}
}

void func_55()
{
	int iVar0;

	iVar0 = 5;
	uLocal_584[0] = VOLUME::_0x00BBF7CEAE8C666A(2779.445f, -1215.031f, 45.01f, 31f, iVar0, 16384);
	uLocal_584[1] = VOLUME::_0x00BBF7CEAE8C666A(2781.572f, -1305.132f, 46.713f, 18f, iVar0, 16384);
	uLocal_584[2] = VOLUME::_0x00BBF7CEAE8C666A(2641.416f, -1409.487f, 45.378f, 10f, iVar0, 16384);
	uLocal_584[3] = VOLUME::_0x00BBF7CEAE8C666A(2591.129f, -1465.692f, 45.378f, 16f, iVar0, 16384);
	uLocal_584[4] = VOLUME::_0x00BBF7CEAE8C666A(2606.294f, -1448.95f, 48.258f, 16f, iVar0, 16384);
	uLocal_584[5] = VOLUME::_0x00BBF7CEAE8C666A(2629.197f, -1451.147f, 49.654f, 25f, iVar0, 16384);
	uLocal_584[6] = VOLUME::_0x00BBF7CEAE8C666A(2824.326f, -1255.869f, 49.654f, 22f, iVar0, 16384);
	uLocal_584[7] = VOLUME::_0x00BBF7CEAE8C666A(2538.228f, -1449.766f, 45.378f, 16f, iVar0, 16384);
	uLocal_584[8] = VOLUME::_0x00BBF7CEAE8C666A(2505.081f, -1388.869f, 45.604f, 13f, iVar0, 16384);
	uLocal_584[9] = VOLUME::_0x00BBF7CEAE8C666A(2532.417f, -1386.635f, 45.604f, 20f, iVar0, 16384);
	uLocal_584[10] = VOLUME::_0x00BBF7CEAE8C666A(2545.552f, -1317.497f, 47.647f, 22f, iVar0, 16384);
	uLocal_584[11] = VOLUME::_0x00BBF7CEAE8C666A(2315.248f, -1215.141f, 45.604f, 28f, iVar0, 16384);
	uLocal_584[12] = VOLUME::_0x00BBF7CEAE8C666A(2339.544f, -1213.893f, 45.604f, 30f, iVar0, 16384);
	uLocal_584[13] = VOLUME::_0x00BBF7CEAE8C666A(2360.972f, -1214.77f, 45.604f, 28f, iVar0, 16384);
	uLocal_584[14] = VOLUME::_0x00BBF7CEAE8C666A(2385.62f, -1214.77f, 45.604f, 28f, iVar0, 16384);
	uLocal_584[15] = VOLUME::_0x00BBF7CEAE8C666A(2312.345f, -1536.102f, 42.89f, 25f, iVar0, 16384);
	uLocal_584[16] = VOLUME::_0x00BBF7CEAE8C666A(2337.627f, -1536.506f, 43.051f, 25f, iVar0, 16384);
}

void func_56(int iParam0, int iParam1)
{
	func_61(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_57(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_67(1497516462);
			func_68(2016141805);
			func_68(1010885152);
			func_68(-502324015);
			break;
		case 2016141805:
			func_68(1497516462);
			func_67(2016141805);
			func_68(1010885152);
			func_68(-502324015);
			break;
		case 1010885152:
			func_68(1497516462);
			func_68(2016141805);
			func_67(1010885152);
			func_68(-502324015);
			break;
		case -502324015:
			func_68(1497516462);
			func_68(2016141805);
			func_68(1010885152);
			func_67(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_68(-538889627);
			func_68(-538880323);
			func_68(-1056767524);
			func_67(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_154();
			func_67(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_155();
			func_67(iParam0);
			break;
		case 2019386373:
			func_68(-664252410);
			func_68(2109952320);
			func_67(2019386373);
			break;
		case -664252410:
			func_68(2019386373);
			func_68(2109952320);
			func_67(-664252410);
			break;
		case 2109952320:
			func_68(2019386373);
			func_68(-664252410);
			func_67(2109952320);
			break;
		case -1674179981:
			func_68(-1835851517);
			func_68(-1838352012);
			func_67(-1674179981);
			break;
		case -1835851517:
			func_68(-1674179981);
			func_68(-1838352012);
			func_67(-1835851517);
			break;
		case -1838352012:
			func_68(-1674179981);
			func_68(-1835851517);
			func_67(-1838352012);
			break;
		case -1717960576:
			func_68(210001842);
			func_67(-1717960576);
			break;
		case 210001842:
			func_68(-1717960576);
			func_67(210001842);
			break;
		case -150493654:
			func_68(-1271608261);
			func_68(1846061697);
			func_68(-1145519186);
			func_67(-150493654);
			break;
		case -1271608261:
			func_68(-150493654);
			func_68(1846061697);
			func_68(-1145519186);
			func_67(-1271608261);
			break;
		case 1846061697:
			func_68(-150493654);
			func_68(-1271608261);
			func_68(-1145519186);
			func_67(1846061697);
			break;
		case -1145519186:
			func_68(-150493654);
			func_68(-1271608261);
			func_68(1846061697);
			func_67(-1145519186);
			break;
		case 1766284049:
			func_68(280705402);
			func_68(1926308480);
			func_67(1766284049);
			break;
		case 280705402:
			func_68(1766284049);
			func_68(1926308480);
			func_67(280705402);
			break;
		case 1926308480:
			func_68(1766284049);
			func_68(280705402);
			func_67(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_68(439465264);
				func_67(1609506757);
			}
			else
			{
				func_68(1609506757);
				func_68(439465264);
			}
			break;
		case 439465264:
			if (func_63(1609506757))
			{
				if (bParam1)
				{
					func_67(439465264);
				}
				else
				{
					func_68(439465264);
				}
			}
			break;
		case 1822001510:
			func_68(-1612662716);
			func_67(1822001510);
			break;
		case -1612662716:
			func_68(1822001510);
			func_67(-1612662716);
			break;
		case 1306158345:
			func_68(1952610440);
			func_68(-223469678);
			func_68(-404698347);
			func_68(1517904467);
			func_67(1306158345);
			break;
		case 1952610440:
			func_68(1306158345);
			func_68(-223469678);
			func_68(-404698347);
			func_68(1517904467);
			func_67(1952610440);
			break;
		case -223469678:
			func_68(1306158345);
			func_68(1952610440);
			func_68(-404698347);
			func_68(1517904467);
			func_67(-223469678);
			break;
		case -404698347:
			func_68(1306158345);
			func_68(1952610440);
			func_68(-223469678);
			func_68(1517904467);
			func_67(-404698347);
			break;
		case 1517904467:
			func_68(1306158345);
			func_68(1952610440);
			func_68(-223469678);
			func_68(-404698347);
			func_67(1517904467);
			break;
		case 1376646519:
			func_68(931649776);
			func_68(-434590080);
			func_68(1743048395);
			func_68(449774763);
			func_67(1376646519);
			break;
		case 931649776:
			func_68(1376646519);
			func_68(-434590080);
			func_68(1743048395);
			func_68(449774763);
			func_67(931649776);
			break;
		case -434590080:
			func_68(1376646519);
			func_68(931649776);
			func_68(1743048395);
			func_68(449774763);
			func_67(-434590080);
			break;
		case 1743048395:
			func_68(1376646519);
			func_68(931649776);
			func_68(-434590080);
			func_68(449774763);
			func_67(1743048395);
			break;
		case 449774763:
			func_68(1376646519);
			func_68(931649776);
			func_68(-434590080);
			func_68(1743048395);
			func_67(449774763);
			break;
		case -1414537028:
			func_68(38162571);
			func_68(1350391819);
			func_68(54073871);
			func_67(-1414537028);
			break;
		case 38162571:
			func_68(-1414537028);
			func_68(1350391819);
			func_68(54073871);
			func_67(38162571);
			break;
		case 1350391819:
			func_68(-1414537028);
			func_68(38162571);
			func_68(54073871);
			func_67(1350391819);
			break;
		case 54073871:
			func_68(-1414537028);
			func_68(38162571);
			func_68(1350391819);
			func_67(54073871);
			break;
		case 198200492:
			func_67(198200492);
			func_68(-1124061431);
			func_68(52706132);
			func_68(-259123672);
			break;
		case -1124061431:
			func_68(198200492);
			func_67(-1124061431);
			func_68(52706132);
			func_68(-259123672);
			break;
		case 52706132:
			func_68(198200492);
			func_68(-1124061431);
			func_67(52706132);
			func_68(-259123672);
			break;
		case -259123672:
			func_68(198200492);
			func_68(-1124061431);
			func_68(52706132);
			func_67(-259123672);
			break;
		case -919512195:
			func_67(-919512195);
			func_68(-1925798111);
			func_68(420709909);
			func_68(1703426636);
			break;
		case -1925798111:
			func_67(-1925798111);
			func_68(-919512195);
			func_68(420709909);
			func_68(1703426636);
			break;
		case 420709909:
			func_67(420709909);
			func_68(-919512195);
			func_68(-1925798111);
			func_68(1703426636);
			break;
		case 1703426636:
			func_67(1703426636);
			func_68(-919512195);
			func_68(-1925798111);
			func_68(420709909);
			break;
		case -1223121209:
			func_67(-1223121209);
			func_68(630808005);
			break;
		case 630808005:
			func_67(630808005);
			func_68(-1223121209);
			break;
		case 1453909576:
			func_67(1453909576);
			func_68(1643531967);
			break;
		case 1643531967:
			func_67(1643531967);
			func_68(1453909576);
			break;
		case 0:
			func_67(0);
			func_68(473295046);
			func_68(-1738165526);
			break;
		case 473295046:
			func_67(473295046);
			func_68(0);
			func_68(-1738165526);
			break;
		case -1738165526:
			func_67(-1738165526);
			func_68(0);
			func_68(473295046);
			break;
		case 932909855:
			func_67(932909855);
			func_68(2051822093);
			break;
		case 2051822093:
			func_67(2051822093);
			func_68(932909855);
			break;
		case 405586984:
			func_67(405586984);
			func_68(1509509592);
			func_68(-959357075);
			func_68(-1311865656);
			break;
		case 1509509592:
			func_67(1509509592);
			func_68(405586984);
			func_68(-959357075);
			func_68(-1311865656);
			break;
		case -959357075:
			func_67(-959357075);
			func_68(1509509592);
			func_68(405586984);
			func_68(-1311865656);
			break;
		case -1311865656:
			func_67(-1311865656);
			func_68(1509509592);
			func_68(-959357075);
			func_68(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_67(-524145696);
			}
			else
			{
				func_68(-524145696);
			}
			func_68(1626481264);
			func_68(282809459);
			break;
		case 282809459:
			func_67(282809459);
			func_68(1626481264);
			func_68(-524145696);
			break;
		case 1626481264:
			func_67(1626481264);
			func_68(-524145696);
			func_68(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_67(885203519);
			}
			else
			{
				func_68(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_67(-1080627546);
			}
			else
			{
				func_68(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_63(iParam0))
				{
					func_67(iParam0);
				}
			}
			else if (func_63(iParam0))
			{
				func_68(iParam0);
			}
			break;
	}
}

bool func_58(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_156(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

void func_59(int iParam0)
{
	struct<16> Var0;

	if (func_20() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (func_157(45))
			{
				return;
			}
			else
			{
				StringCopy(&(Var0.f_10), "town_secrets_sd_trelawny", 32);
			}
			break;
		case 2:
			StringCopy(&(Var0.f_10), "town_secrets_er_daughter", 32);
			break;
		case 3:
			StringCopy(&(Var0.f_10), "town_secrets_val_moira", 32);
			break;
		default:
			break;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Var0.f_10))) > 0)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_10)))
	{
		Var0.f_14 = 1024;
		Var0.f_15 = 1;
		func_158(Var0, 0);
	}
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = func_159(iParam0, iVar1);
			if ((Global_40.f_9829[iVar0 /*4*/])->f_1 != 0)
			{
				if (iVar2 != 0)
				{
					_NAMESPACE48::_0x8BC555034A5A5E8C(iVar2, (Global_40.f_9829[iVar0 /*4*/])->f_1);
				}
			}
			func_160(iVar0, iParam1[iVar1]);
			func_161(iVar0);
			iVar1++;
		}
		iVar0++;
	}
	iVar3 = (iParam2 - iVar1);
	if (iVar3 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_9829)
		{
			if (&Global_40.f_9829[iVar0 /*4*/] == -1)
			{
				Global_40.f_9829[iVar0 /*4*/] = iParam0;
				iVar2 = func_159(iParam0, iVar1);
				func_160(iVar0, iParam1[iVar1]);
				func_161(iVar0);
				iVar1++;
				iVar3 = (iVar3 - 1);
				if (iVar3 <= 0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_61(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_162(iParam0, 0, 0);
	if (func_163(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_164(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_165(iParam0, 1);
			}
			else
			{
				func_166(iParam0, 1);
			}
		}
		else
		{
			func_167(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_168())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (!func_169(iParam0))
	{
		return;
	}
	if (func_152(func_170(iParam1)))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	if (!func_172(func_171(iParam1)))
	{
		return;
	}
	if (*iParam3 > 4)
	{
		return;
	}
	Global_1394141->f_7[iParam0 /*31*/] = 0;
	(Global_1394141->f_7[iParam0 /*31*/])->f_1 = { func_170(iParam1) };
	(Global_1394141->f_7[iParam0 /*31*/])->f_4 = iParam2;
	(Global_1394141->f_7[iParam0 /*31*/])->f_5 = func_171(iParam1);
	(Global_1394141->f_7[iParam0 /*31*/])->f_28 = iParam5;
	(Global_1394141->f_7[iParam0 /*31*/])->f_12 = iParam4;
	(Global_1394141->f_7[iParam0 /*31*/])->f_13 = func_173(iParam0);
	iVar0 = 0;
	while (iVar0 <= (*iParam3 - 1))
	{
		(Global_1394141->f_7[iParam0 /*31*/])->f_7[iVar0] = iParam3[iVar0];
		iVar0++;
	}
}

bool func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_174(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_64(int iParam0, int iParam1, bool bParam2)
{
	func_162(iParam0, 0, 0);
	if (func_163(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

void func_65(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

int func_66()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_174(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_174(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_69(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, int iParam10)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam2;
	uParam0->f_3 = { func_175(sParam3) };
	uParam0->f_12 = iParam4;
	uParam0->f_13 = { vParam5 };
	uParam0->f_16 = fParam8;
	uParam0->f_17 = iParam9;
	uParam0->f_18 = iParam10;
}

void func_70(int iParam0, int iParam1)
{
	func_61(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_71(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (func_152(vParam5))
	{
		return;
	}
	Local_14 = iParam0;
	Local_14.f_6 = sParam1;
	Local_14.f_7 = sParam2;
	Local_14.f_8 = sParam3;
	Local_14.f_9 = sParam4;
	Local_14.f_11 = { vParam5 };
	Local_14.f_10 = sParam8;
	Local_14.f_15 = 1;
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (Local_14.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	func_176(&iVar0, iParam0);
	func_177(&iVar0, iParam1);
	func_178(&iVar0, iParam2);
	func_179(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_14.f_5 - 1))
	{
		func_179(Local_14.f_1[iVar1]);
		if (&Local_14.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_14.f_1[Local_14.f_5] = iVar0;
	Local_14.f_5++;
	func_180(&(Local_14.f_1), Local_14.f_5);
}

void func_73()
{
	func_181(&uLocal_143);
	func_182();
	Global_1935183->f_29 = 3;
}

int func_74(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_99(iParam0))
	{
		return 1;
	}
	if (func_149(iParam0, 16))
	{
		return 1;
	}
	if (func_183(iParam0) && !func_184(iParam0))
	{
	}
	if (func_185(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_172(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_172(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_183(iParam0) || func_184(iParam0)) || func_186(&Global_1897950))
			{
				func_187(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_75(int iParam0, int iParam1)
{
	if (func_20() == -1)
	{
		((*Global_1934182)[iParam0 /*18*/])->f_7 = iParam1;
		if (!func_188(iParam0))
		{
			func_189(iParam0);
		}
		func_190(16);
		func_190(32);
	}
	Global_1934182->f_75 = 0;
}

void func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_191(0, 0, -1477943109);
			func_191(0, 1, 2089945615);
			func_191(0, 2, -2136681514);
			func_191(0, 3, 1733501235);
			break;
		case 3:
			func_191(3, 0, 531022111);
			break;
		case 2:
			func_191(2, 0, -408139633);
			func_191(2, 1, -1652509687);
			break;
		case 1:
			func_191(1, 0, -977211145);
			func_191(1, 1, -1206757990);
			break;
	}
}

bool func_77(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_78(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_79(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_80(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_81(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return -1;
	}
	if (Global_1899528->f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_192())
	{
		return -1;
	}
	if (!func_193(uParam0->f_1))
	{
		return -1;
	}
	if (func_183(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_194(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_195(&iVar2))
		{
			return -1;
		}
	}
	func_196(*uParam0, iVar2);
	bVar1 = func_197(uParam0->f_1, 131072);
	func_198(uParam0->f_1);
	iVar3 = func_199(uParam0->f_1, *uParam0);
	(*Global_1392915)[iVar2 /*12*/] = *uParam0;
	((*Global_1392915)[iVar2 /*12*/])->f_1 = uParam0->f_1;
	((*Global_1392915)[iVar2 /*12*/])->f_2 = uParam0->f_2;
	((*Global_1392915)[iVar2 /*12*/])->f_3 = uParam0->f_3;
	((*Global_1392915)[iVar2 /*12*/])->f_4 = iVar3;
	((*Global_1392915)[iVar2 /*12*/])->f_5 = uParam0->f_9;
	((*Global_1392915)[iVar2 /*12*/])->f_6 = { uParam0->f_5 };
	((*Global_1392915)[iVar2 /*12*/])->f_9 = uParam0->f_8;
	((*Global_1392915)[iVar2 /*12*/])->f_10 = BUILTIN::FLOOR(uParam0->f_4);
	((*Global_1392915)[iVar2 /*12*/])->f_11 = iVar2;
	Global_1392915->f_121[iVar2 /*20*/] = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_2 = bParam1;
	(Global_1392915->f_121[iVar2 /*20*/])->f_17 = iParam2;
	(Global_1392915->f_121[iVar2 /*20*/])->f_1 = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_6 = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	(Global_1392915->f_121[iVar2 /*20*/])->f_16 = 0;
	if ((Global_1392915->f_121[iVar2 /*20*/])->f_12 != 0)
	{
		(Global_1392915->f_121[iVar2 /*20*/])->f_9 = { INTERIOR::_0x2C9746D0CA15BE1C((Global_1392915->f_121[iVar2 /*20*/])->f_12) };
	}
	else
	{
		(Global_1392915->f_121[iVar2 /*20*/])->f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_200(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_200(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_200(uParam0->f_1, 131072);
	}
	if (func_201(iVar3) || (!func_202(iVar3) && func_203(0) != iVar3))
	{
		iVar0 = func_204(iVar3);
		if (iVar0 == -1)
		{
			func_205(iVar3);
		}
	}
	return iVar2;
}

void func_82(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_152(vParam1))
	{
		return;
	}
	func_206(iParam0);
	(Global_1935369->f_5[iParam0 /*11*/])->f_1 = { vParam1 };
	(Global_1935369->f_5[iParam0 /*11*/])->f_4 = iParam4;
	(Global_1935369->f_5[iParam0 /*11*/])->f_5 = iParam5;
	(Global_1935369->f_5[iParam0 /*11*/])->f_6 = func_207(iParam5, iParam0);
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_208(iParam3, iParam0);
	vVar1 = { func_209(iVar0) };
	vVar4 = { func_210(iVar0) };
	if (func_152(vVar1))
	{
		return;
	}
	if (!func_211(19, 16384))
	{
		if (!func_172(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_212(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	if (func_152(vVar4))
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	}
	else
	{
		(Global_1914319->f_15936[iVar0 /*6*/])->f_2 = { vVar4 };
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = iVar0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_25 = iParam2;
	(Global_1914319->f_3[iParam0 /*446*/])->f_26 = iParam4;
	(Global_1914319->f_3[iParam0 /*446*/])->f_28 = iParam5;
	(Global_1914319->f_3[iParam0 /*446*/])->f_29 = iParam9;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = iParam3;
	(Global_1914319->f_3[iParam0 /*446*/])->f_409 = iParam8;
	if (func_213(iVar0) || func_214(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = 770563571;
				break;
			case 61:
				iVar7 = 922959422;
				break;
			case 73:
				iVar7 = 646741747;
				break;
			case 43:
				iVar7 = -1159824322;
				break;
			case 41:
				iVar7 = 327042733;
				break;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_20 = func_215(5, (Global_1914319->f_3[iParam0 /*446*/])->f_10, 2, iVar7);
	}
	*(Global_1393529->f_114[iParam0 /*3*/]) = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0 /*8*/], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_216(iParam0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_19 = fParam7;
	(Global_1914319->f_3[iParam0 /*446*/])->f_8 = iParam6;
	if (!func_217(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_218(iParam3);
			break;
		case 10:
			func_88(iParam3);
			break;
		case 18:
			func_91();
			break;
		case 9:
			func_219();
			break;
		case 22:
			func_92();
			break;
	}
	func_220((Global_1914319->f_3[iParam0 /*446*/])->f_10);
	func_221(iParam0, 16);
	func_222(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_223(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = iParam1;
	((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = iParam2;
	((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = iParam3;
	((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_408++;
}

void func_85(int iParam0, vector3 vParam1, float fParam4)
{
	*(Global_1393529->f_114[iParam0 /*3*/]) = { vParam1 };
	Global_1393529->f_220[iParam0] = fParam4;
}

void func_86(int iParam0, int iParam1)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_30 = iParam1;
}

void func_87(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_224(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_225(iParam0, 4))
		{
			func_226(iParam0, 4);
		}
	}
	else
	{
		func_227(iParam0, 4);
	}
	func_228(iParam0);
}

void func_88(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(Global_1393529->f_288[10 /*8*/], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(Global_1393529->f_288[10 /*8*/], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
		{
			case 0:
			case 3:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_89(int iParam0, int iParam1)
{
	func_229(&((Global_1914319->f_3[iParam0 /*446*/])->f_5), iParam1);
}

void func_90(int iParam0, int iParam1)
{
	func_229(&((Global_1914319->f_3[iParam0 /*446*/])->f_6), iParam1);
}

void func_91()
{
	StringCopy(Global_1393529->f_288[18 /*8*/], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_92()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

int func_93()
{
	if (func_230(0) > 0 || func_230(1) > 0)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, bool bParam1)
{
	if (!func_231(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_232(iParam0, 1);
	}
	else
	{
		func_233(iParam0, 1);
	}
	func_235(func_234(iParam0), bParam1);
}

void func_95(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_3 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_236(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

void func_97(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

void func_98(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	if (!func_238(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_99(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_100()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_239(iVar0))
		{
			(*Global_1898130)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_101(int iParam0, int iParam1)
{
	if (!func_239(iParam0))
	{
		return;
	}
	if (!func_240(iParam1))
	{
		return;
	}
	(*Global_1898130)[iParam0] = iParam1;
}

void func_102()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_683[iVar0])))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(iLocal_683[iVar0]), false, 0))
			{
				iVar1 = iVar0;
				if (iVar0 == 0)
				{
					bLocal_680 = true;
				}
				else
				{
					bLocal_680 = false;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_680)
	{
		if (func_241() != 1339372314)
		{
			func_242(1339372314, -1);
		}
	}
	else if (func_241() != 1559741032)
	{
		func_242(1559741032, -1);
	}
	if (iVar1 != iLocal_679)
	{
		iLocal_679 = iVar1;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_650))
	{
		if (func_243(14))
		{
			if (VOLUME::_0xCA5C90D40665D5CE(iLocal_650, 0) || VOLUME::_0xCA5C90D40665D5CE(iLocal_650, 1))
			{
				VOLUME::_0x3EFABB21E14A6BD1(iLocal_650, 0, 0);
				VOLUME::_0x3EFABB21E14A6BD1(iLocal_650, 1, 0);
			}
		}
		else if (!VOLUME::_0xCA5C90D40665D5CE(iLocal_650, 0) || !VOLUME::_0xCA5C90D40665D5CE(iLocal_650, 1))
		{
			VOLUME::_0x3EFABB21E14A6BD1(iLocal_650, 0, 1);
			VOLUME::_0x3EFABB21E14A6BD1(iLocal_650, 1, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_244(256)))
	{
		if (!PED::GET_PED_CONFIG_FLAG(func_244(256), 168, true))
		{
			PED::SET_PED_CONFIG_FLAG(func_244(256), 168, true);
		}
	}
}

void func_103(int iParam0)
{
	iLocal_771 = iParam0;
}

void func_104()
{
	if (!Local_14.f_15)
	{
		return;
	}
	if (Local_14.f_26 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_14.f_17) && Local_14.f_14 > 1) && Local_14 != 0)
	{
		if (func_245() && func_246(Global_36, Local_14.f_11) < 100f)
		{
			if (Local_14.f_18 == 0)
			{
				Local_14.f_18 = ENTITY::_0x6F3068258A499E52(Local_14, Local_14.f_11, 11);
			}
			else if (ENTITY::_0x1FF441D7954F8709(Local_14.f_18))
			{
				Local_14.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_14.f_18));
			}
		}
		Local_14.f_26 = MISC::GET_GAME_TIMER() + 1800;
	}
	switch (Local_14.f_14)
	{
		case 0:
			func_247();
			Local_14.f_14 = 1;
			break;
		case 1:
			if (func_248())
			{
				Local_14.f_14 = 2;
			}
			break;
		case 2:
			if (func_249())
			{
				Local_14.f_14 = 3;
				Local_14.f_24 = 0;
				Local_14.f_21 = 0;
				Local_14.f_22 = func_251(func_250());
				if (Local_14.f_22 > 12)
				{
					Local_14.f_22 = (Local_14.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_14.f_25 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_14.f_17))
				{
					Local_14.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_7, Local_14.f_6, 1000f, false, true, false, 0f, 0);
					Local_14.f_14 = 4;
				}
			}
			if (Local_14.f_21 >= Local_14.f_22)
			{
				Local_14.f_14 = 2;
			}
			break;
		case 4:
			if (func_252(Local_14.f_17, Local_14.f_6, Local_14.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_8, Local_14.f_6, 1000f, true, true, false, 0f, 0);
				Local_14.f_23 = MISC::GET_GAME_TIMER() + 1800;
				Local_14.f_14 = 5;
			}
			break;
		case 5:
			if (Local_14.f_24 < MISC::GET_GAME_TIMER())
			{
				Local_14.f_21++;
				Local_14.f_24 = MISC::GET_GAME_TIMER() + 1800;
			}
			if (Local_14.f_21 >= Local_14.f_22 && func_252(Local_14.f_17, Local_14.f_6, Local_14.f_8, 0.02f))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_9, Local_14.f_6, 8f, false, false, false, 0f, 0);
				Local_14.f_14 = 2;
			}
			break;
	}
	if (Local_14.f_25 && Local_14.f_14 > 2)
	{
		if (AUDIO::_0x714A0EA7DE1167BE(Local_14.f_10, "CHURCH_BELL_SOUNDS") && Local_14.f_24 < MISC::GET_GAME_TIMER())
		{
			Local_14.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_0xCCE219C922737BFA(Local_14.f_10, Local_14.f_11, "CHURCH_BELL_SOUNDS", 0, 0, 1, 0);
			Local_14.f_21++;
		}
	}
}

void func_105()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_669))
	{
		return;
	}
	if (func_253(264))
	{
		if (!bLocal_670)
		{
			VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_669, 3, 1);
			bLocal_670 = true;
		}
	}
	else if (bLocal_670)
	{
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_669, 3, 0);
		bLocal_670 = false;
	}
}

void func_106()
{
	if (!func_254(0, 0, 1))
	{
		if (func_255(27) && !func_256(27))
		{
			if (!bLocal_691)
			{
				func_56(-399528504, 1);
				func_56(804086151, 1);
				bLocal_691 = true;
			}
		}
		else if (!func_257(9, 557524588, 1))
		{
			if (bLocal_691)
			{
				func_70(-399528504, 1);
				func_70(804086151, 1);
				bLocal_691 = false;
			}
		}
	}
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return;
	}
	if (Global_1396116->f_139)
	{
		Global_1396116->f_140 = 1;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = func_258(iParam0, iVar1);
			iVar3 = func_244(iVar2);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if (!func_259(iVar0, 2))
				{
					PED::SET_PED_CONFIG_FLAG(iVar3, 146, true);
					func_260(iVar0, 2);
					func_261(iVar0, iVar1, iParam0);
				}
			}
			else
			{
				func_262(iVar0, 2);
				if (BUILTIN::VDIST(func_263(iVar2), Global_36) < 45f)
				{
					if (!Global_1396116->f_140)
					{
						if (func_264(iVar2, 0, 0, 0, 0, 0))
						{
							return;
						}
					}
				}
				else
				{
					Global_1396116->f_140 = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_108()
{
	if (func_115() && !func_265())
	{
		if (func_63(522677506))
		{
			func_68(522677506);
		}
	}
	else if (!func_63(522677506))
	{
		func_67(522677506);
	}
}

void func_109()
{
	int iVar0;
	int iVar1;

	iVar0 = 250;
	iVar1 = func_244(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (bLocal_692)
		{
			bLocal_692 = false;
		}
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (((!bLocal_692 && AUDIO::_0xBE28DB99556FF8D9(iVar1) != 0) && !func_266(iVar0, 0)) && PED::_0x34D6AC1157C8226C(iVar1, 1595886358))
		{
			AUDIO::_0x8E901B65206C2D3E(iVar1);
			AUDIO::_0xB93A769B8B726950(iVar1, -1542215752);
			AUDIO::_0xC4CFCE4C656EF480(iVar1);
			bLocal_692 = true;
		}
		else if (bLocal_692 && !PED::_0x34D6AC1157C8226C(iVar1, 1595886358))
		{
			bLocal_692 = false;
		}
	}
}

void func_110()
{
	int iVar0;
	int iVar1;

	iVar0 = 289;
	iVar1 = func_244(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (bLocal_693)
		{
			bLocal_693 = false;
		}
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (((!bLocal_693 && AUDIO::_0xBE28DB99556FF8D9(iVar1) != 0) && !func_266(iVar0, 0)) && PED::_0x34D6AC1157C8226C(iVar1, 817364163))
		{
			AUDIO::_0x8E901B65206C2D3E(iVar1);
			AUDIO::_0xB93A769B8B726950(iVar1, 533120);
			AUDIO::_0xC4CFCE4C656EF480(iVar1);
			bLocal_693 = true;
		}
		else if (bLocal_693 && !PED::_0x34D6AC1157C8226C(iVar1, 817364163))
		{
			bLocal_693 = false;
		}
	}
}

void func_111()
{
	int iVar0[2];
	int iVar3;

	iVar0[0] = func_244(309);
	iVar0[1] = func_244(310);
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iVar0[iVar3])))
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(&(iVar0[iVar3])) != 543319108)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(iVar0[iVar3]), 543319108);
			}
		}
		iVar3++;
	}
}

void func_112()
{
	func_267(251);
}

int func_113(int iParam0, int iParam1)
{
	if (!func_268(iParam0))
	{
		return 0;
	}
	if (func_20() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051260->f_48[iParam0 /*78*/])->f_19))
		{
			*iParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051260->f_48[iParam0 /*78*/])->f_19);
		}
		else
		{
			return 0;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST((Global_1914319->f_3[iParam0 /*446*/])->f_23))
	{
		*iParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1914319->f_3[iParam0 /*446*/])->f_23);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_114(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_269(iParam0)))
	{
		return;
	}
	if (!PED::_0x34D6AC1157C8226C(iParam0, 1951271908))
	{
		return;
	}
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0, 0))
	{
		return;
	}
	if (bLocal_10)
	{
		return;
	}
	switch (iLocal_9)
	{
		case 0:
			iLocal_13 = func_270(func_192());
			iLocal_12 = func_271(iLocal_13);
			iLocal_9 = 1;
			break;
		case 1:
			if (STREAMING::IS_MODEL_VALID(iLocal_12))
			{
				STREAMING::REQUEST_MODEL(iLocal_12, false);
				iLocal_9 = 2;
			}
			break;
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_12))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(func_269(iParam0)))
			{
				return;
			}
			iLocal_11 = PED::_0x4D0D2E3D8BC000EB(iParam0, "p_cs_newspaper_02x_noanim_PH_L_HAND", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_11))
			{
				iLocal_11 = PED::_0x4D0D2E3D8BC000EB(iParam0, "p_cs_newspaper_02x_noanim_PH_L_HAND", 1);
				OBJECT::DELETE_OBJECT(&iLocal_11);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_11))
				{
					iLocal_11 = OBJECT::CREATE_OBJECT(iLocal_12, ENTITY::GET_ENTITY_COORDS(iParam0, false, false) + Vector(3f, 0f, 0f), true, true, false, false, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_11))
				{
					if (PED::_0x3BBDD6143FF16F98(iParam0, iLocal_11, "p_cs_newspaper_02x_noanim_PH_L_HAND", "WORLD_HUMAN_SELL_PAPER", "WORLD_HUMAN_SELL_PAPER_MALE_A", 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_12);
						iLocal_9 = 3;
					}
				}
			}
			else
			{
				return;
			}
			break;
		case 3:
			bLocal_10 = true;
			break;
	}
}

bool func_115()
{
	return Global_1898164->f_163;
}

void func_116(var uParam0)
{
	if (!func_272())
	{
		func_273(&uLocal_143);
		func_274(uParam0);
	}
}

int func_117(int iParam0, int iParam1)
{
	if (!func_268(iParam0))
	{
		return 0;
	}
	if (func_275(iParam1))
	{
		return 0;
	}
	return func_276((Global_1914319->f_3[iParam0 /*446*/])->f_10, 1024);
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_231(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15768[iParam0] && iParam1) != 0;
}

void func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_277(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	func_229(Global_23117.f_1651[iVar1], iParam2);
}

void func_120()
{
	if (func_278(2504.489f, -1450.591f, 46.31302f, 1) < 225f)
	{
		func_279();
		bLocal_769 = true;
	}
	else if (bLocal_769)
	{
		func_280();
		bLocal_769 = false;
	}
}

void func_121()
{
	func_281(&uLocal_759, &uLocal_761, &uLocal_760, 2753.91f, -1396.01f, 45.21f, 1788943942, -712193496 /* GXTEntry: "Saint Denis Trolley Rider\'s Digest" */, -523602066);
}

void func_122(var uParam0)
{
	if (!uParam0->f_18 && func_23(269, 0))
	{
		if (*uParam0 < 7)
		{
			*uParam0 = 8;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (func_152(uParam0->f_13))
			{
				*uParam0 = 9;
			}
			if (!_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x112DDF56300BC6E5(func_282(uParam0->f_1))))
			{
				*uParam0 = 9;
			}
			*uParam0 = 1;
			break;
		case 1:
			if (uParam0->f_19 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
			{
				PED::_0x7D4E70A67A651C71(2);
				uParam0->f_19 = 0;
			}
			if (!func_283(uParam0))
			{
				return;
			}
			if (uParam0->f_12 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			else
			{
				*uParam0 = 9;
				return;
			}
			if (uParam0->f_17 != 0)
			{
				PROPSET::_REQUEST_PROPSET(uParam0->f_17);
			}
			*uParam0 = 2;
			break;
		case 2:
			if (func_284(uParam0))
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			if (func_283(uParam0))
			{
				if (func_285(uParam0))
				{
					*uParam0 = 9;
					return;
				}
				if (!uParam0->f_19)
				{
					PED::_0xF008E0BA1FE1D644(2);
					uParam0->f_19 = 1;
				}
				*uParam0 = 4;
			}
			break;
		case 4:
			if (!func_284(uParam0))
			{
				*uParam0 = 1;
				return;
			}
			if (func_286(uParam0))
			{
				*uParam0 = 5;
			}
			break;
		case 5:
			if (func_287(uParam0))
			{
				func_288(uParam0);
				*uParam0 = 1;
			}
			if (func_289(uParam0))
			{
				*uParam0 = 7;
			}
			break;
		case 7:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(func_282(uParam0->f_1), &(uParam0->f_3));
			}
			if (ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x31C70A716CAE1FEE(_NAMESPACE48::_0x112DDF56300BC6E5(func_282(uParam0->f_1)))))
			{
				*uParam0 = 6;
			}
			else
			{
				*uParam0 = 9;
			}
			break;
		case 6:
			if (_NAMESPACE48::_0xF8DE7154F7D1458F(_NAMESPACE48::_0x112DDF56300BC6E5(func_282(uParam0->f_1))) == uParam0->f_11)
			{
				*uParam0 = 9;
			}
			else
			{
				_NAMESPACE48::_0x669C25840C6F7AE2(_NAMESPACE48::_0x112DDF56300BC6E5(func_282(uParam0->f_1)), uParam0->f_11);
			}
			break;
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
			{
				*uParam0 = 9;
				return;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_288(uParam0);
				*uParam0 = 9;
				return;
			}
			if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_11, true, false), 3f))
			{
				func_288(uParam0);
				*uParam0 = 9;
			}
			break;
		case 9:
			if (func_290(uParam0))
			{
				*uParam0 = 10;
			}
			break;
		case 10:
			return;
	}
}

void func_123(var uParam0)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;

	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6))
	{
		return;
	}
	if (uParam0->f_17 > 0)
	{
		if (func_115())
		{
			uParam0->f_17 = 4;
		}
		if (!VOLUME::_0xF256A75210C5C0EB(uParam0->f_5, Global_36) && func_291(uParam0, 8, 0, 1))
		{
			uParam0->f_17 = 4;
		}
		if (VOLUME::_0xF256A75210C5C0EB(uParam0->f_7, Global_36))
		{
			if (func_291(uParam0, 65536, 0, 1))
			{
				func_292(uParam0, 1);
				uParam0->f_17 = 3;
			}
		}
		if (func_293(Global_35, 1, 0, 0) != joaat("weapon_unarmed") && func_291(uParam0, 4096, 0, 1))
		{
			func_292(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (func_294(Global_35, uParam0->f_5) && func_291(uParam0, 2048, 0, 1))
		{
			func_292(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (func_295(&uVar0) && func_291(uParam0, 256, 0, 1))
		{
			func_292(uParam0, 1);
			uParam0->f_17 = 3;
		}
	}
	switch (uParam0->f_17)
	{
		case 0:
			if (func_296(PLAYER::PLAYER_ID(), 1, 0, 1) || func_115())
			{
				return;
			}
			if (VOLUME::_0xF256A75210C5C0EB(uParam0->f_5, Global_36))
			{
				if (!func_172(uParam0->f_3))
				{
					return;
				}
				if (!_NAMESPACE48::_0x800DF3FC913355F3(func_237(uParam0->f_3)))
				{
					return;
				}
				uParam0->f_4 = func_244(uParam0->f_3);
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
				{
					return;
				}
				func_297(uParam0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 130, true);
				PED::_0x85F500F4E24CA43E(uParam0->f_4, 0f);
				PED::_0x9B9B9FA0EA283E3D(uParam0->f_4, 0f);
				uParam0->f_17 = 1;
			}
			break;
		case 1:
			bVar2 = false;
			if ((VOLUME::_0xF256A75210C5C0EB(uParam0->f_6, Global_36) && !func_298(uParam0)) && func_299(uParam0, -1))
			{
				if (func_300(0) && func_291(uParam0, 128, 0, 1))
				{
					bVar2 = true;
				}
				else if (func_295(&uVar1) && func_291(uParam0, 256, 0, 1))
				{
					uParam0->f_17 = 3;
				}
				else if (func_291(uParam0, 64, 0, 1))
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				uParam0->f_17 = 2;
			}
			break;
		case 2:
			if (!VOLUME::_0xF256A75210C5C0EB(uParam0->f_6, Global_36))
			{
				if (func_299(uParam0, 30))
				{
					if (func_291(uParam0, 16, 0, 1))
					{
					}
				}
			}
			break;
		case 3:
			if (func_296(PLAYER::PLAYER_ID(), 1, 0, 1) || func_294(Global_35, uParam0->f_5))
			{
				if (!func_301(Global_35, 474215631))
				{
					TASK::TASK_COWER(uParam0->f_4, -1, Global_35, 0);
				}
				if (func_291(uParam0, 1048576, 0, 1))
				{
				}
				uParam0->f_17 = 4;
			}
			else if ((VOLUME::_0xF256A75210C5C0EB(uParam0->f_7, Global_36) == 0 && func_293(Global_35, 1, 0, 0) == joaat("weapon_unarmed")) && !func_295(&uVar1))
			{
				bVar3 = false;
				if (func_291(uParam0, 8192, 0, 0))
				{
					bVar3 = true;
				}
				else if (func_291(uParam0, 16384, 0, 0))
				{
					bVar3 = true;
				}
				else if (func_291(uParam0, 32768, 0, 0))
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					func_302(uParam0, 65536);
					func_302(uParam0, 256);
					func_302(uParam0, 4096);
					func_292(uParam0, 0);
					uParam0->f_17 = 0;
				}
			}
			break;
		case 4:
			PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 130, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_4, false);
			PED::_0x85F500F4E24CA43E(uParam0->f_4, -1f);
			PED::_0x9B9B9FA0EA283E3D(uParam0->f_4, -1f);
			func_303(uParam0);
			uParam0->f_17 = 0;
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_124(int iParam0)
{
	if (func_304(iParam0, Global_36))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
	}
}

bool func_125(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_126(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_127()
{
	return func_125(&Global_1935630, 4096);
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_129(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_305(iParam0));
}

bool func_130(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_131()
{
	return Global_1897952->f_41;
}

void func_132(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_306())
	{
		return;
	}
	sVar1 = func_307(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_308(iParam4))
	{
		if (func_99(iParam0))
		{
			iParam4 = func_309(func_6(iParam0));
		}
		else
		{
			iParam4 = func_309(iParam1);
		}
	}
	if (func_308(iParam4))
	{
		iVar3 = func_310(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_312(func_311(iParam2));
	}
	else if ((func_313(iParam1, 2) || func_314(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_99(iParam0) && func_149(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_251(func_250());
		iVar5 = func_315(func_250());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_316(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_317(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_317(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_316(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_317(&cVar6, joaat("COLOR_PURE_WHITE")), func_317(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_318(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_133(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_134(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_319(128))
	{
		return;
	}
	if (!func_320(iParam0))
	{
		return;
	}
	if (func_149(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_321(Global_1935630, 8192);
	func_323(func_322(-1532769513, joaat("areas")), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_323(func_322(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_323(func_322(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_323(func_322(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_323(func_322(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_323(func_322(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_323(func_322(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_19(iParam0, 64);
	}
}

bool func_135()
{
	return (Global_1894899 & 1 != 0 && func_192() != -1);
}

void func_136()
{
	if (!func_324(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_325(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_137(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_326() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_324(iVar1) && !func_327(iVar1, iParam2)) && (!bParam3 || !func_328(iVar1))) && (!bParam4 || !func_329(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_330(iVar0);
			}
		}
		iVar0++;
	}
}

void func_138(bool bParam0)
{
	bool bVar0;

	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

int func_139()
{
	return Global_40.f_4283.f_1;
}

void func_140(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("thunderstorm"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_142()
{
	if (func_153(iLocal_770))
	{
		func_331(iLocal_770);
	}
}

void func_143(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_144(int iParam0)
{
	iParam0 = iParam0;
	func_97(0.775f, 0.2f, 0.025f, 0f);
	FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(-1190799868, 0, 48, false);
	func_332();
	func_333(1);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(426813831, false);
	if (HUD::_0x2C729F2B94CEA911("SCSFAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("SCSFAUD"))
		{
			HUD::_0xAA03F130A637D923("SCSFAUD");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("SCSCAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("SCSCAUD"))
		{
			HUD::_0xAA03F130A637D923("SCSCAUD");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("STDRGAU"))
	{
		if (HUD::_0xD0976CC34002DB57("STDRGAU"))
		{
			HUD::_0xAA03F130A637D923("STDRGAU");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("RESAMAU"))
	{
		if (HUD::_0xD0976CC34002DB57("RESAMAU"))
		{
			HUD::_0xAA03F130A637D923("RESAMAU");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("RERIAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("RERIAUD"))
		{
			HUD::_0xAA03F130A637D923("RERIAUD");
		}
	}
	VEHICLE::_REMOVE_SPEED_ZONE(iLocal_678);
	LAW::_REMOVE_GUARD_ZONE(sLocal_665);
	func_334(iLocal_666);
	func_334(iLocal_667);
	func_334(iLocal_668);
	func_335();
	func_336();
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_677))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_677);
		VOLUME::_0x43F867EF5C463A53(iLocal_677);
	}
	func_290(&uLocal_719);
	func_290(&uLocal_739);
}

void func_145(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1935369->f_5[iVar0 /*11*/])->f_5 == iParam0)
		{
			func_206(iVar0);
		}
		iVar0++;
	}
}

void func_146(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_212(iVar0);
		}
		iVar0++;
	}
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_337(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_338(&((Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1]));
		(Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1] = 0;
		iVar1++;
	}
}

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_99(iParam0))
	{
		return 1;
	}
	if (func_185(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_339(Global_1897950->f_1, 16))
			{
				func_340(Global_1897950->f_1, 0);
			}
			Global_1897950->f_1++;
			iVar2++;
			if (Global_1897950->f_1 > iVar1)
			{
				Global_1897950->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_149(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_150(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_151(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!func_341(iParam0))
	{
		return;
	}
	if (func_152(vParam1))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_15 = { vParam1 };
	(Global_1395601->f_5[iParam0 /*28*/])->f_18 = fParam4;
	(Global_1395601->f_5[iParam0 /*28*/])->f_23 = iParam5;
	if (VOLUME::_0x92A78D0BEDB332A3(iParam5))
	{
	}
	if (!func_254(242, 1, 1))
	{
		func_342(iParam0, 1);
	}
	func_343(iParam0);
	func_344(iParam0, 1);
	(Global_40.f_9384[iParam0 /*2*/])->f_1 = func_250();
}

int func_152(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 5)
	{
		return VOLUME::_0x92A78D0BEDB332A3(&(Global_43893[iParam0]));
	}
	return 0;
}

void func_154()
{
	func_68(-939420910);
	func_68(-1187950766);
	func_68(356365161);
	func_68(753127042);
	func_68(-2038424081);
	func_68(1884271742);
	func_68(459290420);
}

void func_155()
{
	func_68(704802028);
	func_68(588987611);
	func_68(2008888900);
	func_68(1649996811);
	func_68(227918160);
	func_68(168171957);
	func_68(1193080109);
	func_68(-491981251);
	func_68(-639037538);
	func_68(-618620429);
}

int func_156(int iParam0, bool bParam1)
{
	switch (func_345(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_157(int iParam0)
{
	if (!func_346(iParam0))
	{
		return 0;
	}
	return func_347(iParam0);
}

void func_158(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_348(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_349(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_350(iParam16);
			return;
		}
		iVar0++;
	}
}

int func_159(int iParam0, int iParam1)
{
	return func_282(func_258(iParam0, iParam1));
}

void func_160(int iParam0, var uParam1)
{
	Global_1396116->f_98[iParam0 /*2*/] = uParam1;
}

void func_161(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return;
	}
	(Global_1396116->f_98[iParam0 /*2*/])->f_1 = func_250();
}

int func_162(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_163(int iParam0)
{
	if (func_351(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_164(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_163(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, iParam3);
	}
}

void func_165(int iParam0, bool bParam1)
{
	if (func_163(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_166(int iParam0, bool bParam1)
{
	if (func_163(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_167(int iParam0, bool bParam1)
{
	if (func_163(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_168()
{
	return 1;
}

bool func_169(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 41);
}

Vector3 func_170(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -789.869f, -1362.602f, 43.687f;
		case 1:
		case 2:
			return 2686.483f, -1362.37f, 48.2681f;
		case 0:
			return 2541.448f, -1281.873f, 49.26815f;
		case 3:
			return -354.8969f, 705.4585f, 116.9782f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 525;
		case 1:
		case 2:
			return 284;
		case 0:
			return 283;
		case 3:
			return 33;
		default:
			break;
	}
	return -1;
}

bool func_172(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_173(int iParam0)
{
	if (!func_169(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 0;
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return 1;
	}
	return -1;
}

int func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

struct<8> func_175(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_176(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_177(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_178(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_179(int iParam0)
{
	int iVar0;

	if (*iParam0 == -15)
	{
		return;
	}
	iVar0 = func_250();
	func_353(iParam0, func_352(iVar0));
	func_355(iParam0, func_354(iVar0));
	func_357(iParam0, func_356(iVar0));
}

void func_180(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam1 < 2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0)
	{
		iVar1 = (iParam1 - 1);
		while (iVar1 >= 0)
		{
			bVar0 = false;
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				if (uParam0[iVar2] > uParam0[iVar2 + 1])
				{
					uVar3 = uParam0[iVar2];
					(*uParam0)[iVar2] = uParam0[iVar2 + 1];
					(*uParam0)[iVar2 + 1] = uVar3;
					bVar0 = true;
				}
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
		}
	}
}

void func_181(var uParam0)
{
	uParam0->f_31 = 71303;
	uParam0->f_32 = 71739;
	uParam0->f_11 = 1;
}

void func_182()
{
	var uVar0;
	var uVar6;
	var uVar12;
	var uVar18;
	var uVar24;
	var uVar30;
	var uVar36;
	var uVar42;
	var uVar48;

	uVar0 = 5;
	func_360(&Local_177, 256, &uVar0, 0, 0);
	(Local_177[0 /*45*/])->f_43 = 72003;
	(Local_177[0 /*45*/])->f_44 = 72130;
	func_363(Local_177[0 /*45*/], 512);
	uVar6 = 5;
	func_360(&Local_177, 200, &uVar6, 1, 0);
	(Local_177[1 /*45*/])->f_43 = 72259;
	(Local_177[1 /*45*/])->f_44 = 72130;
	func_363(Local_177[1 /*45*/], 512);
	uVar12 = 5;
	func_360(&Local_177, 138, &uVar12, 2, 0);
	(Local_177[2 /*45*/])->f_43 = 72502;
	(Local_177[2 /*45*/])->f_44 = 72130;
	func_363(Local_177[2 /*45*/], 512);
	uVar18 = 5;
	func_360(&Local_177, 137, &uVar18, 3, 0);
	(Local_177[3 /*45*/])->f_43 = 72877;
	(Local_177[3 /*45*/])->f_44 = 72130;
	func_363(Local_177[3 /*45*/], 512);
	uVar24 = 5;
	func_360(&Local_177, 202, &uVar24, 4, 0);
	(Local_177[4 /*45*/])->f_43 = 73064;
	(Local_177[4 /*45*/])->f_44 = 72130;
	func_363(Local_177[4 /*45*/], 512);
	uVar30 = 5;
	func_360(&Local_177, 205, &uVar30, 5, 0);
	(Local_177[5 /*45*/])->f_43 = 73508;
	(Local_177[5 /*45*/])->f_44 = 72130;
	func_363(Local_177[5 /*45*/], 512);
	uVar36 = 5;
	func_360(&Local_177, 141, &uVar36, 6, 0);
	(Local_177[6 /*45*/])->f_43 = 73605;
	(Local_177[6 /*45*/])->f_44 = 72130;
	func_363(Local_177[6 /*45*/], 512);
	uVar42 = 5;
	func_360(&Local_177, 219, &uVar42, 7, 0);
	(Local_177[7 /*45*/])->f_43 = 73787;
	(Local_177[7 /*45*/])->f_44 = 72130;
	func_363(Local_177[7 /*45*/], 512);
	uVar48 = 5;
	func_360(&Local_177, 140, &uVar48, 8, 0);
	(Local_177[8 /*45*/])->f_43 = 73959;
	(Local_177[8 /*45*/])->f_44 = 72130;
}

int func_183(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return func_149(iParam0, 33554432);
}

int func_184(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 32:
			return 1;
		case 35:
			return 1;
		case 65:
			return 1;
		case 95:
			return 1;
	}
	return 0;
}

int func_185(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_20() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return 0;
	}
	return 1;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 1;
		case 65:
			return 1;
		case 66:
			return 1;
		case 67:
			return 1;
		case 68:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_187(int iParam0, bool bParam1)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	if (!func_339(iParam0, 2))
	{
		return 0;
	}
	if (func_339(iParam0, 32) && !bParam1)
	{
		func_372(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_282(iParam0)));
		if (func_20() == -1)
		{
			if (func_339(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_237(iParam0));
				func_373(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_237(iParam0));
		}
		return 0;
	}
	if (!func_374(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_237(iParam0)))
	{
		func_373(iParam0, 128);
		return 1;
	}
	func_372(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_282(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_237(iParam0));
	if (func_339(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_237(iParam0));
		func_373(iParam0, 2048);
	}
	return 1;
}

bool func_188(int iParam0)
{
	return ((*Global_1934182)[iParam0 /*18*/])->f_15;
}

void func_189(int iParam0)
{
	int iVar0;

	func_375(iParam0, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_163(&(((*Global_1934182)[iParam0 /*18*/])->f_8[iVar0])))
		{
			if (!func_376(&(((*Global_1934182)[iParam0 /*18*/])->f_8[iVar0])))
			{
				func_61(&(((*Global_1934182)[iParam0 /*18*/])->f_8[iVar0]), 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_190(int iParam0)
{
	Global_1934182->f_74 = (Global_1934182->f_74 - (Global_1934182->f_74 && iParam0));
}

void func_191(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	((*Global_1934182)[iParam0 /*18*/])->f_8[iParam1] = func_162(iParam2, NETWORK::NETWORK_IS_IN_SESSION(), 0);
}

int func_192()
{
	return Global_1894899->f_2;
}

bool func_193(int iParam0)
{
	if (!func_377(iParam0))
	{
		return false;
	}
	return (!func_66() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

int func_194(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_195(int iParam0)
{
	int iVar0;

	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_378(iVar0))
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_196(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_197(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_198(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

int func_199(int iParam0, int iParam1)
{
	return func_215(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_379(iParam1)));
}

void func_200(int iParam0, int iParam1)
{
	if (!func_197(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

bool func_201(int iParam0)
{
	return func_345(iParam0) == 0;
}

int func_202(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_380(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_204(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_201(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_204(iParam0);
		if (iVar2 >= 0)
		{
			func_381(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_382(iVar1, 1);
			func_381(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_204(iParam0);
		if (iVar2 >= 0)
		{
			func_381(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_383(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_382(iVar0, 1);
					func_381(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_206(int iParam0)
{
	func_384((Global_1935369->f_5[iParam0 /*11*/])->f_6, 1);
	func_385((Global_1935369->f_5[iParam0 /*11*/])->f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD((Global_1935369->f_5[iParam0 /*11*/])->f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11((Global_1935369->f_5[iParam0 /*11*/])->f_8);
		(Global_1935369->f_5[iParam0 /*11*/])->f_8 = 0;
	}
	func_386(iParam0, 8192);
	func_386(iParam0, 16384);
	func_386(iParam0, 32768);
	func_386(iParam0, 131072);
	func_386(iParam0, 16777216);
	func_386(iParam0, 524288);
	func_386(iParam0, 1048576);
	(Global_1935369->f_5[iParam0 /*11*/])->f_10 = 0;
	(Global_1935369->f_5[&Global_1935369 /*11*/])->f_9 = 0;
	Global_1935369->f_5[iParam0 /*11*/] = 0;
	(Global_1935369->f_5[iParam0 /*11*/])->f_1 = { 0f, 0f, 0f };
	(Global_1935369->f_5[iParam0 /*11*/])->f_4 = 0;
	(Global_1935369->f_5[iParam0 /*11*/])->f_5 = -1;
	(Global_1935369->f_5[iParam0 /*11*/])->f_6 = -1;
	(Global_1935369->f_5[iParam0 /*11*/])->f_7 = 0;
}

int func_207(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_208(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_209(int iParam0)
{
	if (!func_231(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_210(int iParam0)
{
	if (!func_231(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -308.18f, 812.19f, 117.99f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -176.3f, 630.1f, 115.331f;
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_211(int iParam0, int iParam1)
{
	return func_387((Global_1914319->f_3[iParam0 /*446*/])->f_5, iParam1);
}

void func_212(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_172((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_388((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_389((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_17 = 0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1914319->f_3[iParam0 /*446*/])->f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1914319->f_3[iParam0 /*446*/])->f_34, false);
	}
	func_390((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_221(iParam0, 536870912);
	iVar1 = func_223(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_338(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
			(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = 0;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = 0f;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	if ((Global_1914319->f_3[iParam0 /*446*/])->f_440 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1914319->f_3[iParam0 /*446*/])->f_440, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = 0;
	func_391(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_392(iParam0, 0);
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_215(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_393())
	{
		iVar2 = func_393();
	}
	iVar5 = func_394(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_395(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_395(iVar6) == 0)
			{
				return func_396(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_395(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_395(iVar6) == 0)
			{
				return func_396(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_396(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_216(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 22:
			return 55f;
	}
	return 12.5f;
}

int func_217(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_211(iParam0, 16384) && !func_397(iParam0, 1))
	{
		return 1;
	}
	if (!func_172(iParam1))
	{
		return 0;
	}
	iVar0 = func_244(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iParam0 /*446*/])->f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1914319->f_3[iParam0 /*446*/])->f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1914319->f_3[iParam0 /*446*/])->f_25);
			}
		}
		func_96(iParam1, (Global_1914319->f_3[iParam0 /*446*/])->f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1914319->f_3[iParam0 /*446*/])->f_25, 1, 1);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iParam0 /*446*/])->f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1914319->f_3[iParam0 /*446*/])->f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1914319->f_3[iParam0 /*446*/])->f_28);
			}
		}
		func_96(iParam1, (Global_1914319->f_3[iParam0 /*446*/])->f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1914319->f_3[iParam0 /*446*/])->f_28, 0, 1);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = iParam1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = iVar0;
	return 1;
}

void func_218(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 92:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 38:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		case 105:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		case 76:
			if (!func_256(29))
			{
				if (func_58(29) && func_398() <= func_399(29))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_256(3))
			{
				if (func_58(3) && func_398() <= func_399(3))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_256(25))
			{
				if (func_58(25) && func_398() <= func_399(25))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_219()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_220(int iParam0)
{
	if (!func_231(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!func_276(iParam0, 2))
			{
				func_233(iParam0, 2);
			}
			break;
	}
}

void func_221(int iParam0, int iParam1)
{
	if (!func_268(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

void func_222(int iParam0, int iParam1)
{
	if (!func_268(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 || iParam1);
}

int func_223(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

int func_224(int iParam0)
{
	int iVar0;

	if (!func_231(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0, int iParam1)
{
	if (!func_231(iParam0))
	{
		return false;
	}
	return (Global_20709.f_2246[iParam0] && iParam1) != 0;
}

void func_226(int iParam0, int iParam1)
{
	if (!func_231(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (Global_20709.f_2246[iParam0] || iParam1);
	}
}

void func_227(int iParam0, int iParam1)
{
	if (!func_231(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (&Global_20709.f_2246[iParam0] - (Global_20709.f_2246[iParam0] && iParam1));
	}
}

void func_228(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

void func_229(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;

	if (&Global_1430252 < (MISC::GET_FRAME_COUNT() - 30))
	{
		Global_1430252 = MISC::GET_FRAME_COUNT();
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Global_1430252->f_1[iVar0] = 0;
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 13)
		{
			if (&Global_40.f_9479[iVar1 /*4*/] != -1)
			{
				Global_1430252->f_1[&Global_40.f_9479[iVar1 /*4*/]] = &Global_1430252->f_1[&Global_40.f_9479[iVar1 /*4*/]] + 1;
			}
			iVar1++;
		}
	}
	return &(Global_1430252->f_1[iParam0]);
}

bool func_231(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_232(int iParam0, int iParam1)
{
	if (!func_231(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_233(int iParam0, int iParam1)
{
	if (!func_231(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_234(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_235(int iParam0, bool bParam1)
{
	if (!func_268(iParam0))
	{
		return;
	}
	if ((bParam1 && func_400(iParam0, 512)) || (!bParam1 && !func_400(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_222(iParam0, 512);
	}
	else
	{
		func_221(iParam0, 512);
	}
	if (func_401(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_236(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_172(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_237(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_244(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_237(iParam0));
}

int func_237(int iParam0)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

bool func_238(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_239(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_240(int iParam0)
{
	return iParam0 != 0;
}

int func_241()
{
	return Global_1934266->f_26;
}

int func_242(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1934266->f_26 != iParam0)
	{
		Global_1934266->f_26 = iParam0;
		iVar0 = iParam1;
		if (!func_308(iParam1))
		{
			iVar0 = func_402(iParam0);
		}
		if (!func_308(iVar0))
		{
			iVar0 = func_309(func_403(Global_36));
		}
		if (!func_308(iVar0))
		{
			return 0;
		}
		LAW::_0x4752F68EB7F2D280(PLAYER::PLAYER_ID(), Global_1934266->f_26, func_404(iVar0));
		return 1;
	}
	return 0;
}

int func_243(int iParam0)
{
	if (Global_40.f_7729 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_244(int iParam0)
{
	int iVar0;

	iVar0 = func_237(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
}

bool func_245()
{
	if (func_20() == -1)
	{
		return true;
	}
	return NETWORK::CAN_REGISTER_MISSION_OBJECTS(1);
}

float func_246(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_247()
{
	if (Local_14 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_14.f_6);
		STREAMING::REQUEST_MODEL(Local_14, false);
		Local_14.f_16 = 1;
	}
}

int func_248()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_14.f_6))
	{
		return STREAMING::HAS_ANIM_DICT_LOADED(Local_14.f_6);
	}
	return 1;
}

int func_249()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Local_14.f_5 <= 0)
	{
		return 0;
	}
	iVar1 = func_250();
	iVar2 = func_251(iVar1);
	iVar3 = func_315(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_14.f_5 - 1))
	{
		iVar4 = func_251(&(Local_14.f_1[iVar0]));
		iVar5 = func_315(&(Local_14.f_1[iVar0]));
		if (iVar4 == iVar2 && MISC::ABSI((iVar3 - iVar5)) <= 5)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_250()
{
	return &Global_1899515;
}

int func_251(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_252(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	fVar0 = ENTITY::_0x627520389E288A73(iParam0, sParam1, sParam2);
	return MISC::ABSF(((1f - fVar0) - fParam3)) < 0.01f;
}

int func_253(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_251(func_250());
	if (func_387(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_387(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_405())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_406(&(Global_1898164->f_1[0 /*5*/]));
		if (func_407(iVar0) && func_408(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_383(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_255(int iParam0)
{
	int iVar0;

	if (!func_409(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if ((Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])->f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_256(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_410(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_411(iParam0))
	{
		return 0;
	}
	if (!func_412(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		return func_413(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_258(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_259(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return 0;
	}
	return func_387((Global_40.f_9829[iParam0 /*4*/])->f_2, iParam1);
}

void func_260(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_229(&((Global_40.f_9829[iParam0 /*4*/])->f_2), iParam1);
}

void func_261(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<16> Var10;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), func_414(iParam0, iParam1), 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 1;
	func_158(Var10, 0);
}

void func_262(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_150(&((Global_40.f_9829[iParam0 /*4*/])->f_2), iParam1);
}

Vector3 func_263(int iParam0)
{
	if (!func_172(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_237(iParam0)))
	{
		return 0f, 0f, 0f;
	}
	return _NAMESPACE48::_0x5EE6FCCC9C832CA2(func_237(iParam0));
}

int func_264(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_172(iParam0))
	{
		return 0;
	}
	if (!func_415(func_282(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_237(iParam0)))
	{
		func_187(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_236(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_416(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_152(vVar0))
	{
		_NAMESPACE48::_0x59C7AD6FEA2AC449(func_237(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _NAMESPACE48::_0x08FC896D2CB31FCC(func_237(iParam0), 0);
	}
	else
	{
		iVar3 = _NAMESPACE48::_0x0CADC3A977997472(func_237(iParam0), 0);
	}
	if (!func_152(vVar0))
	{
		_NAMESPACE48::_0xBB68908CD11AEBDC(func_237(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_265()
{
	return (func_125(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

int func_266(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_172(iParam0))
	{
		return 0;
	}
	if (!func_388(iParam0) && bParam1)
	{
		return 0;
	}
	return func_339(iParam0, 1);
}

void func_267(int iParam0)
{
	int iVar0;

	iVar0 = func_237(iParam0);
	if (!func_93())
	{
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar0);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(698203522) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(698203522))
		{
			if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, false);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x31C70A716CAE1FEE(iVar0)))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, false);
			}
		}
	}
	else if (!func_339(iParam0, 32))
	{
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			_NAMESPACE48::_0x4F81EAD1DE8FA19B(iVar0);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(698203522) && !TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(698203522))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, true);
		}
	}
}

bool func_268(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_269(int iParam0)
{
	return iParam0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 26:
		case 38:
			return 0;
		case 5:
		case 105:
			return 2;
		case 76:
		case 78:
		case 92:
			return 1;
	}
	return 0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1513502493;
		case 1:
			return -1812624322;
		case 2:
			return -1994196093;
		default:
			return -1994196093;
	}
	return -1994196093;
}

int func_272()
{
	if (Global_1935183->f_28 && func_417(2))
	{
		return 1;
	}
	return 0;
}

void func_273(var uParam0)
{
	int iVar0;
	var uVar1;

	switch (uParam0->f_8)
	{
		case 1:
			func_418(uParam0);
			uParam0->f_8 = 2;
			break;
		case 2:
			if ((func_419(2, 2) || func_419(1, 2)) || func_419(0, 2))
			{
				uParam0->f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -1.25f, -1f, -1f) };
				uParam0->f_8 = 4;
			}
			break;
		case 4:
			if (func_420(uParam0))
			{
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal)
				{
					uParam0->f_8 = 32;
				}
				Jump @1358; //curOff = 175
			}
			else if (uParam0->f_10)
			{
				uParam0->f_3 = func_421();
				Stack.Push(uParam0->f_3 != 0);
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal && StackVal)
				{
					PED::_0xF008E0BA1FE1D644(1);
					STREAMING::REQUEST_MODEL(uParam0->f_3, false);
					uParam0->f_8 = 8;
				}
				else
				{
					uParam0->f_8 = 512;
				}
			}
			else
			{
				uParam0->f_8 = 512;
			}
			break;
		case 8:
			if (!PED::_0x5E420FF293EE5472())
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_3))
			{
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					Stack.Push(uParam0);
					Stack.Push(uParam0->f_3);
					Call_Loc(uParam0->f_32);
					if (StackVal)
					{
						uParam0->f_1 = func_422(uParam0->f_3, uParam0->f_4, ENTITY::GET_ENTITY_HEADING(Global_35), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 0);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 0);
						uParam0->f_8 = 16;
					}
					else
					{
						Jump @443; //curOff = 431
						uParam0->f_8 = 32;
						Jump @1358; //curOff = 440
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							uParam0->f_8 = 512;
						}
						Jump @1358; //curOff = 462
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(0, Global_35, -1.15f, -0.5f, 0f, 1f, -1, 0);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 4f, 0f), 2000);
							TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, true, true);
							uParam0->f_8 = 32;
						}
						else
						{
							uParam0->f_8 = 256;
							Jump @1358; //curOff = 605
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							}
							if (!func_423(uParam0->f_1))
							{
								if (func_424() && func_425(uParam0->f_1, 1))
								{
									if (func_426(uParam0, uParam0->f_15))
									{
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 1);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 7, 1, 0);
										func_427(&(uParam0->f_12));
										uParam0->f_8 = 64;
									}
									else
									{
										uParam0->f_8 = 256;
									}
								}
								else if (!func_428(&(uParam0->f_12)))
								{
									func_429(&(uParam0->f_12), 1);
								}
								else if (func_430(&(uParam0->f_12)) > 15f)
								{
									func_427(&(uParam0->f_12));
									uParam0->f_8 = 256;
								}
							}
							else
							{
								uParam0->f_8 = 256;
							}
							Jump @1358; //curOff = 861
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_18)))
							{
								uParam0->f_8 = 512;
							}
							else
							{
								if (!func_428(&(uParam0->f_12)))
								{
									func_429(&(uParam0->f_12), 1);
								}
								else if (func_430(&(uParam0->f_12)) > 3f)
								{
									uParam0->f_8 = 128;
								}
								Jump @1358; //curOff = 961
								if (!func_431(1))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
									{
										TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_1, 10000, 0, 51, 0);
										if (!PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_1))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_1, Global_35, -1, -1082130432, -1082130432, -1082130432);
										}
										if (func_426(uParam0, uParam0->f_18))
										{
										}
									}
									uParam0->f_8 = 256;
								}
								Jump @1358; //curOff = 1063
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
									if (func_423(uParam0->f_1))
									{
										func_432(1, 1, 1);
									}
									if (!func_431(1))
									{
										uVar1 = TASK::_0xF533D68FF970D190(func_433(), 1996775727, 3f, 1, 0);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::TASK_STAND_STILL(0, 2000);
										if (TASK::_0x841475AC96E794D1(uVar1))
										{
											TASK::_TASK_USE_SCENARIO_POINT(0, uVar1, 0, 0, 1, 0, 0, 0, -1082130432, 0);
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(0, Global_35, 50f, -1, 16768, 1f, 0);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, 0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, 0);
										func_434(&(uParam0->f_1), 1, 0, 1);
										if (uParam0->f_10)
										{
											PED::_0x7D4E70A67A651C71(1);
										}
										uParam0->f_8 = 512;
									}
								}
								else
								{
									uParam0->f_8 = 512;
								}
								Jump @1358; //curOff = 1305
								if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									func_427(&(uParam0->f_12));
									if (uParam0->f_10)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_3);
									}
									uParam0->f_1 = 0;
									uParam0->f_8 = 1024;
								}
							}
						}
					}
				}
			}
		}

void func_274(var uParam0)
{
	if (((*uParam0)[iLocal_176 /*45*/])->f_29 == 1)
	{
		if (func_435((*uParam0)[iLocal_176 /*45*/], 1, 1))
		{
			func_436((*uParam0)[iLocal_176 /*45*/]);
		}
	}
	iLocal_176++;
	if (iLocal_176 >= 9)
	{
		iLocal_176 = 0;
	}
}

bool func_275(int iParam0)
{
	bool bVar0;

	bVar0 = func_276(iParam0, 256);
	return bVar0;
}

bool func_276(int iParam0, int iParam1)
{
	if (!func_231(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 0;
		case 105:
			return 1;
		case 5:
			return 2;
		case 120:
			return 3;
		case 26:
			return 4;
		case 38:
			return 5;
		case 69:
			return 6;
		case 28:
			return 7;
		case 115:
			return 8;
		case 92:
			return 9;
		case 78:
			return 10;
		default:
			break;
	}
	return -1;
}

float func_278(vector3 vParam0, int iParam3)
{
	return func_437(Global_35, vParam0, iParam3);
}

void func_279()
{
	func_438(iLocal_762[0], 802578733, 2504.532f, -1465.064f, 45.311f);
	func_438(iLocal_762[1], 802578733, 2500.124f, -1465.064f, 45.311f);
	func_438(iLocal_762[2], 802578733, 2499.337f, -1452.443f, 45.311f);
	func_438(iLocal_762[3], -2077259890, 2499.337f, -1448.036f, 45.311f);
	func_438(iLocal_762[4], 802578733, 2500.124f, -1435.318f, 45.311f);
	func_438(iLocal_762[5], 802578733, 2500.53f, -1435.318f, 45.311f);
}

void func_280()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_762)
	{
		func_439(iLocal_762[iVar0]);
		iVar0++;
	}
}

int func_281(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	int iVar0;

	if (func_440(Global_35, vParam3, 1) > 225f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::_0x841475AC96E794D1(*uParam2))
	{
		*uParam2 = TASK::_0xF533D68FF970D190(vParam3, iParam8, 1f, 0, 0);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::_0x295514F198EFD0CA(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		TXD::_0xDB1BD07FB464584D(iParam6, 0);
		return 0;
	}
	else
	{
		if (!TXD::_0xBE72591D1509FFE4(iParam6))
		{
			TXD::_0xDB1BD07FB464584D(iParam6, 0);
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::_0xE124889AE0521FCF(*uParam1, iParam6, 0, 0);
				TXD::_0x8232F37DF762ACB2(iParam6);
				*uParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_283(var uParam0)
{
	float fVar0;

	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, uParam0->f_13);
	if (fVar0 < 5625f || fVar0 > 9025f)
	{
		return 0;
	}
	if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_12, uParam0->f_13, false))
	{
		return 0;
	}
	return 1;
}

int func_284(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
	{
		iVar0 = 0;
	}
	if (uParam0->f_17 != 0)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(uParam0->f_17))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_285(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(func_282(uParam0->f_1));
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		vVar1 = { _NAMESPACE48::_0x94995829ED15A598(iVar0) };
		if (BUILTIN::VDIST2(uParam0->f_13, vVar1) < 9f)
		{
			return 1;
		}
	}
	return 0;
}

int func_286(var uParam0)
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		func_441(uParam0->f_13, 3f, 1, 0);
		uParam0->f_11 = VEHICLE::CREATE_VEHICLE(uParam0->f_12, uParam0->f_13, uParam0->f_16, true, true, false, false);
		ENTITY::_0x9587913B9E772D29(uParam0->f_11, 0);
		VEHICLE::_0x87B974E54C71BA7B(uParam0->f_11, 1);
		return 0;
	}
	if (uParam0->f_17 != 0)
	{
		PROPSET::_0xD80FAF919A2E56EA(uParam0->f_11, uParam0->f_17);
	}
	return 1;
}

int func_287(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_11, true, false)) < 12100f)
	{
		return 0;
	}
	return 1;
}

void func_288(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		if (VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_11))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_11, iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
				}
				iVar0++;
			}
		}
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_11));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12);
	}
}

int func_289(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 15) != 0)
	{
		return 0;
	}
	if (CLOCK::GET_CLOCK_HOURS() != uParam0->f_2)
	{
		return 0;
	}
	return 1;
}

int func_290(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		if (ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_11))
		{
			VEHICLE::_0x87B974E54C71BA7B(uParam0->f_11, 0);
			if (VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_11))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_11, iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
					}
					iVar0++;
				}
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_11));
		}
	}
	if (uParam0->f_19)
	{
		PED::_0x7D4E70A67A651C71(2);
		uParam0->f_19 = 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12);
	return 1;
}

int func_291(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (func_442(uParam0, iParam1))
	{
		return 0;
	}
	if (func_299(uParam0, 5) || bParam3)
	{
		sVar0 = func_443(iParam1);
		if (func_444(uParam0, sVar0))
		{
			if (!bParam2)
			{
				func_445(uParam0, iParam1);
			}
			func_427(&(uParam0->f_18));
			return 1;
		}
	}
	return 0;
}

void func_292(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) || func_446(uParam0->f_4, 0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_237(uParam0->f_3);
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0) && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0x406808610220405B(iVar0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		PED::_0x62FDAD5E01D2DD47(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, 0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_4, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	else
	{
		iVar2 = func_237(uParam0->f_3);
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar2) && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar2))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_4, 1, 0);
			_NAMESPACE48::_0xA2B18FF8D39F6D87(iVar2);
			TASK::TASK_PERSISTENT_CHARACTER(uParam0->f_4);
		}
	}
}

int func_293(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_294(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0))
	{
		return PED::IS_PED_SHOOTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return 0;
}

int func_295(var uParam0)
{
	if (-1829635046 == func_447(81053684))
	{
		if (func_448(uParam0))
		{
			return 1;
		}
	}
	else if (func_449(-525676072, uParam0))
	{
		if (func_448(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_450(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_297(var uParam0)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			StringCopy(&(uParam0->f_8), "0822_S_M_M_BankClerk_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(&(uParam0->f_8), "0823_S_M_M_BankClerk_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(&(uParam0->f_8), "0824_S_M_M_BankClerk_01_WHITE_03", 64);
			break;
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_4, &(uParam0->f_8));
}

bool func_298(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x886171A12F400B89(uParam0->f_6, iVar0, 1);
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
	}
	else
	{
		return false;
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return false;
	}
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0)));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (PED::IS_PED_HUMAN(iVar3))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					iVar1 = (iVar1 - 1);
				}
				else if (PED::IS_PED_A_PLAYER(iVar3))
				{
					iVar1 = (iVar1 - 1);
				}
				else
				{
					Jump @160; //curOff = 147
					ITEMSET::DESTROY_ITEMSET(iVar0);
					return false;
				}
				iVar2++;
				ITEMSET::DESTROY_ITEMSET(iVar0);
				return iVar1 > 0;
			}
		}
	}

int func_299(var uParam0, int iParam1)
{
	if (func_451(uParam0->f_4))
	{
		return 0;
	}
	if (!func_428(&(uParam0->f_18)))
	{
		func_429(&(uParam0->f_18), 1);
	}
	if (iParam1 < 0)
	{
		return 1;
	}
	if (func_430(&(uParam0->f_18)) > IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	if (func_452())
	{
		return 0;
	}
	return func_156(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_301(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_302(var uParam0, int iParam1)
{
	func_150(&(uParam0->f_16), iParam1);
}

void func_303(var uParam0)
{
	uParam0->f_16 = 1;
}

bool func_304(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

int func_305(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_452())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_306()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_453())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_254(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_307(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_454(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_456(func_455(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_457(iParam0) || func_157(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case -196675805: /* GXTEntry: "Aurora Basin" */
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case 795414694: /* GXTEntry: "Barrow Lagoon" */
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case -557290573: /* GXTEntry: "Bayou Nwa" */
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case -1073312073: /* GXTEntry: "Cairn Lake" */
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case 370072007: /* GXTEntry: "Dakota River" */
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case 1245451421: /* GXTEntry: "Deadboot Creek" */
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case -105598602: /* GXTEntry: "Elysian Pool" */
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case 1755369577: /* GXTEntry: "Heartlands Overflow" */
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case 1175365009: /* GXTEntry: "Hot Springs" */
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case -1369817450: /* GXTEntry: "Lake Don Julio" */
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case 592454541: /* GXTEntry: "Lake Isabella" */
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case -1410384421: /* GXTEntry: "Little Creek River" */
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case -1308233316: /* GXTEntry: "Lower Montana River" */
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case 301094150: /* GXTEntry: "Mattlock Pond" */
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case -811730579: /* GXTEntry: "Moonstone Pond" */
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case -1300497193: /* GXTEntry: "Owanjila" */
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case 2005774838: /* GXTEntry: "Ringneck Creek" */
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case -247856387: /* GXTEntry: "Sea of Coronado" */
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case -823661292: /* GXTEntry: "Southfield Flats" */
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case -218679770: /* GXTEntry: "Spider Gorge" */
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case -1287619521: /* GXTEntry: "Stillwater Creek" */
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case -1781130443: /* GXTEntry: "Upper Montana River" */
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case -261541730: /* GXTEntry: "Whinyard Strait" */
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case -1229593481: /* GXTEntry: "Kamassa River" */
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case -1504425495: /* GXTEntry: "San Luis River" */
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_308(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_310(int iParam0)
{
	if (!func_308(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case -196675805: /* GXTEntry: "Aurora Basin" */
			return 0;
		case 795414694: /* GXTEntry: "Barrow Lagoon" */
			return 0;
		case -557290573: /* GXTEntry: "Bayou Nwa" */
			return 2;
		case 650214731: /* GXTEntry: "Beartooth Beck" */
			return 1;
		case -1073312073: /* GXTEntry: "Cairn Lake" */
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007: /* GXTEntry: "Dakota River" */
			return 1;
		case 1245451421: /* GXTEntry: "Deadboot Creek" */
			return 1;
		case 469159176: /* GXTEntry: "Dewberry Creek" */
			return 1;
		case -105598602: /* GXTEntry: "Elysian Pool" */
			return 0;
		case -1356490953:
			return 0;
		case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
			return 1;
		case 1755369577: /* GXTEntry: "Heartlands Overflow" */
			return 0;
		case 1175365009: /* GXTEntry: "Hot Springs" */
			return 0;
		case -1229593481: /* GXTEntry: "Kamassa River" */
			return 1;
		case -1369817450: /* GXTEntry: "Lake Don Julio" */
			return 0;
		case 592454541: /* GXTEntry: "Lake Isabella" */
			return 0;
		case -2040708515:
			return 1;
		case -1410384421: /* GXTEntry: "Little Creek River" */
			return 1;
		case -1308233316: /* GXTEntry: "Lower Montana River" */
			return 1;
		case 301094150: /* GXTEntry: "Mattlock Pond" */
			return 0;
		case -811730579: /* GXTEntry: "Moonstone Pond" */
			return 0;
		case -1817904483:
			return 0;
		case -1300497193: /* GXTEntry: "Owanjila" */
			return 0;
		case 2005774838: /* GXTEntry: "Ringneck Creek" */
			return 1;
		case -1504425495: /* GXTEntry: "San Luis River" */
			return 1;
		case -247856387: /* GXTEntry: "Sea of Coronado" */
			return 1;
		case -823661292: /* GXTEntry: "Southfield Flats" */
			return 0;
		case -218679770: /* GXTEntry: "Spider Gorge" */
			return 1;
		case -1287619521: /* GXTEntry: "Stillwater Creek" */
			return 1;
		case -1781130443: /* GXTEntry: "Upper Montana River" */
			return 1;
		case -261541730: /* GXTEntry: "Whinyard Strait" */
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_313(int iParam0, int iParam1)
{
	if (!func_7(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_314(int iParam0, int iParam1)
{
	if (!func_308(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

int func_315(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_316(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_317(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_458(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_318(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::_0xD05590C1AB38F068(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_319(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_320(int iParam0)
{
	int iVar0;

	if (func_457(iParam0))
	{
		if (!func_157(45))
		{
			return 0;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_66())
	{
		if (!func_156(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_322(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_323(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

bool func_324(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_325(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_326()
{
	return Global_1310750->f_16037;
}

bool func_327(int iParam0, int iParam1)
{
	if (!func_324(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_328(int iParam0)
{
	if (!func_324(iParam0))
	{
		return 0;
	}
	if (func_459(64) && func_460(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_329(int iParam0)
{
	if (!func_324(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_330(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_324(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_461(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_331(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 5)
	{
		return;
	}
	if (!func_153(iParam0))
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(&(Global_43893[iParam0])))
	{
		VOLUME::_0x43F867EF5C463A53(&(Global_43893[iParam0]));
	}
	if (&Global_43893.f_6[iParam0] != 1f)
	{
		Global_43893.f_6[iParam0] = 1f;
	}
}

void func_332()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_428(&((Local_177[iVar0 /*45*/])->f_34)))
		{
			func_427(&((Local_177[iVar0 /*45*/])->f_34));
		}
		func_334((Local_177[iVar0 /*45*/])->f_38);
		func_334((Local_177[iVar0 /*45*/])->f_39);
		iVar0++;
	}
	Global_1935183->f_29 = 4;
}

void func_333(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-155523609) > 0)
			{
				SCRIPTS::_0x7423F7835770F619(-155523609);
			}
			break;
		case 2:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-888201231) > 0)
			{
				SCRIPTS::_0x7423F7835770F619(-888201231);
			}
			break;
		case 3:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1717931246) > 0)
			{
				SCRIPTS::_0x7423F7835770F619(-1717931246);
			}
			break;
	}
}

void func_334(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_335()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_7, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_7, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_8, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_8, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_9, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_9, -1000f);
		}
	}
	if (Local_14.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_14.f_6))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_14.f_6);
		}
		Local_14.f_16 = 0;
	}
	if (Local_14.f_18 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(Local_14.f_18);
	}
}

void func_336()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(&(uLocal_584[iVar0])))
		{
			VOLUME::_0xFDFECC6EE4491E11(&(uLocal_584[iVar0]));
		}
		iVar0++;
	}
}

int func_337(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((Global_1392240->f_1[iVar0 /*18*/])->f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_338(int iParam0)
{
	if (func_163(iParam0) && func_462())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_339(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_172(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_340(int iParam0, bool bParam1)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	if (!func_339(iParam0, 2))
	{
		return 0;
	}
	if (func_282(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_237(iParam0)))
	{
		return 1;
	}
	if (func_339(iParam0, 1) && !bParam1)
	{
		func_463(iParam0, 128);
		return 1;
	}
	func_373(iParam0, 129);
	func_464(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_237(iParam0));
	func_372(iParam0, 0);
	return 1;
}

bool func_341(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_342(int iParam0, bool bParam1)
{
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1395601->f_5[iParam0 /*28*/])->f_23) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Global_1395601->f_5[iParam0 /*28*/])->f_23, true, 0))
	{
		return;
	}
	if (func_254(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_465(238680582, bParam1);
			break;
		case 9:
			func_465(1555588463, bParam1);
			func_465(1275780106, bParam1);
			func_465(-833560428, bParam1);
			func_465(-1601174253, bParam1);
			func_465(-1295111793, bParam1);
			break;
		case 11:
			func_465(-1482639045, bParam1);
			break;
		case 10:
			func_465(254520182, bParam1);
			break;
		case 12:
			func_465(1997650502, bParam1);
			break;
		case 13:
			func_465(1335986638, bParam1);
			break;
		case 14:
			func_465(1407130373, bParam1);
			break;
		case 16:
			func_465(-1335647241, bParam1);
			break;
		case 15:
			func_465(1731691513, !func_58(70));
			break;
	}
}

void func_343(int iParam0)
{
	if (!func_341(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = 0;
}

void func_344(int iParam0, int iParam1)
{
	if (!func_341(iParam0))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_20 = iParam1;
}

int func_345(int iParam0)
{
	if (!func_383(iParam0))
	{
		return -1;
	}
	return func_380(iParam0);
}

int func_346(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_347(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_348(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_349(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_350(int iParam0)
{
	if (func_348(iParam0, 1))
	{
		func_466(1);
	}
}

bool func_351(int iParam0)
{
	return iParam0 != 0;
}

int func_352(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

void func_353(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_354(*iParam0);
	iVar1 = func_356(*iParam0);
	if (iParam1 < 1 || iParam1 > func_467(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_354(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

void func_355(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

int func_356(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_468(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_357(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

int func_358(var uParam0)
{
	int iVar0;

	iVar0 = 5;
	if (func_417(2))
	{
		switch (uParam0->f_3)
		{
			case joaat("a_m_m_sdfancytravellers_01"):
				if (func_469(5, iVar0, 2, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSF_0938A", 24);
					StringCopy(&(uParam0->f_18), "SCSF_0938B", 24);
					uParam0->f_7 = "SALOON_0938";
					return 1;
				}
				break;
			case joaat("a_m_m_rancher_01"):
				if (func_469(5, iVar0, 4, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSF_0958A", 24);
					StringCopy(&(uParam0->f_18), "SCSF_0958B", 24);
					uParam0->f_7 = "SALOON_0958";
					return 1;
				}
				break;
			case joaat("a_m_o_sdupperclass_01"):
			case joaat("a_m_m_nbxupperclass_01"):
				if (func_469(5, iVar0, 8, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSF_0803A", 24);
					StringCopy(&(uParam0->f_18), "SCSF_0803B", 24);
					uParam0->f_7 = "SALOON_0803";
					return 1;
				}
				break;
		}
	}
	else if (func_417(1))
	{
		switch (uParam0->f_3)
		{
			case joaat("a_m_m_sdslums_02"):
				if (func_469(5, iVar0, 32, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSC_0775A", 24);
					StringCopy(&(uParam0->f_18), "SCSC_0775B", 24);
					uParam0->f_7 = "SALOON_0775";
					return 1;
				}
				break;
			case joaat("a_m_m_lowersdtownfolk_02"):
				if (func_469(5, iVar0, 64, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSC_0789A", 24);
					StringCopy(&(uParam0->f_18), "SCSC_0789B", 24);
					uParam0->f_7 = "SALOON_0789";
					return 1;
				}
				if (func_470(77) && func_469(5, iVar0, 128, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSC_1016A", 24);
					StringCopy(&(uParam0->f_18), "SCSC_1016B", 24);
					uParam0->f_7 = "SALOON_1016";
					return 1;
				}
				break;
			case joaat("g_m_m_unicriminals_02"):
				if (func_469(5, iVar0, 256, 1))
				{
					StringCopy(&(uParam0->f_15), "SCSC_1064A", 24);
					StringCopy(&(uParam0->f_18), "SCSC_1064B", 24);
					uParam0->f_7 = "SALOON_1064";
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_359(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("a_m_m_lowersdtownfolk_02"):
		case joaat("g_m_m_unicriminals_02"):
		case joaat("a_m_o_sdupperclass_01"):
		case joaat("a_m_m_sdslums_02"):
		case joaat("a_m_m_sdfancytravellers_01"):
		case joaat("a_m_m_nbxupperclass_01"):
		case joaat("a_m_m_rancher_01"):
			uParam0->f_3 = iParam1;
			return 1;
	}
	return 0;
}

void func_360(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	((*uParam0)[iParam3 /*45*/])->f_25 = 64f;
	((*uParam0)[iParam3 /*45*/])->f_26 = 16f;
	((*uParam0)[iParam3 /*45*/])->f_20 = iParam3;
	func_471((*uParam0)[iParam3 /*45*/]);
	(*uParam0)[iParam3 /*45*/] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			((*uParam0)[iParam3 /*45*/])->f_3[iVar0 /*3*/] = uParam2[iVar0];
			iVar0++;
		}
		func_363((*uParam0)[iParam3 /*45*/], 128);
	}
	if (!func_428(&(((*uParam0)[iParam3 /*45*/])->f_34)))
	{
		func_429(&(((*uParam0)[iParam3 /*45*/])->f_34), 1);
	}
	func_363((*uParam0)[iParam3 /*45*/], 32768);
	func_363((*uParam0)[iParam3 /*45*/], 1024);
	((*uParam0)[iParam3 /*45*/])->f_29 = 1;
	((*uParam0)[iParam3 /*45*/])->f_21 = -1;
}

Vector3 func_361(var uParam0)
{
	int iVar0;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	if (!func_473(uParam0, 4))
	{
		if (func_474())
		{
			if (func_475(uParam0))
			{
				func_363(uParam0, 4);
				uParam0->f_21 = -1;
				return func_472("STDRG_NEARCHF");
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return func_472("");
	}
	return func_472("");
}

char* func_362(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return "SD_PoliceChief";
		case 137:
			return "NBX_Bartender";
		case 140:
			return "NBX_Doctor";
		case 202:
			return "NBX_Gunsmith";
		case 200:
			return "NBX_Gen_Store_Owner";
		case 138:
			return "NBX_Bartender_Slums";
		case 219:
			return "NBX_Gen_Store_Shady";
		default:
			break;
	}
	return "";
}

void func_363(var uParam0, int iParam1)
{
	func_229(&(uParam0->f_19), iParam1);
}

Vector3 func_364(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	iVar1 = 1;
	if (func_476(uParam0, 5, iVar1, 4, 34))
	{
		return func_472("STDRG_GEN_IND3");
	}
	if (func_476(uParam0, 5, iVar1, 2, 33))
	{
		return func_472("STDRG_GEN_IND1");
	}
	if (func_476(uParam0, 5, iVar1, 16, 28))
	{
		return func_472("STDRG_GEN_MOB2");
	}
	if (func_476(uParam0, 5, iVar1, 8, 27))
	{
		return func_472("STDRG_GEN_MOB1");
	}
	if (func_477(39, 1, 0) && func_469(5, iVar1, 32, 1))
	{
		return func_472("STDRG_GEN_SRDOC");
	}
	if (func_478(uParam0, iVar1))
	{
		return func_472("STDRG_SHOSICK");
	}
	if (uParam0->f_21 < 0)
	{
		return func_472("");
	}
	return func_472("");
}

Vector3 func_365(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	if (func_479(110))
	{
		return func_472("");
	}
	iVar1 = 2;
	if (func_474())
	{
		if (func_475(uParam0))
		{
			if ((func_58(47) && func_398() == 5) && func_469(5, iVar1, 2, 1))
			{
				uParam0->f_21 = -1;
				return func_472("STDRG_SBARPLY_B");
			}
			if ((func_58(27) && !func_58(28)) && func_469(5, iVar1, 4, 1))
			{
				uParam0->f_21 = -1;
				return func_472("STDRG_SBARPLY_D");
			}
			if (func_480(107, 8192) > 0 && func_469(5, iVar1, 8, 1))
			{
				uParam0->f_21 = -1;
				return func_472("RERI_CONV_A");
			}
			if (func_480(110, 8192) > 0)
			{
				if (PED::_0x7CC2186C32D3540A(iVar0, PLAYER::PLAYER_ID()) > 1 && func_469(5, iVar1, 16, 1))
				{
					uParam0->f_21 = -1;
					return func_472("RESAM_CONV_A");
				}
				else if (func_469(5, iVar1, 32, 1))
				{
					uParam0->f_21 = -1;
					return func_472("RESAM_CONV_B");
				}
			}
			if (func_478(uParam0, iVar1))
			{
				return func_472("STDRG_SLUBAR_SK");
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return func_472("");
	}
	return func_472("");
}

Vector3 func_366(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	if (func_481(4))
	{
		return func_472("");
	}
	iVar1 = 3;
	if (func_474())
	{
		if (func_478(uParam0, iVar1))
		{
			return func_472("STDRG_FANBAR_SK");
		}
		if ((func_398() == 3 && func_58(27)) && func_475(uParam0))
		{
			if (func_469(5, iVar1, 2, 1))
			{
				uParam0->f_21 = -1;
				return func_472("STDRG_FBAR_MOB1");
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return func_472("");
	}
	return func_472("");
}

Vector3 func_367(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	if (func_481(4))
	{
		return func_472("");
	}
	iVar1 = 4;
	if (func_476(uParam0, 5, iVar1, 2, 46))
	{
		return func_472("STDRG_GUN_GNG3");
	}
	if (func_476(uParam0, 5, iVar1, 4, 34))
	{
		return func_472("STDRG_GUN_IND3");
	}
	if (func_476(uParam0, 5, iVar1, 16, 29))
	{
		return func_472("STDRG_GUN_MOB3");
	}
	if (func_476(uParam0, 5, iVar1, 8, 28))
	{
		return func_472("STDRG_GUN_MOB2");
	}
	if (func_477(42, 1, 0) && func_469(5, iVar1, 32, 1))
	{
		return func_472("STDRG_GUN_SRGEN");
	}
	if (func_477(41, 1, 0) && func_469(5, iVar1, 64, 1))
	{
		return func_472("STDRG_GUN_SRSHA");
	}
	if (func_478(uParam0, iVar1))
	{
		return func_472("STDRG_GUNSICK");
	}
	if (func_475(uParam0))
	{
		if (!func_473(uParam0, 4))
		{
			if (func_469(5, iVar1, 256, 0) && func_477(43, 0, 1))
			{
				func_363(uParam0, 4);
				if (func_469(5, iVar1, 128, 1))
				{
					if (func_474())
					{
						return func_472("STDRG_GUNPKR_1A");
					}
					else
					{
						return func_472("STDRG_GUNPKR_1J");
					}
				}
				if (func_469(5, iVar1, 256, 1))
				{
					if (func_474())
					{
						return func_472("STDRG_GUNPKR_2A");
					}
					else
					{
						return func_472("STDRG_GUNPKR_2J");
					}
				}
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return func_472("");
	}
	return func_472("");
}

Vector3 func_368(var uParam0)
{
	int iVar0;
	char* sVar1;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	sVar1 = func_482(uParam0, "STDRG_LIVSICK_1", "STDRG_LIVSICK_2", "STDRG_LIVSICK_3");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return func_472(sVar1);
	}
	return func_472("");
}

Vector3 func_369(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	iVar1 = 6;
	if (func_478(uParam0, iVar1))
	{
		sVar2 = func_483(*(Global_1393529->f_288[1 /*8*/]));
		iVar3 = MISC::GET_HASH_KEY(sVar2);
		switch (iVar3)
		{
			case -941361489:
				uParam0->f_37 = "0832_TRAINWORKER";
				return func_472("STDRG_TSW3SICK");
			case 1176867728:
				uParam0->f_37 = "0833_TRAINWORKER";
				return func_472("STDRG_TSW2SICK");
			case -386699540:
				uParam0->f_37 = "0834_TRAINWORKER";
				return func_472("STDRG_TSW1SICK");
			default:
				break;
		}
	}
	return func_472("");
}

Vector3 func_370(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	iVar1 = 7;
	if (func_474())
	{
		if (!func_484(5, iVar1, 4))
		{
			if (func_470(22))
			{
				if (func_475(uParam0))
				{
					uParam0->f_21 = -1;
					func_119(5, iVar1, 4);
					if (!func_484(5, iVar1, 256))
					{
						return func_472("STDRG_SPR_SHA_A");
					}
					else
					{
						return func_472("STDRG_SPR_SHA_D");
					}
				}
			}
		}
		if (func_478(uParam0, iVar1))
		{
			return func_472("STDRG_SHADSICK");
		}
	}
	return func_472("");
}

Vector3 func_371(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_472("");
	}
	iVar1 = 8;
	if (!func_473(uParam0, 2))
	{
		if (func_474())
		{
			func_485(39);
			if (func_475(uParam0))
			{
				func_363(uParam0, 2);
				if (func_470(58))
				{
					if (func_469(5, iVar1, 2, 1))
					{
						uParam0->f_21 = -1;
						return func_472("STDRG_DOC_A");
					}
					if (func_469(5, iVar1, 4, 1))
					{
						uParam0->f_21 = -1;
						if (func_486() >= 0)
						{
							return func_472("STDRG_DOC_BH");
						}
						else
						{
							return func_472("STDRG_DOC_BL");
						}
					}
					if (func_469(5, iVar1, 8, 1))
					{
						uParam0->f_21 = -1;
						return func_472("STDRG_DOC_C");
					}
					if (func_469(5, iVar1, 16, 1))
					{
						uParam0->f_21 = -1;
						return func_472("STDRG_DOC_D");
					}
					if (func_469(5, iVar1, 32, 1))
					{
						uParam0->f_21 = -1;
						return func_472("STDRG_DOC_E");
					}
					if (func_469(5, iVar1, 64, 1))
					{
						uParam0->f_21 = -1;
						return func_472("STDRG_DOC_F");
					}
				}
			}
		}
	}
	return func_472("");
}

void func_372(int iParam0, int iParam1)
{
	if (!func_172(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

void func_373(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_172(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

int func_374(int iParam0)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	if (!func_339(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

void func_375(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			sVar0 = "new_bank_01_main";
			break;
		case 1:
			sVar0 = "rho_bank_01_main";
			if (bParam1)
			{
				if (func_63(-1741667789))
				{
					func_68(-1741667789);
				}
			}
			else if (!func_63(-1741667789))
			{
				func_67(-1741667789);
			}
			break;
		case 2:
			sVar0 = "val_bank_01_main";
			break;
		case 3:
			sVar0 = "bla_bank_01_main";
			break;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	GRAPHICS::_0xBFCB17895BB99E4E(iVar1, bParam1);
	if (GRAPHICS::_0x113857D66A9CABE6(iVar1))
	{
	}
	GRAPHICS::_0x67B0778C62E74423(!bParam1);
	GRAPHICS::_0x6C03118E9E5C1A14(!bParam1);
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			if (func_63(-1799960545))
			{
				func_68(-1799960545);
			}
		}
		else if (!func_63(-1799960545))
		{
			func_67(-1799960545);
		}
	}
}

int func_376(int iParam0)
{
	func_162(iParam0, 0, 0);
	if (func_163(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return 0;
}

bool func_377(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_378(int iParam0)
{
	return ((*Global_1392915)[iParam0 /*12*/])->f_1 == -1;
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

int func_380(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_487(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_381(int iParam0, bool bParam1)
{
	if (!func_383(iParam0))
	{
		return;
	}
	if (!func_201(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_488(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_488(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_489(iParam0), func_406(iParam0), func_490(iParam0), func_488(iParam0), Global_36);
		}
	}
	func_491(iParam0, 1);
	bParam1 = bParam1;
}

void func_382(int iParam0, bool bParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || bParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_395(Global_1898330[iParam0]);
		func_492(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

bool func_383(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_384(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_385(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_386(int iParam0, int iParam1)
{
	func_150(&((Global_1935369->f_5[iParam0 /*11*/])->f_7), iParam1);
}

bool func_387(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_388(int iParam0)
{
	if (!func_172(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_389(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_172(iParam0))
	{
		return;
	}
	if (!func_339(iParam0, 1))
	{
		return;
	}
	if (!func_339(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_388(iParam0)) && func_493(iParam0))
	{
		return;
	}
	func_373(iParam0, 1);
	func_464(iParam0);
	if (func_415(func_282(iParam0)))
	{
		iVar0 = func_237(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::_0x7B204F88F6C3D287(iVar0);
		}
		func_373(iParam0, 16);
	}
	if (func_339(iParam0, 128) && !bParam3)
	{
		func_340(iParam0, 0);
	}
}

void func_390(int iParam0, bool bParam1)
{
	if (!func_231(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_276(iParam0, 1024))
		{
			func_233(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_276(iParam0, 1024))
	{
		func_232(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_494(iParam0);
}

void func_391(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_392(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_268(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
}

int func_393()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_395(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_495(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_393())
	{
		return -1;
	}
	iVar0 = func_394(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_496(iVar1, 0);
	func_497(iVar1, 0);
	func_498(iVar1, 0);
	func_499(iVar1, 0);
	func_500(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_501(iVar1, iParam4);
	}
	return iVar1;
}

bool func_397(int iParam0, int iParam1)
{
	return func_387((Global_1914319->f_3[iParam0 /*446*/])->f_6, iParam1);
}

int func_398()
{
	if (!func_156(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_156(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_156(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_156(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_156(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_156(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_156(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

bool func_400(int iParam0, int iParam1)
{
	if (!func_268(iParam0))
	{
		return false;
	}
	return ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1) != 0;
}

int func_401(int iParam0)
{
	if (func_502())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

int func_403(vector3 vParam0)
{
	return func_503(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

int func_405()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0)
{
	if (!func_383(iParam0))
	{
		return -1;
	}
	return func_504(func_395(iParam0));
}

bool func_407(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_408(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_409(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_410(int iParam0)
{
	int iVar0;

	iVar0 = func_345(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_411(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0)
{
	if (iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_413(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_411(iParam0))
	{
		return false;
	}
	func_505(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183->f_73[iParam0 /*7*/][iVar0], iVar1);
}

char* func_414(int iParam0, int iParam1)
{
	if ((Global_40.f_9829[iParam0 /*4*/])->f_1 != 0)
	{
		switch (&Global_40.f_9829[iParam0 /*4*/])
		{
			case 76:
				return "prisoner_val_1";
			case 105:
				return "prisoner_rhd_1";
			case 5:
				return "prisoner_std_1";
			case 26:
				return "prisoner_str_1";
			case 38:
				if (iParam1 == 0)
				{
					return "prisoner_blw_1";
				}
				break;
			case 115:
				return "prisoner_twd_1";
		}
	}
	return "prisoner";
}

bool func_415(int iParam0)
{
	return iParam0 != 0;
}

int func_416(int iParam0)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_237(iParam0)))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_237(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x0CADC3A977997472(func_237(iParam0), 0)))
		{
			return 0;
		}
	}
	return 1;
}

int func_417(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_506(iParam0))
	{
		return 0;
	}
	iVar0 = func_507(iParam0);
	iVar1 = func_508(iParam0);
	if (!func_99(iVar0))
	{
		return 0;
	}
	if (!func_509(iVar1))
	{
		return 0;
	}
	if (func_192() == iVar0)
	{
		if (func_510(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

void func_418(var uParam0)
{
	func_427(&(uParam0->f_12));
}

bool func_419(int iParam0, int iParam1)
{
	return func_387((Global_1935369->f_5[iParam0 /*11*/])->f_7, iParam1);
}

int func_420(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (func_20() != -1)
	{
		return 0;
	}
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	bVar4 = true;
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		bVar4 = false;
	}
	iVar0 = ENTITY::_0x59B57C4B06531E1E(func_511(PLAYER::PLAYER_ID()), 2.5f, iVar3, 1);
	if (iVar0 <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar3);
		bVar4 = false;
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar3) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar3);
		bVar4 = false;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3));
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			if (((!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::IS_PED_HUMAN(iVar1)) && PED::IS_PED_MALE(iVar1)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 0))
			{
				Stack.Push(uParam0);
				Stack.Push(ENTITY::GET_ENTITY_MODEL(iVar2));
				Call_Loc(uParam0->f_32);
				if (StackVal)
				{
					if (!PED::IS_PED_A_PLAYER(iVar1))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 0) && !((TASK::_0x2D0571BB55879DA2(iVar1) == -1539374245 || TASK::_0x2D0571BB55879DA2(iVar1) == -120888770) || TASK::_0x2D0571BB55879DA2(iVar1) == 798764373))
						{
							if (uParam0->f_1 != iVar1)
							{
								uParam0->f_1 = iVar1;
								uParam0->f_2 = iVar2;
								ITEMSET::DESTROY_ITEMSET(iVar3);
								return 1;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
	uParam0->f_10 = 1;
	return 0;
}

int func_421()
{
	switch (func_192())
	{
		case 76:
			return joaat("a_m_m_htlroughtravellers_01");
		case 92:
			return joaat("a_m_m_htlroughtravellers_01");
		case 5:
			if (func_417(2))
			{
				if (!func_484(5, 5, 2))
				{
					return joaat("a_m_m_sdfancytravellers_01");
				}
				if (!func_484(5, 5, 4))
				{
					return joaat("a_m_m_rancher_01");
				}
				return joaat("a_m_o_sdupperclass_01");
			}
			else
			{
				if (!func_484(5, 5, 16))
				{
					return joaat("a_m_m_lowersdtownfolk_02");
				}
				if (!func_484(5, 5, 32))
				{
					return joaat("a_m_m_sdslums_02");
				}
				return joaat("g_m_m_unicriminals_02");
			}
			break;
		case 120:
			return joaat("a_m_m_armtownfolk_01");
		case 115:
			if (!func_484(115, 5, 2))
			{
				return joaat("a_m_m_tumtownfolk_02");
			}
			return joaat("a_m_m_tumtownfolk_01");
		case 38:
			if (!func_484(38, 5, 2) && func_470(9))
			{
				return joaat("a_m_m_bivroughtravellers_01");
			}
			if (!func_484(38, 5, 16))
			{
				return joaat("a_m_m_blwforeman_01");
			}
			return joaat("a_m_m_blwtownfolk_01");
		case 105:
			if (!func_484(105, 5, 4))
			{
				return joaat("a_m_m_rancher_01");
			}
			return joaat("g_m_m_unigrays_01");
	}
	return 0;
}

int func_422(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_512(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_423(int iParam0)
{
	if (Global_1914319->f_17371)
	{
		return 1;
	}
	if (func_513(Global_35, 0))
	{
		return 1;
	}
	if (func_514())
	{
		return 1;
	}
	if (func_515(Global_35, iParam0, 1, 1) > 5f)
	{
		return 1;
	}
	return 0;
}

int func_424()
{
	int iVar0;
	int iVar1;

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		iVar0 = -545460140;
		iVar1 = TASK::_0x2D0571BB55879DA2(Global_35);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_425(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || func_446(iParam0, 0))
	{
		return 0;
	}
	if (func_516(iParam0))
	{
		func_427(&uLocal_42);
		return 0;
	}
	if (bParam1)
	{
		return 1;
	}
	if (func_428(&uLocal_42))
	{
		if (func_430(&uLocal_42) < 2f)
		{
			return 0;
		}
	}
	else
	{
		func_429(&uLocal_42, 0);
		return 0;
	}
	return 1;
}

int func_426(var uParam0, vector3 vParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vParam1))
	{
		func_517(&uLocal_45, uParam0->f_1, uParam0->f_7, 0);
		if (func_518(&uLocal_45, vParam1, uParam0->f_1, Global_35, 1077936128 /* Float: 3f */))
		{
			return 1;
		}
	}
	return 0;
}

void func_427(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_428(var uParam0)
{
	return func_519(*uParam0, 1);
}

void func_429(var uParam0, bool bParam1)
{
	if (bParam1 || !func_428(uParam0))
	{
		func_520(uParam0);
	}
}

float func_430(var uParam0)
{
	if (!func_428(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_521(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_522() - uParam0->f_1);
}

bool func_431(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_432(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

Vector3 func_433()
{
	switch (func_192())
	{
		case 76:
			if (func_510(2))
			{
				return -301.87f, 796.88f, 117.96f;
			}
			return -246.61f, 771.52f, 117.17f;
		case 92:
			return 3000.03f, 604.51f, 40.59f;
		case 5:
			if (func_510(2))
			{
				return 2635.1f, -1228.48f, 52.38f;
			}
			return 2803.22f, -1180.84f, 46.43f;
		case 120:
			return -3697.52f, -2589.47f, -11.29f;
		case 115:
			return -5523.76f, -2904.8f, -3.6f;
		case 38:
			return -816.94f, -1312.28f, 42.7f;
		case 105:
			return 1342.52f, -1371.6f, 83.3f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_434(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

int func_435(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return 0;
	}
	iVar0 = func_244(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (uParam0->f_30 == 1)
	{
		if (!func_473(uParam0, 65536) && func_523(Global_35, iVar0, 1) > 25f)
		{
			func_432(1, 1, 0);
		}
		if (func_524(uParam0, bParam2))
		{
			if (func_526(func_525()))
			{
				func_527(func_525());
			}
			func_528(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (func_473(uParam0, 64))
		{
			return 0;
		}
		if (func_523(Global_35, iVar0, 1) < 49f)
		{
			if (func_529(uParam0, iVar0))
			{
				func_530();
				if (bParam1)
				{
					if (!func_524(uParam0, bParam2))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_436(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	bool bVar7;

	Stack.Push(uParam0);
	Call_Loc(uParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_531(&vVar0)))
	{
		return;
	}
	iVar3 = func_244(*uParam0);
	if (!func_532(iVar3, 0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	func_517(&uLocal_45, iVar3, uParam0->f_37, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!func_473(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (func_474())
			{
				func_517(&uLocal_45, Global_35, "ARTHUR", 0);
			}
			else
			{
				func_517(&uLocal_45, Global_35, "JOHN", 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (func_473(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = func_244(&(uParam0->f_3[iVar4 /*3*/]));
			if (!func_532(iVar5, 0))
			{
				return;
			}
			Stack.Push(&(uParam0->f_3[iVar4 /*3*/]));
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			func_517(&uLocal_45, iVar5, sVar6, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar5, true);
			(uParam0->f_3[iVar4 /*3*/])->f_2 = 1;
		}
	}
	bVar7 = func_473(uParam0, 16384);
	if (func_533(&uLocal_45, vVar0, uParam0->f_40, bVar7, 0))
	{
		func_534(func_525());
		uParam0->f_30 = 1;
	}
	func_535(uParam0);
}

float func_437(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_438(var uParam0, int iParam1, vector3 vParam2)
{
	if (*uParam0 == 0)
	{
		if (STREAMING::IS_MODEL_VALID(iParam1))
		{
			*uParam0 = ENTITY::_0x6F3068258A499E52(iParam1, vParam2, 7);
		}
	}
}

void func_439(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		ENTITY::_0xD2B9C78537ED5759(*uParam0);
	}
}

float func_440(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_536(vVar0, vParam1);
}

void func_441(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_442(var uParam0, int iParam1)
{
	return func_387(uParam0->f_16, iParam1);
}

char* func_443(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "END_SHIFT";
		case 4:
			return "EVERYBODY_OUT";
		case 8:
			return "FAREWELL_NO_SALE";
		case 64:
			return "WELCOME";
		case 128:
			return "WELCOME_SICK";
		case 256:
			return "WELCOME_MASK";
		case 512:
			return "WELCOME_MASK_ESCALATED";
		case 1024:
			return "WELCOME_WANTED";
		case 2048:
			return "NO_FIGHTING_HERE";
		case 4096:
			return "PUT_WEAPON_AWAY";
		case 8192:
			return "MISBEHAVING_LOW";
		case 16384:
			return "MISBEHAVING_MED";
		case 32768:
			return "MISBEHAVING_HIGH";
		case 65536:
			return "UNAUTHORIZED_AREA";
		case 16:
			return "HANGING_AROUND_NO_PURCHASE";
		case 131072:
			return "LAW_THREAT";
		case 524288:
			return "GET_OUT_SHOP";
		case 1048576:
			return "LOCKDOWN_BANK";
		case 2097152:
			return "GET_IN_BACKROOM";
		default:
			break;
	}
	return "";
	return "";
}

int func_444(var uParam0, char* sParam1)
{
	var uVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		uVar0 = func_537(uParam0->f_8);
		if (func_538(uParam0->f_4, sParam1, joaat("speech_params_force_normal"), 0, 1, uVar0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_445(var uParam0, int iParam1)
{
	func_229(&(uParam0->f_16), iParam1);
}

int func_446(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

int func_447(int iParam0)
{
	int iVar0;

	iVar0 = func_540(func_539(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_448(var uParam0)
{
	if (func_449(81053684, uParam0))
	{
		return 1;
	}
	if (func_449(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_449(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_540(func_539(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_541(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_450(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_451(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || func_446(iParam0, 0))
	{
		return true;
	}
	return AUDIO::IS_ANY_SPEECH_PLAYING(iParam0);
}

int func_452()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_453()
{
	if (func_20() != 0)
	{
		return 1;
	}
	return 1;
}

var func_454(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_455(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_542(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

char* func_458(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_459(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_460(int iParam0)
{
	return func_327(iParam0, Global_1310750->f_16072 | 64);
}

void func_461(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_462()
{
	return 1;
}

void func_463(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_172(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_464(int iParam0)
{
	int iVar0;

	if (!func_172(iParam0))
	{
		return;
	}
	iVar0 = func_244(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

void func_465(int iParam0, bool bParam1)
{
	if (func_351(iParam0))
	{
		if (bParam1)
		{
			if (!func_543(iParam0))
			{
				func_61(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_543(iParam0))
		{
			func_70(iParam0, 1);
		}
	}
}

void func_466(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_467(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

int func_468(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_469(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_484(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			func_119(iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

int func_470(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_407(iParam0))
	{
		return 0;
	}
	return func_156(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_471(var uParam0)
{
	uParam0->f_19 = 1;
}

Vector3 func_472(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_473(var uParam0, int iParam1)
{
	return func_387(uParam0->f_19, iParam1);
}

int func_474()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_475(var uParam0)
{
	int iVar0;

	iVar0 = func_244(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_523(Global_35, iVar0, 1) < 9f)
		{
			return 1;
		}
	}
	return 0;
}

int func_476(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_484(iParam1, iParam2, iParam3))
	{
		return 0;
	}
	if (func_544(iParam4))
	{
		if (func_469(iParam1, iParam2, iParam3, 1))
		{
			func_363(uParam0, 4);
			return 1;
		}
	}
	return 0;
}

int func_477(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_231(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (func_545(iParam0, 32768))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (func_545(iParam0, 1024))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_478(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_474())
	{
		return 0;
	}
	iVar0 = func_192();
	switch (iVar0)
	{
		case 23:
		case 117:
			iVar0 = 26;
			break;
		case 97:
			iVar0 = 105;
			break;
	}
	if (!func_484(iVar0, iParam1, 1024))
	{
		if (func_475(uParam0) && func_300(0))
		{
			func_119(iVar0, iParam1, 1024);
			uParam0->f_21 = -1;
			return 1;
		}
	}
	return 0;
}

bool func_479(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_48;
}

int func_480(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_546(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_547(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return (Global_17503.f_2205[iVar2 /*2*/])->f_1;
	}
	return 0;
}

bool func_481(int iParam0)
{
	return func_387(iLocal_41, iParam0);
}

char* func_482(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	char* sVar0;

	if (!func_473(uParam0, 2))
	{
		if (func_474() && !func_502())
		{
			if (func_300(0) && func_475(uParam0))
			{
				sVar0 = func_483(*(Global_1393529->f_288[9 /*8*/]));
				switch (MISC::GET_HASH_KEY(sVar0))
				{
					case -1254791533:
						func_363(uParam0, 2);
						uParam0->f_37 = "0825_LIVERY";
						uParam0->f_21 = -1;
						return sParam1;
					case 54049583:
						uParam0->f_37 = "0826_LIVERY";
						uParam0->f_21 = -1;
						func_363(uParam0, 2);
						return sParam2;
					case 1837687839:
						uParam0->f_37 = "0827_LIVERY";
						uParam0->f_21 = -1;
						func_363(uParam0, 2);
						return sParam3;
					default:
						break;
				}
				func_219();
			}
		}
	}
	return "";
}

var func_483(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_484(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_277(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return func_387(&(Global_23117.f_1651[iVar1]), iParam2);
}

void func_485(int iParam0)
{
	func_233(iParam0, 134217728);
}

int func_486()
{
	int iVar0;

	iVar0 = func_548();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_488(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_489(int iParam0)
{
	if (!func_383(iParam0))
	{
		return 0;
	}
	return func_549(func_395(iParam0));
}

int func_490(int iParam0)
{
	if (!func_383(iParam0))
	{
		return -1;
	}
	return func_550(func_395(iParam0));
}

void func_491(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return;
	}
	func_496(iParam0, iParam1);
}

void func_492(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_549(iParam0);
	*uParam1 = func_504(iParam0);
	*uParam2 = func_550(iParam0);
}

bool func_493(int iParam0)
{
	if (!func_172(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_494(int iParam0)
{
	func_551(func_234(iParam0));
}

bool func_495(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_496(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_552(iParam0);
	}
	else
	{
		func_553(iParam0, iParam1);
	}
	func_554();
}

void func_497(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_498(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_499(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_500(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = iParam1;
}

void func_501(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

bool func_502()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_504(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_505(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_555(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_506(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	return 1;
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		case 5:
			return 76;
		case 6:
			return 76;
		case 3:
			return 105;
		case 2:
			return 5;
		case 1:
			return 5;
		case 8:
			return 92;
		case 4:
			return 115;
		case 7:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_508(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

int func_509(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return 1;
}

int func_510(int iParam0)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	return &(Global_1935369->f_5[iParam0 /*11*/]);
}

Vector3 func_511(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_512(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_556(iParam1))
		{
			func_557(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_558(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_559(iParam0, 0);
			bVar0 = true;
		}
		func_560(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_513(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_514()
{
	return Global_1310750->f_16077 != 0;
}

float func_515(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_516(int iParam0)
{
	if (((func_431(1) || AUDIO::_0x2B101AD9F651243A()) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0)) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_517(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_561(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

int func_518(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		return 1;
	}
	else if (func_562(uParam0, vParam1, 0, -1, 0, 0))
	{
		TASK::_0xE7FA07624574B79A(iParam4, iParam5, 1, 1, iParam6, 1, 0, 0, 0);
		if (iParam5 != Global_35)
		{
			TASK::_0xE7FA07624574B79A(iParam5, iParam4, 1, 1, iParam6, 1, 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

bool func_519(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_520(var uParam0)
{
	func_563(uParam0, 0f);
}

bool func_521(var uParam0)
{
	return func_519(*uParam0, 2);
}

float func_522()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_523(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_536(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_524(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_172(*uParam0) && !func_236(*uParam0, 0))
	{
		return 0;
	}
	if (func_266(*uParam0, 0))
	{
		return 0;
	}
	iVar0 = func_244(*uParam0);
	iVar1 = func_525();
	if (func_231(iVar1))
	{
		if (func_564(iVar1))
		{
			func_565(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (func_566(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = func_234(iVar1);
		iVar3 = func_567(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			func_565(uParam0);
			return uParam0->f_30;
		}
		if (func_568(iVar2))
		{
			return 0;
		}
	}
	if ((Global_1914319->f_17371 || func_569(func_244(*uParam0), 1, 1, 1, 0)) || PED::_0x3AA24CCC0D451379(func_244(*uParam0)))
	{
		func_565(uParam0);
		return uParam0->f_30;
	}
	if ((((func_296(PLAYER::PLAYER_ID(), 1, 0, 1) || func_570()) || LAW::_0xF46108C50A22B029()) || LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID())) || PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1914319->f_3[uParam0->f_24 /*446*/])->f_411)
	{
		return 0;
	}
	if (func_513(Global_35, 0))
	{
		func_565(uParam0);
		return uParam0->f_30;
	}
	if (func_514())
	{
		if (func_479(101))
		{
			return 0;
		}
	}
	if (func_254(178, 1, 1))
	{
		return 0;
	}
	if (!func_425(iVar0, func_473(uParam0, 2048)))
	{
		return 0;
	}
	if (uParam0->f_30 == 0)
	{
		if (!func_473(uParam0, 2048) && !func_473(uParam0, 32768))
		{
			if (!func_428(&(uParam0->f_34)))
			{
				func_429(&(uParam0->f_34), 1);
				return 0;
			}
			else if (func_473(uParam0, 1024))
			{
				if (func_430(&(uParam0->f_34)) < 5f)
				{
					return 0;
				}
			}
			else if (func_430(&(uParam0->f_34)) < 25f)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_525()
{
	if (func_502())
	{
		return Global_1914319->f_16855.f_1;
	}
	return -1;
}

int func_526(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return func_276(iParam0, 1073741824 /* Float: 2f */);
}

void func_527(int iParam0)
{
	func_232(iParam0, 1073741824 /* Float: 2f */);
}

void func_528(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			uParam0->f_28 = 0;
		}
	}
	if (uParam0->f_2)
	{
		if (func_172(*uParam0))
		{
			iVar0 = func_244(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar0, false);
				uParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_172(&(uParam0->f_3[iVar1 /*3*/])) && (uParam0->f_3[iVar1 /*3*/])->f_2)
			{
				iVar2 = func_244(&(uParam0->f_3[iVar1 /*3*/]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar2, false);
					(uParam0->f_3[iVar1 /*3*/])->f_2 = 0;
				}
			}
			iVar1++;
		}
	}
}

int func_529(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_473(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_244(&(uParam0->f_3[iVar0 /*3*/]));
			if (func_532(iVar1, 0) && func_515(iVar1, iParam1, 1, 1) <= 4f)
			{
				uParam0->f_21 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	if (!func_473(uParam0, 512) && !func_473(uParam0, 256))
	{
		return 1;
	}
	if (func_473(uParam0, 512))
	{
		if (func_475(uParam0))
		{
			return 1;
		}
	}
	if (func_473(uParam0, 256))
	{
		if (func_571(Global_35, uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_530()
{
	if (func_256(5))
	{
		func_572(2);
		func_572(4);
	}
	if ((((func_256(6) || func_256(14)) || func_256(26)) || func_256(9)) || func_256(21))
	{
		func_572(4);
	}
	if (((func_573(26) || func_573(27)) || func_573(28)) || func_573(29))
	{
		func_572(4);
	}
	if (((func_117(3, 61) || func_117(3, 29)) || func_117(3, 73)) || func_117(3, 43))
	{
		func_572(4);
	}
	if (func_514())
	{
		if (func_479(101) || func_479(79))
		{
			func_572(4);
		}
		if (((((func_479(88) || func_479(89)) || func_479(108)) || func_479(98)) || func_479(106)) || func_479(110))
		{
			func_572(8);
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(717558736) > 0)
	{
		func_572(4);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1396257)[16 /*638*/])->f_635, false) || SCRIPTS::IS_THREAD_ACTIVE(((*Global_1396257)[13 /*638*/])->f_635, false))
	{
		func_572(4);
	}
}

var func_531(var uParam0)
{
	return uParam0;
}

int func_532(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_574(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_574(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_574(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_574(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_574(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_574(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_574(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_574(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_533(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		return 1;
	}
	else if (func_562(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = uParam0[0 /*4*/];
		iVar1 = uParam0[1 /*4*/];
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !func_446(iVar0, 0)) && (ENTITY::DOES_ENTITY_EXIST(iVar1) && !func_446(iVar1, 0)))
		{
			if (!func_152(vParam4))
			{
				TASK::TASK_LOOK_AT_COORD(iVar0, vParam4, 8000, 0, 51, 0);
				TASK::TASK_LOOK_AT_COORD(iVar1, vParam4, 8000, 0, 51, 0);
			}
			else if (bParam7)
			{
				PED::_0x62FDAD5E01D2DD47(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, Global_35, 4000, -1082130432, -1082130432, -1082130432);
			}
		}
		return 1;
	}
	return 0;
}

void func_534(int iParam0)
{
	func_233(iParam0, 1073741824 /* Float: 2f */);
}

void func_535(var uParam0)
{
	int iVar0;
	int iVar1;

	func_429(&(uParam0->f_34), 1);
	uParam0->f_40 = { func_575() };
	uParam0->f_21 = -1;
	if (func_473(uParam0, 16384))
	{
		func_576(uParam0, 16384);
	}
	func_576(uParam0, 32768);
	func_576(uParam0, 1024);
	func_427(&uLocal_42);
	if (func_473(uParam0, 4096))
	{
		iVar0 = func_208(func_192(), uParam0->f_24);
		iVar1 = func_244(*uParam0);
		if (func_566(iVar0) && func_425(iVar1, 1))
		{
			func_577(iVar0, 0);
			func_576(uParam0, 8192);
			func_576(uParam0, 4096);
		}
	}
}

float func_536(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_537(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_538(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = uParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_578(uParam0, &Var0);
}

int func_539(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_579(iVar0);
}

int func_540(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_541(int iParam0)
{
	struct<2> Var0;

	if (!func_580(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_542(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_581(iParam3, &vVar0, &Var3, &uVar6);
	if (func_582(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return 1;
	}
	return 0;
}

int func_543(int iParam0)
{
	func_162(iParam0, 0, 0);
	if (func_163(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return 0;
}

int func_544(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_399(iParam0);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_256(iParam0) && func_58(iParam0))
	{
		if (func_398() <= iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_545(int iParam0, int iParam1)
{
	return (Global_20709.f_2092[iParam0] && iParam1) != 0;
}

int func_546(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_547(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_548()
{
	return Global_40.f_11095.f_35;
}

int func_549(int iParam0)
{
	return iParam0 & 31;
}

int func_550(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_551(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

int func_552(int iParam0)
{
	int iVar0;

	iVar0 = func_487(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_583(iVar0);
}

int func_553(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_584(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_554()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_555(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
		case -1910231185:
			return 27;
		case -1779466334:
			return 30;
		case -1751068532:
			return 19;
		case -1600776215:
			return 0;
		case -1403291038:
			return 13;
		case -1350098362:
			return 28;
		case -1132827806:
			return 18;
		case -1066004925:
			return 36;
		case -586199837:
			return 23;
		case -529686691:
			return 20;
		case -505280232:
			return 29;
		case -423064657:
			return 9;
		case -415041951:
			return 3;
		case -316764041:
			return 15;
		case -156236308:
			return 1;
		case -115118166:
			return 8;
		case -27924880:
			return 4;
		case 0:
			return 38;
		case 508286680:
			return 5;
		case 557524588:
			return 11;
		case 623901469:
			return 16;
		case 651189962:
			return 31;
		case 830459706:
			return 25;
		case 1274330613:
			return 22;
		case 1302444626:
			return 34;
		case 1398684735:
			return 26;
		case 1556254948:
			return 2;
		case 1570236479:
			return 6;
		case 1590600971:
			return 10;
		case 1598344177:
			return 21;
		case 1601295776:
			return 33;
		case 1618820662:
			return 32;
		case 1754500170:
			return 35;
		case 1763394652:
			return 17;
		case 1792646445:
			return 12;
		case 1831828781:
			return 24;
		case 1843135693:
			return 7;
		case 1869671285:
			return 37;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_557(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_585(iParam0, iParam1))
		{
			if (func_586(iParam0, iParam1))
			{
				if (func_587(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_588(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_558(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_559(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_560(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

bool func_561(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_562(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_589(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_563(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_522() - fParam1);
	func_590(uParam0, 1);
	func_591(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_564(int iParam0)
{
	if (!func_231(iParam0))
	{
		return 0;
	}
	return func_387(&(Global_1914319->f_18594[iParam0]), 2);
}

void func_565(var uParam0)
{
	int iVar0;

	iVar0 = func_525();
	if (!func_231(iVar0))
	{
		return;
	}
	if (func_526(iVar0) && func_431(1))
	{
		func_432(1, 0, 1);
	}
	func_363(uParam0, 64);
}

bool func_566(int iParam0)
{
	return func_276(iParam0, 67108864);
}

int func_567(int iParam0)
{
	int iVar0;

	if (!func_113(iParam0, &iVar0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Global_1914319->f_18905[iParam0] = PED::_0x7CC2186C32D3540A(iVar0, PLAYER::PLAYER_ID());
		return &(Global_1914319->f_18905[iParam0]);
	}
	return 0;
}

int func_568(int iParam0)
{
	if (!func_268(iParam0))
	{
		return 0;
	}
	return func_400(iParam0, 8388608);
}

int func_569(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((iParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (iParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_592(iVar0, 0)))
		{
			if (func_593(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_570()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) || func_594(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_571(int iParam0, var uParam1)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam1->f_38))
	{
		if (func_595(iParam0, uParam1->f_38, 1, 0))
		{
			return 1;
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam1->f_39))
	{
		if (func_595(iParam0, uParam1->f_39, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_572(int iParam0)
{
	func_229(&iLocal_41, iParam0);
}

int func_573(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_407(iParam0))
	{
		return 0;
	}
	return func_410(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

bool func_574(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_575()
{
	return 0f, 0f, 0f;
}

void func_576(var uParam0, int iParam1)
{
	func_150(&(uParam0->f_19), iParam1);
}

void func_577(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_566(iParam0))
		{
			func_233(iParam0, 67108864);
		}
	}
	else if (func_566(iParam0))
	{
		func_232(iParam0, 67108864);
	}
}

var func_578(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_579(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_596(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_580(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_581(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_582(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_583(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_584(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

bool func_585(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_586(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_587(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_585(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_588(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_589(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

void func_590(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_591(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_592(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_593(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

var func_594(int iParam0)
{
	return (func_597(iParam0, 4) || func_597(iParam0, 5));
}

bool func_595(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_596(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_597(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}
