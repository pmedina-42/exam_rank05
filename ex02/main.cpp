#include "Warlock.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

 int main()
 {
   Warlock richard("Richard", "foo");
   richard.setTitle("Hello, I'm Richard the Warlock!");
   BrickWall model1;

   Fwoosh* polymorph = new Fwoosh();
   TargetGenerator tarGen;

   tarGen.learnTargetType(&model1);
   richard.learnSpell(polymorph);

   Fireball* fireball = new Fireball();

   richard.learnSpell(fireball);

   ATarget* wall = tarGen.createTarget("Wall");

   richard.introduce();
   richard.launchSpell("Fwoosh", *wall);
   richard.launchSpell("Fireball", *wall);
 }
