#include "Package.h"

CardPackage::CardPackage() : Package(cardtype){

	cards
		//slash
		<< new BasicCard(tr("slash"), tr("spade"), 2)
		<< new BasicCard(tr("slash"), tr("spade"), 3)
		<< new BasicCard(tr("slash"), tr("spade"), 4)
		<< new BasicCard(tr("slash"), tr("spade"), 5)
		<< new BasicCard(tr("slash"), tr("spade"), 6)
		<< new BasicCard(tr("slash"), tr("spade"), 7)
		<< new BasicCard(tr("slash"), tr("spade"), 8)
		<< new BasicCard(tr("slash"), tr("spade"), 8)
		<< new BasicCard(tr("slash"), tr("spade"), 9)
		<< new BasicCard(tr("slash"), tr("spade"), 9)
		<< new BasicCard(tr("slash"), tr("spade"), 10)
		<< new BasicCard(tr("slash"), tr("spade"), 10)
		<< new BasicCard(tr("slash"), tr("spade"), 11)
		<< new BasicCard(tr("slash"), tr("spade"), 11)
		<< new BasicCard(tr("slash"), tr("heart"), 6)
		<< new BasicCard(tr("slash"), tr("heart"), 10)
		<< new BasicCard(tr("slash"), tr("heart"), 10)
		<< new BasicCard(tr("slash"), tr("heart"), 11)
		<< new BasicCard(tr("slash"), tr("club"), 7)
		<< new BasicCard(tr("slash"), tr("club"), 8)
		<< new BasicCard(tr("slash"), tr("club"), 8)
		<< new BasicCard(tr("slash"), tr("club"), 9)
		<< new BasicCard(tr("slash"), tr("club"), 9)
		<< new BasicCard(tr("slash"), tr("club"), 10)
		<< new BasicCard(tr("slash"), tr("club"), 10)
		<< new BasicCard(tr("slash"), tr("diamond"), 7)
		<< new BasicCard(tr("slash"), tr("diamond"), 8)
		<< new BasicCard(tr("slash"), tr("diamond"), 9)
		<< new BasicCard(tr("slash"), tr("diamond"), 10)
		<< new BasicCard(tr("slash"), tr("diamond"), 13)

		//parry
		<< new BasicCard(tr("parry"), tr("heart"), 2)
		<< new BasicCard(tr("parry"), tr("heart"), 2)
		<< new BasicCard(tr("parry"), tr("heart"), 13)
		<< new BasicCard(tr("parry"), tr("diamond"), 2)
		<< new BasicCard(tr("parry"), tr("diamond"), 2)
		<< new BasicCard(tr("parry"), tr("diamond"), 3)
		<< new BasicCard(tr("parry"), tr("diamond"), 4)
		<< new BasicCard(tr("parry"), tr("diamond"), 5)
		<< new BasicCard(tr("parry"), tr("diamond"), 6)
		<< new BasicCard(tr("parry"), tr("diamond"), 7)
		<< new BasicCard(tr("parry"), tr("diamond"), 8)
		<< new BasicCard(tr("parry"), tr("diamond"), 9)
		<< new BasicCard(tr("parry"), tr("diamond"), 10)
		<< new BasicCard(tr("parry"), tr("diamond"), 11)
		<< new BasicCard(tr("parry"), tr("diamond"), 11)

		//supplement
		<< new BasicCard(tr("supplement"), tr("heart"), 3)
		<< new BasicCard(tr("supplement"), tr("heart"), 4)
		<< new BasicCard(tr("supplement"), tr("heart"), 6)
		<< new BasicCard(tr("supplement"), tr("heart"), 7)
		<< new BasicCard(tr("supplement"), tr("heart"), 8)
		<< new BasicCard(tr("supplement"), tr("heart"), 9)
		<< new BasicCard(tr("supplement"), tr("heart"), 12)
		<< new BasicCard(tr("supplement"), tr("diamond"), 12)

		//skill
		<< new SkillCard(tr("juedou"), tr("spade"), 1)
		<< new SkillCard(tr("juedou"), tr("heart"), 1)
		<< new SkillCard(tr("juedou"), tr("club"), 1)
		<< new SkillCard(tr("fudi"), tr("spade"), 3)
		<< new SkillCard(tr("fudi"), tr("spade"), 4)
		<< new SkillCard(tr("fudi"), tr("club"), 3)
		<< new SkillCard(tr("fudi"), tr("club"), 4)
		<< new SkillCard(tr("fudi"), tr("club"), 12)
		<< new SkillCard(tr("fudi"), tr("diamond"), 12)
		<< new SkillCard(tr("tannang"), tr("heart"), 3)
		<< new SkillCard(tr("tannang"), tr("heart"), 4)
		<< new SkillCard(tr("tannang"), tr("club"), 3)
		<< new SkillCard(tr("tannang"), tr("club"), 4)
		<< new SkillCard(tr("tannang"), tr("club"), 11)
		<< new SkillCard(tr("wuzhong"), tr("heart"), 7)
		<< new SkillCard(tr("wuzhong"), tr("heart"), 8)
		<< new SkillCard(tr("wuzhong"), tr("heart"), 9)
		<< new SkillCard(tr("wuzhong"), tr("heart"), 11)
		<< new SkillCard(tr("jiedao"), tr("spade"), 12)
		<< new SkillCard(tr("jiedao"), tr("spade"), 13)
		<< new SkillCard(tr("wuxie"), tr("spade"), 12)
		<< new SkillCard(tr("wuxie"), tr("spade"), 13)
		<< new SkillCard(tr("wuxie"), tr("heart"), 12)
		<< new SkillCard(tr("wuxie"), tr("club"), 11)
		<< new SkillCard(tr("wugu"), tr("diamond"), 3)
		<< new SkillCard(tr("wugu"), tr("diamond"), 4)
		<< new SkillCard(tr("xiuyang"), tr("diamond"), 1)
		<< new SkillCard(tr("fenghuo"), tr("spade"), 7)
		<< new SkillCard(tr("fenghuo"), tr("club"), 7)
		<< new SkillCard(tr("fenghuo"), tr("club"), 13)
		<< new SkillCard(tr("wanjian"), tr("diamond"), 1)
		<< new SkillCard(tr("huadi"), tr("spade"), 6)
		<< new SkillCard(tr("huadi"), tr("club"), 6)
		<< new SkillCard(tr("huadi"), tr("diamond"), 6)
		<< new SkillCard(tr("shoupenglei"), tr("club"), 1)
		<< new SkillCard(tr("shoupenglei"), tr("diamond"), 12)

		//equip
		<< new EquipCard(tr("hufu"), tr("spade"), 1)
		<< new EquipCard(tr("hufu"), tr("heart"), 1)
		<< new EquipCard(tr("yuruyu"), tr("spade"), 2)
		<< new EquipCard(tr("yuruyu"), tr("club"), 2)
		<< new EquipCard(tr("jingong"), tr("heart"), 13)
		<< new EquipCard(tr("jingong"), tr("club"), 13)
		<< new EquipCard(tr("jingong"), tr("diamond"), 13)
		<< new EquipCard(tr("fangyu"), tr("spade"), 5)
		<< new EquipCard(tr("fangyu"), tr("heart"), 5)
		<< new EquipCard(tr("fangyu"), tr("club"), 5)
		<< new EquipCard(tr("yuchangjian"), tr("club"), 6)
		<< new EquipCard(tr("bolangchui"), tr("diamond"), 5)
		<< new EquipCard(tr("bawanggong"), tr("heart"), 5)
		<< new EquipCard(tr("langyabang"), tr("heart"), 12)
		<< new EquipCard(tr("panlonggun"), tr("club"), 5)
		<< new EquipCard(tr("luyeqiang"), tr("club"), 12)
		<< new EquipCard(tr("longlindao"), tr("club"), 2);

}

int CardPackage::getAllCount(){

	return cards.length();

}
Card* CardPackage::getCardByN(int n){

	return cards[n];
}
