/****************************************************************************!
*                _           _   _   _                                       *
*               | |__  _ __ / \ | |_| |__   ___ _ __   __ _                  *
*               | '_ \| '__/ _ \| __| '_ \ / _ \ '_ \ / _` |                 *
*               | |_) | | / ___ \ |_| | | |  __/ | | | (_| |                 *
*               |_.__/|_|/_/   \_\__|_| |_|\___|_| |_|\__,_|                 *
*                                                                            *
*                            www.brathena.org                                *
******************************************************************************
* src/login/mac.h                                                          *
******************************************************************************
* Copyright (c) brAthena Dev Team                                            *
*                                                                            *
* Licenciado sob a licenca GNU GPL                                           *
* Para mais informa��es leia o arquivo LICENSE na ra�z do emulador           *
*****************************************************************************/

#ifndef LOGIN_MAC_H
#define LOGIN_MAC_H

#include "common/db.h"
#include "common/cbasetypes.h"

#ifdef BRATHENA_CORE

struct mac_interface
{
    // Database para todos os mac_address online
    DBMap* onlinedb;

    // Fun��es de inicializa��o dos dados para mac-address
    void (*init) ();
    void (*final) ();
    bool (*config_read) (const char* key, const char* value);
};

struct mac_interface* mac;

void mac_doinit();

#endif // BRATHENA_CORE

#endif /* LOGIN_MAC_H */
