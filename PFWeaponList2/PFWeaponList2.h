#ifndef PFWL
#define PFWL

#include "pch.h"

namespace WL {

	struct WeaponList
	{
		std::wstring name;
		int rank;
		inline WeaponList(std::string, int);
	};

	inline WeaponList::WeaponList(std::string nameStr, int rankInt) : rank(rankInt) {
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
		std::wstring narrow = converter.from_bytes(nameStr);
		name = narrow;
	}



	//weapon objects...
	//idea: make a dictionary with indices that correspond to the weapons and their structs (credit: ryan)

	WeaponList ECR(("Beowulf ECR"), 21);
	WeaponList SCAR_H(("SCAR-H"), 30);
	WeaponList AK12BR(("AK12BR"), 44);
	WeaponList G3(("G3"), 59);
	WeaponList AG3(("AG-3"), 76);
	WeaponList HENRY45_70(("Henry 45-70"), 96);
	WeaponList FAL50_00(("FAL 50.00"), 107);
	//battle rifles
	std::vector<WeaponList> BRS = {

		ECR, SCAR_H, AK12BR, G3, AG3, HENRY45_70, FAL50_00

	};


	WeaponList MK11(("MK11"), 3);
	WeaponList SKS(("SKS"), 13);
	WeaponList SL_8(("SL-8"), 34);
	WeaponList VSS_VINTOREZ(("VSS Vintorez"), 46);
	WeaponList MSG90(("MSG90"), 59);
	WeaponList TCR(("Beowulf TCR"), 70);
	WeaponList SA58_SPR(("SA58 SPR"), 78);
	WeaponList SCAR_SSR(("SCAR SSR"), 85);
	//designated marksman rifles
	std::vector<WeaponList> DMRS = {

		MK11, SKS, SL_8, VSS_VINTOREZ, MSG90, TCR, SA58_SPR, SCAR_SSR

	};

	std::wstring test = DMRS[3].name;

	WeaponList INTERVENTION(("Intervention"), 0);
	WeaponList REMINGTON_700(("Remington 700"), 12);
	WeaponList DRAGUNOV_SVU(("Dragunov SVU"), 38);
	WeaponList AWS(("AWS"), 41);
	WeaponList BFG_50(("BFG-50"), 65);
	WeaponList AWM(("AWM"), 82);
	WeaponList TRG_42(("TRG-42"), 84);
	WeaponList MOSIN_NAGANT(("Mosin Nagant"), 91);
	WeaponList DRAGUNOV_SVDS(("Dragunov SVDS"), 104);
	WeaponList HECATE(("Hecate 2"), 150);
	WeaponList M107(("M107"), 170);
	WeaponList STEYR_SCOUT(("Steyr Scout"), 195);
	WeaponList WA2000(("WA2000"), 200);
	//sniper rifles
	std::vector<WeaponList> SRS = {

		INTERVENTION, REMINGTON_700, DRAGUNOV_SVU, AWS, BFG_50, AWM, TRG_42, MOSIN_NAGANT, DRAGUNOV_SVDS, HECATE, M107, STEYR_SCOUT, WA2000

	};



	WeaponList AK12(("AK-12"), 0);
	WeaponList AN94(("AN-94"), 10);
	WeaponList AS_VAL(("AS VAL"), 15);
	WeaponList SCAR_L(("SCAR L"), 16);
	WeaponList AUG_A1(("AUG A1"), 20);
	WeaponList M16A4(("M16A4"), 22);
	WeaponList G36(("G36"), 25);
	WeaponList M16A3(("M16A3"), 31);
	WeaponList AUG_A2(("AUG A2"), 39);
	WeaponList FAMAS_G2(("FAMAS G2"), 45);
	WeaponList AK47(("AK47"), 47);
	WeaponList AUG_A3(("AUG A3"), 52);
	WeaponList L85A2(("L85A2"), 55);
	WeaponList HK416(("HK416"), 64);
	WeaponList AK74(("AK74"), 74);
	WeaponList AKM(("AKM"), 94);
	WeaponList AK103(("AK103"), 103);
	WeaponList TAR_21(("TAR-21"), 111);
	WeaponList TYPE_88(("TYPE 88"), 122);
	WeaponList M231(("M231"), 123);
	WeaponList C7A2(("C7A2"), 128);
	WeaponList G11K2(("G11K2"), 211);
	//assault rifles
	std::vector<WeaponList> ARS = {

		AK12, AN94, AS_VAL, SCAR_L, AUG_A1, M16A4, G36, M16A3, AUG_A2, FAMAS_G2, AK47, AUG_A3, L85A2, HK416, AK74, AKM, AK103, TAR_21, TYPE_88, M231, C7A2, G11K2

	};



