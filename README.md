# ootBuffScrub
Everything necessary to add the Buff Scrub to oot using decomp (https://github.com/zeldaret/oot).


## Showcase
* **Video:** <https://youtu.be/vWf0wyf6uw0>
* The Buff Scrub spawns from a regular Mad Scrub, when a specific param is set to 1 (0xXXX1).
* The Buff Scrub when rentlessly try to murder Link when spawned.
* The Buff Scrub is afraid of fire based attacks and can only be killed by these. (Fire Arrows, Lit Arrows, Fire Magic and Burning Deku Sticks)
* He taunts you every time it hits you.

## Setting Up
You'll have to modify your files manually, copy and paste in the files from your repo, and you'll be fine (probably)..
* **These files need to be modified :**
  * in ``spec`` add the content from the file in this repo.
  * in ``include/tables/actor_table.h`` add ``DEFINE_OBJECT(object_buffdeku, OBJECT_BUFFDEKU)``
  * in  ``include/tables/object_table.h`` add ``DEFINE_ACTOR(En_BuffDeku, ACTOR_EN_BUFFDEKU, ACTOROVL_ALLOC_NORMAL, "Buff Scrub")``
  * in  ``src/overlays/actors/ovl_En_Dekunuts/z_en_dekunuts.c`` replace it completely with the file from this repo or just add this: <https://github.com/CLeSeducteur/ootBuffScrub/blob/main/z_en_dekunuts.c#L186-L191>.

* **Adding new stuff:**
  * in ``assets/objects/``, add the repertory ``object_buffdeku``
  * in ``src/overlays/actors/`` add the repertory  ``ovl_En_BuffDeku/``

Just ``make clean`` then ``make`` and it should normally work.

Add it to your maps and have fun! 

There's room for improvement, maybe I'll update it later with new gimmicks.

Please credit me when using it in your hacks, thank you. 

* Made by LeSéducteur
