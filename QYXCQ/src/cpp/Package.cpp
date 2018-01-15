#include "Package.h"

CardPackage::CardPackage() : Package(cardtype){

	cards
		//slash
		<< new BasicCard("slash", "spade", 2)
		<< new BasicCard("slash", "spade", 3)
		<< new BasicCard("slash", "spade", 4)
		<< new BasicCard("slash", "spade", 5)
		<< new BasicCard("slash", "spade", 6)
		<< new BasicCard("slash", "spade", 7)
		<< new BasicCard("slash", "spade", 8)
		<< new BasicCard("slash", "spade", 8)
		<< new BasicCard("slash", "spade", 9)
		<< new BasicCard("slash", "spade", 9)
		<< new BasicCard("slash", "spade", 10)
		<< new BasicCard("slash", "spade", 10)
		<< new BasicCard("slash", "spade", 11)
		<< new BasicCard("slash", "spade", 11)
		<< new BasicCard("slash", "heart", 6)
		<< new BasicCard("slash", "heart", 10)
		<< new BasicCard("slash", "heart", 10)
		<< new BasicCard("slash", "heart", 11)
		<< new BasicCard("slash", "club", 7)
		<< new BasicCard("slash", "club", 8)
		<< new BasicCard("slash", "club", 8)
		<< new BasicCard("slash", "club", 9)
		<< new BasicCard("slash", "club", 9)
		<< new BasicCard("slash", "club", 10)
		<< new BasicCard("slash", "club", 10)
		<< new BasicCard("slash", "diamond", 7)
		<< new BasicCard("slash", "diamond", 8)
		<< new BasicCard("slash", "diamond", 9)
		<< new BasicCard("slash", "diamond", 10)
		<< new BasicCard("slash", "diamond", 13)

		//parry
		<< new BasicCard("parry", "heart", 2)
		<< new BasicCard("parry", "heart", 2)
		<< new BasicCard("parry", "heart", 13)
		<< new BasicCard("parry", "diamond", 2)
		<< new BasicCard("parry", "diamond", 2)
		<< new BasicCard("parry", "diamond", 3)
		<< new BasicCard("parry", "diamond", 4)
		<< new BasicCard("parry", "diamond", 5)
		<< new BasicCard("parry", "diamond", 6)
		<< new BasicCard("parry", "diamond", 7)
		<< new BasicCard("parry", "diamond", 8)
		<< new BasicCard("parry", "diamond", 9)
		<< new BasicCard("parry", "diamond", 10)
		<< new BasicCard("parry", "diamond", 11)
		<< new BasicCard("parry", "diamond", 11)

		//supplement
		<< new BasicCard("supplement", "heart", 3)
		<< new BasicCard("supplement", "heart", 4)
		<< new BasicCard("supplement", "heart", 6)
		<< new BasicCard("supplement", "heart", 7)
		<< new BasicCard("supplement", "heart", 8)
		<< new BasicCard("supplement", "heart", 9)
		<< new BasicCard("supplement", "heart", 12)
		<< new BasicCard("supplement", "diamond", 12)

		//skill
		<< new SkillCard("juedou", "spade", 1)
		<< new SkillCard("juedou", "heart", 1)
		<< new SkillCard("juedou", "club", 1)
		<< new SkillCard("fudi", "spade", 3)
		<< new SkillCard("fudi", "spade", 4)
		<< new SkillCard("fudi", "club", 3)
		<< new SkillCard("fudi", "club", 4)
		<< new SkillCard("fudi", "club", 12)
		<< new SkillCard("fudi", "diamond", 12)
		<< new SkillCard("tannang", "heart", 3)
		<< new SkillCard("tannang", "heart", 4)
		<< new SkillCard("tannang", "club", 3)
		<< new SkillCard("tannang", "club", 4)
		<< new SkillCard("tannang", "club", 11)
		<< new SkillCard("wuzhong", "heart", 7)
		<< new SkillCard("wuzhong", "heart", 8)
		<< new SkillCard("wuzhong", "heart", 9)
		<< new SkillCard("wuzhong", "heart", 11)
		<< new SkillCard("jiedao", "spade", 12)
		<< new SkillCard("jiedao", "spade", 13)
		<< new SkillCard("wuxie", "spade", 12)
		<< new SkillCard("wuxie", "spade", 13)
		<< new SkillCard("wuxie", "heart", 12)
		<< new SkillCard("wuxie", "club", 11)
		<< new SkillCard("wugu", "diamond", 3)
		<< new SkillCard("wugu", "diamond", 4)
		<< new SkillCard("xiuyang", "diamond", 1)
		<< new SkillCard("fenghuo", "spade", 7)
		<< new SkillCard("fenghuo", "club", 7)
		<< new SkillCard("fenghuo", "club", 13)
		<< new SkillCard("wanjian", "diamond", 1)
		<< new SkillCard("huadi", "spade", 6)
		<< new SkillCard("huadi", "club", 6)
		<< new SkillCard("huadi", "diamond", 6)
		<< new SkillCard("shoupenglei", "club", 1)
		<< new SkillCard("shoupenglei", "diamond", 12)

		//equip
		<< new EquipCard("hufu", "spade", 1)
		<< new EquipCard("hufu", "heart", 1)
		<< new EquipCard("yuruyu", "spade", 2)
		<< new EquipCard("yuruyu", "club", 2)
		<< new EquipCard("jingong", "heart", 13)
		<< new EquipCard("jingong", "club", 13)
		<< new EquipCard("jingong", "diamond", 13)
		<< new EquipCard("fangyu", "spade", 5)
		<< new EquipCard("fangyu", "heart", 5)
		<< new EquipCard("fangyu", "club", 5)
		<< new EquipCard("yuchangjian", "club", 6)
		<< new EquipCard("bolangchui", "diamond", 5)
		<< new EquipCard("bawanggong", "heart", 5)
		<< new EquipCard("langyabang", "heart", 12)
		<< new EquipCard("panlonggun", "club", 5)
		<< new EquipCard("luyeqiang", "club", 12)
		<< new EquipCard("longlindao", "club", 2);

}

int CardPackage::getAllCount(){

	return cards.length();

}
Card* CardPackage::getCardByN(int n){

	return cards[n];
}
