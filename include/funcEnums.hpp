#ifndef __FUNC_ENUMS_HPP__
#define __FUNC_ENUMS_HPP__

#define DINAMIK_MEMORY

enum COMP_POSITION{
    SOL,
    SAG,
    UST,
    ALT,
    ORTA,
    GENISLEYEN_SATIR,
    GENISLEYEN_SATIRSUTUN,
};


//menusf//
enum MENUS_FUNC{
    MENUSF_TANIMSIZ_BIR = 1,
    MENUSF_TANIMSIZ_IKI = 2,
    MENUSF_TANIMSIZ_UC = 3,
};

//buttonsf//
enum BUTTONS_FUNC{
    BUTTONSF_TANIMSIZ_BIR = 1,
    BUTTONSF_TANIMSIZ_IKI = 2,
    BUTTONSF_TANIMSIZ_UC = 3,

    BUTTONSF_LOGIN_BILGILERI_GONDER,
};

//textctrlsf
enum TEXTCTRLS_FUNC{
    TEXTCTRLSF_TANIMSIZ_BIR = 1,
    TEXTCTRLSF_TANIMSIZ_IKI,
    TEXTCTRLSF_TANIMSIZ_UC,

    TEXTCTRLSF_LOGIN_KULLANICI_ADI,
    TEXTCTRLSF_LOGIN_KULLANICI_PAROLA,
    TEXTCTRLSF_LOGIN_HAMACHI_HOST,
    
};




#endif 