	WeaponList COLT_LMG(("Colt LMG"), 0);
	WeaponList M60(("M60"), 19);
	WeaponList AUG_HBAR(("AUG HBAR"), 27);
	WeaponList MG36(("MG36"), 33);
	WeaponList RPK12(("RPK12"), 37);
	WeaponList L86_LSW(("L86 LSW"), 43);
	WeaponList RPK(("RPK"), 54);
	WeaponList HK21(("HK21"), 67);
	WeaponList SCAR_HAMR(("SCAR HAMR"), 72);
	WeaponList RPK74(("RPK-74"), 88);
	WeaponList MG3KWS(("MG3KWS"), 101);
	//light machine guns
	std::vector<WeaponList> LMGS = {

		COLT_LMG, M60, AUG_HBAR, MG36, RPK12, L86_LSW, RPK, HK21, SCAR_HAMR, RPK74, MG3KWS

	};




	WeaponList M4A1(("M4A1"), 0);
	WeaponList G36K(("G36K"), 6);
	WeaponList M4(("M4"), 14);
	WeaponList L22(("L22"), 28);
	WeaponList SCAR_PDW(("SCAR PDW"), 32);
	WeaponList AKU12(("AKU12"), 35);
	WeaponList GROZA_1(("Groza-1"), 42);
	WeaponList AK12C(("AK12C"), 51);
	WeaponList HONEY_BADGER(("Honey Badger"), 62);
	WeaponList SR_3M(("SR-3M"), 69);
	WeaponList GROZA_4(("Groza-4"), 79);
	WeaponList MC51SD(("MC51SD"), 85);
	WeaponList FAL50_63PARA(("FAL 50.63 PARA"), 89);
	WeaponList R1858CARBINE(("1858 Carbine"), 93);
	WeaponList AK105(("AK105"), 105);
	WeaponList JURY(("Jury"), 114);
	WeaponList KAC_SRR(("KAC SRR"), 125);
	WeaponList X95R(("X95R"), 130);
	WeaponList HK51B(("HK51B"), 160);
	//carbines
	std::vector<WeaponList> CARBINES = {

		M4A1, G36K, M4, L22, SCAR_PDW, AKU12, GROZA_1, AK12C, HONEY_BADGER, SR_3M, GROZA_4, MC51SD, FAL50_63PARA, R1858CARBINE, AK105, JURY, KAC_SRR, X95R, HK51B

	};



	WeaponList MP5K(("MP5K"), 0);
	WeaponList UMP45(("UMP45"), 5);
	WeaponList G36C(("G36C"), 7);
	WeaponList MP7(("MP7"), 9);
	WeaponList MAC10(("MAC10"), 23);
	WeaponList P90(("P90"), 24);
	WeaponList MP5(("MP5"), 40);
	WeaponList COLTSMG635(("Colt SMG 635"), 49);
	WeaponList L2A3(("L2A3"), 53);
	WeaponList MP5SD(("MP5SD"), 60);
	WeaponList MP10(("MP10"), 66);
	WeaponList M3A1(("M3A1"), 71);
	WeaponList MP5_10(("MP5/10"), 74);
	WeaponList UZI(("UZI"), 77);
	WeaponList AUG_A3_PARA(("AUG A3 Para"), 80);
	WeaponList KRINKOV(("Krinkov"), 88);
	WeaponList PPSH_41(("PPSH-41"), 92);
	WeaponList FAL_PARA_SHORTY(("FAL PARA Shorty"), 98); //do NOT remove the extra spaces! Will cause error in some XString file at line 305 when this particular string is 15 characters long (("FAL PARA Shorty")!
	WeaponList KRISS_VECTOR(("Kriss Vector"), 100);
	WeaponList MP40(("MP40"), 104);
	WeaponList PP19_BIZON(("PP-19 Bizon"), 105);
	WeaponList X95R_SMG(("X95R SMG"), 115);
	WeaponList TOMMY_GUN(("Tommy Gun"), 121);
	//personal defense weapon
	std::vector<WeaponList> PDWS = {

		MP5K, UMP45, G36C, MP7, MAC10, P90, MP5, COLTSMG635, L2A3, MP5SD, MP10, M3A1, MP5_10, UZI, AUG_A3_PARA, KRINKOV, PPSH_41, FAL_PARA_SHORTY, KRISS_VECTOR, MP40, PP19_BIZON, X95R_SMG, TOMMY_GUN

	};



