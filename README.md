# ootBuffScrub
Everything necessary to add the Buff Scrub to oot using decomp (https://github.com/zeldaret/oot).


## Showcase
* **Video:** <https://youtu.be/vWf0wyf6uw0>
* The Buff Scrub spawns from a regular Mad Scrub, when a specific param is set to 1 (0xXXX1).
* The Buff Scrub when rentlessly try to murder Link when spawned.
* The Buff Scrub is afraid of fire based attacks and can only be killed by these. (Fire Arrows, Lit Arrows, Fire Magic and Burning Deku Sticks)
* He taunts you every time it hits you.

## Setting Up
You'll have to modify your files manually, copy the content of the new files in those from your repo, and you'll be fine (probably)..
* **These files need to be modified :**
  * ``spec``
  * ``include/tables/actor_table.h``
  * ``include/tables/object_table.h``
  *  ``src/overlays/actors/ovl_En_Dekunuts/z_en_dekunuts.c``

* **Adding new stuff:**
  * in ``assets/objects/``, add the repertory ``object_buffdeku``
  * in ``src/overlays/actors/`` add the repertory  ``ovl_En_BuffDeku/``

Then just ``make clean`` and it should normally work.

Please credit me when using it in your hacks, thank you. 
* Made by LeSéducteur
