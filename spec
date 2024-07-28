! Important put the segments with the correspondings segments, the objects with the objects et the ovl with the ovl !

beginseg
    name "object_buffdeku"
    compress
    romalign 0x1000
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/BuffDekuSkel.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/GetOutGround.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/Punch.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/WalkCycle.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/GetOutGround.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/Taunt1.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/Taunt2.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/Taunt3.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/Taunt4.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/Spin.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/Death.o"
    include "$(BUILD_DIR)/assets/objects/object_buffdeku/Panic.o"
    number 6
endseg

beginseg
    name "ovl_En_BuffDeku"
    compress
    include "$(BUILD_DIR)/src/overlays/actors/ovl_En_BuffDeku/z_en_buffdeku.o"
    include "$(BUILD_DIR)/src/overlays/actors/ovl_En_BuffDeku/ovl_En_BuffDeku_reloc.o"
endseg