	WeaponList KSG_12(("KSG-12"), 1);
	WeaponList REMINGTON_870(("Remington 870"), 11);
	WeaponList DBV_12(("DBV-12"), 24);
	WeaponList KS_23M(("KS-23M"), 56);
	WeaponList SAIGA_12(("Saiga-12"), 63);
	WeaponList STEVENS_DB(("Stevens DB"), 81);
	WeaponList AA_12(("AA-12"), 112);
	WeaponList SPAS_12(("SPAS-12"), 120);
	//shotguns
	std::vector<WeaponList> SHOTGUNS = {

		KSG_12, REMINGTON_870, DBV_12, KS_23M, SAIGA_12, STEVENS_DB, AA_12, SPAS_12

	};



	WeaponList G17(("G17"), 0);
	WeaponList M9(("M9"), 0);
	WeaponList M1911(("M1911"), 8);
	WeaponList DEAGLE_L5(("Desert Eagle L5"), 18);
	WeaponList M45A1(("M45A1"), 34);
	WeaponList FIVE_SEVEN(("Five-Seven"), 57);
	WeaponList ZIP_22(("ZIP .22"), 61);
	WeaponList DEAGLE_XIX(("Desert Eagle XIX"), 102);
	//pistols
	std::vector<WeaponList> PISTOLS = {

		G17, M9, M1911, DEAGLE_L5, M45A1, FIVE_SEVEN, ZIP_22, DEAGLE_XIX

	};


	WeaponList G18(("G18"), 17);
	WeaponList M93R(("93R"), 26);
	WeaponList TEC_9(("TEC-9"), 50);
	WeaponList MICRO_UZI(("Micro UZI"), 68);
	WeaponList MP1911(("MP1911"), 106);
	//machine pistols
	std::vector<WeaponList> MPS = {

		G18, M93R, TEC_9, MICRO_UZI, MP1911

	};


	WeaponList MP412REX(("MP412 REX"), 4);
	WeaponList MATEBA_6(("Mateba 6"), 29);
	WeaponList R1858_NEW_ARMY(("1858 New Army"), 58);
	WeaponList REDHAWK_44(("Redhawk .44"), 83);
	WeaponList JUDGE(("Judge"), 113);
	WeaponList EXECUTIONER(("Executioner"), 139);
	//revolvers
	std::vector<WeaponList> REVOLVERS = {

		MP412REX, MATEBA_6, R1858_NEW_ARMY, REDHAWK_44, JUDGE, EXECUTIONER

	};


	WeaponList SERBU_SHOTGUN(("Serbu Shotgun"), 36);
	WeaponList SFG_50(("SFG-50"), 75);
	WeaponList SAWED_OFF(("Sawed-Off"), 90);
	WeaponList SAIGA_12U(("Saiga 12u"), 95);
	WeaponList OBREZ(("Obrez"), 117);
	//other
	std::vector<WeaponList> OTHER = {

		SERBU_SHOTGUN, SFG_50, SAWED_OFF, SAIGA_12U, OBREZ

	};




	WeaponList CROWBAR(("Crowbar"), 0);
	WeaponList KNIFE(("Knife"), 0);
	WeaponList TRENCH_MACE(("Trench Mace"), 23);
	WeaponList BASEBALL_BAT(("Baseball Bat"), 48);
	WeaponList NIGHTSTICK(("Nightstick"), 54);
	WeaponList MACHETE(("Machete"), 73);
	WeaponList ICE_PICK(("Ice Pick"), 73);
	WeaponList TOMAHAWK(("Tomahawk"), 83);
	WeaponList BRASS_KNUCKLE(("Brass Knuckle"), 97);
	WeaponList CRICKET_BAT(("Cricket Bat"), 109);
	WeaponList JASON(("Jason"), 119);
	WeaponList LONGSWORD(("Longsword"), 124);
	WeaponList FRYING_PAN(("Frying Pan!"), 139);
	WeaponList CRANE(("Crane"), 10000);
	WeaponList JADE_KEY(("Jade Key"), 10000);

