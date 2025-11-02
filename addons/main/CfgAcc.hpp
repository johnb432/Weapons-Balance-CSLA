class asdg_OpticRail {};
class asdg_OpticSideMount: asdg_OpticRail {
    class compatibleItems {};
};
class asdg_OpticSideRail_AK: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        CSLA_NSPU = 1;
        CSLA_ZD4x8 = 1;
        CSLA_PGO7 = 1;
    };
};
class asdg_OpticSideRail_AKSVD: asdg_OpticSideMount {
    class compatibleItems: compatibleItems {
        CSLA_NSPU = 1;
        CSLA_ZD4x8 = 1;
        CSLA_PGO7 = 1;
    };
};
