#pragma once

#define DEFAULT   0
#define LAY_FUN   1
#define LAY_NUM   2
#define LAY_SYM   3
#define LAY_NAV   4
#define LAY_MED   5
#define LAY_CTL   6

#define XXX       &none
#define TRANS     &trans

#define LAYER_ALPHAS \
/**************************************************************************************************************************************************************************************************************************/\
&lt LAY_FUN TILDE &kp Q             &kp W             &kp F             &kp P             &kp B        /**/     &kp J             &kp L             &kp U             &kp Y             &kp SEMI          &kp BSPC          \
&lt LAY_MED TAB   &kp A             &hm LALT R        &hm LGUI S        &hm LCTRL T       &kp G        /**/     &kp M             &hm LCTRL N       &hm LGUI E        &hm LALT I        &kp O             &kp SQT           \
&mo LAY_CTL       &kp Z             &kp X             &kp C             &kp D             &kp V        /**/     &kp K             &kp H             &kp COMMA         &kp DOT           &kp FSLH          &kp DEL           \
                                                      &mo LAY_NAV       &lt LAY_SYM ESC   &kp SPACE    /**/     &kp LSHFT         &lt LAY_NUM RET   &kp LS(LG(LC(LALT)))
/***************************************************************************************************************************************************************************************************************************/

#define LAYER_FUNC \
/**************************************************************************************************************************************************************************************************************************/\
XXX               XXX               &kp RET           &kp LSHFT         XXX               XXX          /**/     XXX               &kp F7            &kp F8            &kp F9            &kp F10           XXX               \
TRANS             &bt BT_SEL 0      &bt BT_SEL 1      &bt BT_SEL 2      &bt BT_SEL 3      &bt BT_CLR   /**/     XXX               &kp F4            &kp F5            &kp F6            &kp F11           XXX               \
XXX               XXX               XXX               XXX               XXX               XXX          /**/     XXX               &kp F1            &kp F2            &kp F3            &kp F12           XXX               \
                                                      TRANS             TRANS             TRANS        /**/     TRANS             TRANS             TRANS
/***************************************************************************************************************************************************************************************************************************/

#define LAYER_NUM \
/**************************************************************************************************************************************************************************************************************************/\
XXX               XXX               XXX               XXX               XXX               XXX          /**/     XXX               &kp N7            &kp N8            &kp N9            &kp LBRC           &kp RBRC         \
XXX               XXX               &kp LALT          &kp LGUI          &kp LCTRL         &kp LSHFT    /**/     &kp DOT           &kp N4            &kp N5            &kp N6            &kp LPAR           &kp RPAR         \
XXX               XXX               XXX               XXX               XXX               XXX          /**/     &kp N0            &kp N1            &kp N2            &kp N3            &kp LBKT           &kp RBKT         \
                                                      TRANS             TRANS             TRANS        /**/     TRANS             TRANS             TRANS
/***************************************************************************************************************************************************************************************************************************/

#define LAYER_SYM \
/**************************************************************************************************************************************************************************************************************************/\
XXX               &kp BSLH          &kp PRCNT         &kp AMPS          &kp POUND         &kp DLLR     /**/     XXX               XXX               XXX               XXX               XXX                XXX              \
XXX               &kp PLUS          &kp EQUAL         &kp ASTRK         &kp UNDER         &kp CARET    /**/     &kp LSHFT         &kp LCTRL         &kp LGUI          &kp LALT          XXX                XXX              \
XXX               &kp GRAVE         &kp EXCL          &kp PIPE          &kp MINUS         &kp AT       /**/     XXX               XXX               XXX               XXX               XXX                XXX              \
                                                      TRANS             TRANS             TRANS        /**/     TRANS             TRANS             TRANS
/***************************************************************************************************************************************************************************************************************************/

#define LAYER_NAV \
/**************************************************************************************************************************************************************************************************************************/\
XXX               XXX               XXX               XXX               XXX               XXX          /**/     XXX               XXX               XXX               XXX               XXX                &kp CAPS         \
XXX               XXX               &kp LALT          &kp LGUI          &kp LCTRL         &kp LSHFT    /**/     &kp LEFT          &kp DOWN          &kp UP            &kp RIGHT         XXX                &kp INS          \
XXX               XXX               XXX               XXX               XXX               XXX          /**/     &kp HOME          &kp PG_DN         &kp PG_UP         &kp END           XXX                XXX              \
                                                      TRANS             TRANS             TRANS        /**/     TRANS             TRANS             TRANS
/***************************************************************************************************************************************************************************************************************************/

#define LAYER_MED \
/**************************************************************************************************************************************************************************************************************************/\
XXX               &kp PG_UP         &kp UP            &kp PG_DN         &kp C_VOL_UP      XXX          /**/     XXX               XXX               XXX               XXX               XXX                XXX              \
XXX               &kp LEFT          &kp DOWN          &kp RIGHT         &kp C_VOL_DN      XXX          /**/     XXX               &kp LCTRL         &kp LGUI          &kp LALT          XXX                XXX              \
XXX               &kp C_PREV        &kp C_PP          &kp C_NEXT        &kp K_MUTE        XXX          /**/     XXX               XXX               XXX               XXX               XXX                XXX              \
                                                      TRANS             TRANS             TRANS        /**/     TRANS             TRANS             TRANS
/***************************************************************************************************************************************************************************************************************************/

#define LAYER_CTL \
/**************************************************************************************************************************************************************************************************************************/\
XXX               XXX               XXX               XXX               XXX               XXX          /**/     XXX               XXX               XXX               XXX               XXX                XXX              \
&kp LSHFT         &kp LC(Z)         &kp LC(X)         &kp LC(C)         &kp LC(V)         XXX          /**/     &kp LSHFT         &kp LCTRL         &kp LGUI          &kp LALT          XXX                XXX              \
TRANS             &kp LG(Z)         &kp LG(X)         &kp LG(C)         &kp LG(V)         XXX          /**/     XXX               XXX               XXX               XXX               XXX                XXX              \
                                                      TRANS             TRANS             TRANS        /**/     TRANS             TRANS             TRANS
/***************************************************************************************************************************************************************************************************************************/

