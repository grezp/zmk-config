#pragma once

#define DEFAULT   0
#define ALT_MOD   1
#define FUN_LAY   2
#define NUM_LAY   3
#define SYM_LAY   4
#define NAV_LAY   5

#define LAYER_ALPHAS \
&lt FUN_LAY TILDE  &kp Q              &kp W              &kp F              &kp P              &kp B              &kp J              &kp L              &kp U              &kp Y              &kp SEMI           &kp BSPC           \
&lt NAV_LAY TAB    &kp A              &kp R              &kp S              &kp T              &kp G              &kp M              &kp N              &kp E              &kp I              &kp O              &kp SQT            \
&mo ALT_MOD        &kp Z              &kp X              &kp C              &kp D              &kp V              &kp K              &kp H              &kp COMMA          &kp DOT            &kp FSLH           &kp DEL            \
                                                         &kp LGUI           &lt SYM_LAY ESC    &btm LCTRL SPACE   &kp LSHFT          &lt NUM_LAY RET    &kp LALT

#define LAYER_ALT_MODS \
&trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             \
&trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             \
&trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             &trans             \
                                      &kp LC(LGUI)       &kp LG(SPACE)      &kp LC(SPACE)      &trans &kp LS(RET) &kp LALT


#define LAYER_FUNC \
&trans             &kp LALT           &kp RET            &kp LSHFT          &trans             &trans             &trans             &kp F7             &kp F8             &kp F9             &kp F10            &trans             \
&trans             &bt BT_SEL 0       &bt BT_SEL 1       &bt BT_SEL 2       &bt BT_SEL 3       &bt BT_CLR         &trans             &kp F4             &kp F5             &kp F6             &kp F11            &trans             \
&trans             &trans             &trans             &trans             &trans             &trans             &trans             &kp F1             &kp F2             &kp F3             &kp F12            &trans             \
                                      &none              &none              &none              &none              &none              &none


#define LAYER_NUM \
&none              &none              &none              &none              &none              &none              &none              &kp N7             &kp N8             &kp N9             &kp LBRC            &kp RBRC          \
&none              &none              &kp LGUI           &kp LALT           &kp LCTRL          &kp LSHFT          &kp DOT            &kp N4             &kp N5             &kp N6             &kp LPAR            &kp RPAR          \
&none              &none              &none              &none              &none              &none              &kp N0             &kp N1             &kp N2             &kp N3             &kp LBKT            &kp RBKT          \
                                                         &none              &mo SYM_LAY        &kp SPACE          &none              &trans             &none


#define LAYER_SYM \
&none              &kp BSLH           &kp PRCNT          &kp AMPS           &kp POUND          &kp DLLR           &none              &none              &none              &none              &none               &none             \
&none              &kp PLUS           &kp EQUAL          &kp ASTRK          &kp UNDER          &kp CARET          &kp LSHFT          &kp LCTRL          &kp LALT           &kp LGUI           &none               &none             \
&none              &kp GRAVE          &kp EXCL           &kp PIPE           &kp MINUS          &kp AT             &none              &none              &none              &none              &none               &none             \
                                                         &none              &trans             &none              &none              &mo NUM_LAY        &none


#define LAYER_NAV \
&none              &kp PG_UP          &kp UP             &kp PG_DN          &kp C_VOL_UP       &none              &none              &kp LC(LG(LEFT))   &kp LC(LG(RIGHT))  &kp LC(LG(UP))     &none               &none             \
&none              &kp LEFT           &kp DOWN           &kp RIGHT          &kp C_VOL_DN       &none              &kp LEFT           &kp DOWN           &kp UP             &kp RIGHT          &none               &none             \
&none              &kp C_PREV         &kp C_PP           &kp C_NEXT         &kp K_MUTE         &none              &kp HOME           &kp PG_DN          &kp PG_UP          &kp END            &none               &none             \
                                                         &kp LGUI           &kp LG(LCTRL)      &kp LCTRL          &kp LG(LALT)       &kp LC(LALT)       &kp LALT