	WeaponList MORNING_STAR(("Morning Star"), 200);
	WeaponList FIRE_AXE(("Fire Axe"), 150);
	WeaponList BANJO(("Banjo"), 112);

	WeaponList RITUAL_SICKLE(("Ritual Sickle"), 49);
	WeaponList KEY(("Key"), 69);
	WeaponList POCKET_KNIFE(("Pocket Knife"), 89);
	WeaponList DARKHEART(("Darkheart"), 150);
	WeaponList ZWEIHANDER(("Zweihander"), 185);
	WeaponList CLEMENTINE(("Clementine"), 132);
	WeaponList VOID_STAFF(("Void Staff"), 190);
	WeaponList HOCKEY_STICK(("Hockey Stick"), 0);
	//ranked melees
	std::vector<WeaponList> RMS = {

		CROWBAR, HOCKEY_STICK, KNIFE, TRENCH_MACE, BASEBALL_BAT, RITUAL_SICKLE, NIGHTSTICK, KEY, ICE_PICK, MACHETE, TOMAHAWK, POCKET_KNIFE, BRASS_KNUCKLE, CRICKET_BAT, BANJO, JASON, LONGSWORD,
		CLEMENTINE, FRYING_PAN, DARKHEART, FIRE_AXE, ZWEIHANDER, VOID_STAFF, MORNING_STAR, CRANE, JADE_KEY

	};

	//ritual sickle, 49
	//key, 69
	//pocket knife, 89
	//darkheart, 150
	//zweihander, 185
	//clementine, 132
	//void staff, 190
	//hockey stick, 0

	WeaponList ASP_BATON(("ASP Baton"), NULL); //
	WeaponList CHOSEN_ONE(("Chosen One"), NULL); //
	WeaponList KARAMBIT(("Karambit (R)"), NULL); //
	WeaponList TACTICAL_SPATULA(("Tactical Spatula"), NULL); //
	WeaponList MEK_LETH(("Mek'leth"), NULL); //
	WeaponList HUNTING_KNIFE(("Hunting Knife"), NULL); //
	WeaponList CLEAVER(("Cleaver"), NULL); //
	WeaponList HATTORI(("Hattori"), NULL); //
	WeaponList REAPER(("Reaper"), NULL); //
	WeaponList NORDIC_WAR_AXE(("Nordic War Axe"), NULL); //
	WeaponList STICK_GRENADE(("Stick Grenade"), NULL); //
	WeaponList SLEDGEHAMMER(("Sledgehammer"), NULL); //

	WeaponList TANZANITE_BLADE(("Tanzanite Blade "), NULL); //
	WeaponList NOOBSLAYER(("Noobslayer"), NULL); //
	WeaponList WORLD_BUSTER(("World Buster"), NULL); //
	WeaponList ZIRCON_TRIDENT(("Zircon Trident"), NULL); //
	WeaponList TANZANITE_PICK(("Tanzanite Pick"), NULL); //
	WeaponList MAGLITE_CLUB(("Maglite Club"), NULL);//
	WeaponList KEYBOARD(("Keyboard"), NULL); //
	WeaponList MJOLNIR(("Mjolnir "), NULL); //
	WeaponList ZIRCON_SLAMSICKLE(("Zircon Slamsickle"), NULL); //
	//unranked melees
	std::vector<WeaponList> URMS = {

		ASP_BATON, CHOSEN_ONE, CLEAVER, HATTORI, HUNTING_KNIFE, KARAMBIT, KEYBOARD, MAGLITE_CLUB, MEK_LETH, MJOLNIR, NOOBSLAYER, NORDIC_WAR_AXE, REAPER, SLEDGEHAMMER, STICK_GRENADE, TACTICAL_SPATULA,
		TANZANITE_BLADE, TANZANITE_PICK, WORLD_BUSTER, ZIRCON_SLAMSICKLE, ZIRCON_TRIDENT

	};


	//tanzanite blade
	//noobslayer
	//world buster
	//zircon trident
	//tanzanite pick
	//maglite club
	//keyboard
	//mjolnir
	//zircon slamsickle

	//... more gun objects...

}
#endif