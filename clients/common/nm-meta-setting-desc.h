/* nmcli - command-line tool to control NetworkManager
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Copyright 2010 - 2017 Red Hat, Inc.
 */

#ifndef __NM_META_SETTING_DESC_H__
#define __NM_META_SETTING_DESC_H__

#include "nm-meta-setting.h"

#define NM_META_TEXT_HIDDEN "<hidden>"

#define NM_META_TEXT_PROMPT_ADSL_PROTO N_("Protocol")
#define NM_META_TEXT_PROMPT_ADSL_PROTO_CHOICES "(" NM_SETTING_ADSL_PROTOCOL_PPPOA "/" NM_SETTING_ADSL_PROTOCOL_PPPOE "/" NM_SETTING_ADSL_PROTOCOL_IPOATM ")"

#define NM_META_TEXT_PROMPT_ADSL_ENCAP N_("ADSL encapsulation")
#define NM_META_TEXT_PROMPT_ADSL_ENCAP_CHOICES "(" NM_SETTING_ADSL_ENCAPSULATION_VCMUX "/" NM_SETTING_ADSL_ENCAPSULATION_LLC ") [none]"

#define NM_META_TEXT_PROMPT_CON_TYPE    N_("Connection type")
#define NM_META_TEXT_PROMPT_IFNAME      N_("Interface name [*]")
#define NM_META_TEXT_PROMPT_VPN_TYPE    N_("VPN type")
#define NM_META_TEXT_PROMPT_MASTER      N_("Master")

#define NM_META_TEXT_PROMPT_IB_MODE     N_("Transport mode")
#define NM_META_TEXT_WORD_DATAGRAM  "datagram"
#define NM_META_TEXT_WORD_CONNECTED "connected"
#define NM_META_TEXT_PROMPT_IB_MODE_CHOICES "(" NM_META_TEXT_WORD_DATAGRAM "/" NM_META_TEXT_WORD_CONNECTED ") [" NM_META_TEXT_WORD_DATAGRAM "]"

#define NM_META_TEXT_PROMPT_BT_TYPE N_("Bluetooth type")
#define NM_META_TEXT_WORD_PANU      "panu"
#define NM_META_TEXT_WORD_DUN_GSM   "dun-gsm"
#define NM_META_TEXT_WORD_DUN_CDMA  "dun-cdma"
#define NM_META_TEXT_PROMPT_BT_TYPE_CHOICES "(" NM_META_TEXT_WORD_PANU "/" NM_META_TEXT_WORD_DUN_GSM "/" NM_META_TEXT_WORD_DUN_CDMA ") [" NM_META_TEXT_WORD_PANU "]"

#define NM_META_TEXT_PROMPT_BOND_MODE N_("Bonding mode")

#define NM_META_TEXT_PROMPT_BOND_MON_MODE N_("Bonding monitoring mode")
#define NM_META_TEXT_WORD_MIIMON "miimon"
#define NM_META_TEXT_WORD_ARP    "arp"
#define NM_META_TEXT_PROMPT_BOND_MON_MODE_CHOICES "(" NM_META_TEXT_WORD_MIIMON "/" NM_META_TEXT_WORD_ARP ") [" NM_META_TEXT_WORD_MIIMON "]"

#define NM_META_TEXT_PROMPT_WIFI_MODE N_("Wi-Fi mode")
#define NM_META_TEXT_WORD_INFRA  "infrastructure"
#define NM_META_TEXT_WORD_AP     "ap"
#define NM_META_TEXT_WORD_ADHOC  "adhoc"
#define NM_META_TEXT_PROMPT_WIFI_MODE_CHOICES "(" NM_META_TEXT_WORD_INFRA "/" NM_META_TEXT_WORD_AP "/" NM_META_TEXT_WORD_ADHOC ") [" NM_META_TEXT_WORD_INFRA "]"

#define NM_META_TEXT_PROMPT_TUN_MODE N_("Tun mode")
#define NM_META_TEXT_WORD_TUN  "tun"
#define NM_META_TEXT_WORD_TAP  "tap"
#define NM_META_TEXT_PROMPT_TUN_MODE_CHOICES "(" NM_META_TEXT_WORD_TUN "/" NM_META_TEXT_WORD_TAP ") [" NM_META_TEXT_WORD_TUN "]"

#define NM_META_TEXT_PROMPT_IP_TUNNEL_MODE N_("IP Tunnel mode")

#define NM_META_TEXT_PROMPT_MACVLAN_MODE N_("MACVLAN mode")

#define NM_META_TEXT_PROMPT_MACSEC_MODE N_("MACsec mode")
#define NM_META_TEXT_WORD_PSK "psk"
#define NM_META_TEXT_WORD_EAP "eap"
#define NM_META_TEXT_PROMPT_MACSEC_MODE_CHOICES "(" NM_META_TEXT_WORD_PSK "/" NM_META_TEXT_WORD_EAP ")"

#define NM_META_TEXT_PROMPT_PROXY_METHOD N_("Proxy method")
#define NM_META_TEXT_WORD_NONE "none"
#define NM_META_TEXT_WORD_AUTO "auto"
#define NM_META_TEXT_PROMPT_PROXY_METHOD_CHOICES "(" NM_META_TEXT_WORD_NONE "/" NM_META_TEXT_WORD_AUTO ") [" NM_META_TEXT_WORD_NONE "]"

typedef enum {
	NM_META_TERM_COLOR_NORMAL  = 0,
	NM_META_TERM_COLOR_BLACK   = 1,
	NM_META_TERM_COLOR_RED     = 2,
	NM_META_TERM_COLOR_GREEN   = 3,
	NM_META_TERM_COLOR_YELLOW  = 4,
	NM_META_TERM_COLOR_BLUE    = 5,
	NM_META_TERM_COLOR_MAGENTA = 6,
	NM_META_TERM_COLOR_CYAN    = 7,
	NM_META_TERM_COLOR_WHITE   = 8,
} NMMetaTermColor;

typedef enum {
	NM_META_TERM_FORMAT_NORMAL     = 0,
	NM_META_TERM_FORMAT_BOLD       = 1,
	NM_META_TERM_FORMAT_DIM        = 2,
	NM_META_TERM_FORMAT_UNDERLINE  = 3,
	NM_META_TERM_FORMAT_BLINK      = 4,
	NM_META_TERM_FORMAT_REVERSE    = 5,
	NM_META_TERM_FORMAT_HIDDEN     = 6,
} NMMetaTermFormat;

typedef enum {
	NM_META_ACCESSOR_GET_TYPE_PRETTY,
	NM_META_ACCESSOR_GET_TYPE_PARSABLE,
	NM_META_ACCESSOR_GET_TYPE_TERMFORMAT,
} NMMetaAccessorGetType;

static inline void
nm_meta_termformat_unpack (gconstpointer value, NMMetaTermColor *out_color, NMMetaTermFormat *out_format)
{
	/* get_fcn() with NM_META_ACCESSOR_GET_TYPE_TERMFORMAT returns a pointer
	 * that encodes NMMetaTermColor and NMMetaTermFormat. Unpack it. */
	if (!value) {
		/* by default, objects that don't support NM_META_ACCESSOR_GET_TYPE_TERMFORMAT
		 * return NULL. This allows for an explicit fallback value here... */
		NM_SET_OUT (out_color, NM_META_TERM_COLOR_NORMAL);
		NM_SET_OUT (out_format, NM_META_TERM_FORMAT_NORMAL);
	} else {
		NM_SET_OUT (out_color, GPOINTER_TO_UINT (value) & 0xFF);
		NM_SET_OUT (out_format, (GPOINTER_TO_UINT (value) & 0xFF00) >> 8);
	}
}

static inline gconstpointer
nm_meta_termformat_pack (NMMetaTermColor color, NMMetaTermFormat format)
{
	/* get_fcn() with NM_META_ACCESSOR_GET_TYPE_TERMFORMAT returns a pointer
	 * that encodes NMMetaTermColor and NMMetaTermFormat. Pack it. */
	return GUINT_TO_POINTER (((guint) 0x10000) | (((guint) color) & 0xFFu) | ((((guint) format) & 0xFFu) << 8));
}

#define NM_META_TERMFORMAT_DEFAULT() (nm_meta_termformat_pack (NM_META_TERM_COLOR_NORMAL, NM_META_TERM_FORMAT_NORMAL))

typedef enum {
	NM_META_ACCESSOR_GET_FLAGS_NONE                                         = 0,
	NM_META_ACCESSOR_GET_FLAGS_ACCEPT_STRV                                  = (1LL <<  0),
	NM_META_ACCESSOR_GET_FLAGS_SHOW_SECRETS                                 = (1LL <<  1),
} NMMetaAccessorGetFlags;

typedef enum {
	NM_META_ACCESSOR_GET_OUT_FLAGS_NONE                                     = 0,
	NM_META_ACCESSOR_GET_OUT_FLAGS_STRV                                     = (1LL <<  0),
} NMMetaAccessorGetOutFlags;

typedef enum {
	NM_META_PROPERTY_TYP_FLAG_ENUM_GET_PRETTY_NUMERIC                       = (1LL <<  0),
	NM_META_PROPERTY_TYP_FLAG_ENUM_GET_PRETTY_NUMERIC_HEX                   = (1LL <<  1),
	NM_META_PROPERTY_TYP_FLAG_ENUM_GET_PRETTY_TEXT                          = (1LL <<  2),
	NM_META_PROPERTY_TYP_FLAG_ENUM_GET_PRETTY_TEXT_L10N                     = (1LL <<  3),
	NM_META_PROPERTY_TYP_FLAG_ENUM_GET_PARSABLE_NUMERIC                     = (1LL <<  4),
	NM_META_PROPERTY_TYP_FLAG_ENUM_GET_PARSABLE_NUMERIC_HEX                 = (1LL <<  5),
	NM_META_PROPERTY_TYP_FLAG_ENUM_GET_PARSABLE_TEXT                        = (1LL <<  6),
} NMMetaPropertyTypFlags;

typedef enum {
	NM_META_PROPERTY_TYPE_MAC_MODE_DEFAULT,
	NM_META_PROPERTY_TYPE_MAC_MODE_CLONED,
	NM_META_PROPERTY_TYPE_MAC_MODE_INFINIBAND,
} NMMetaPropertyTypeMacMode;

typedef struct _NMMetaEnvironment           NMMetaEnvironment;
typedef struct _NMMetaType                  NMMetaType;
typedef struct _NMMetaAbstractInfo          NMMetaAbstractInfo;
typedef struct _NMMetaSettingInfoEditor     NMMetaSettingInfoEditor;
typedef struct _NMMetaPropertyInfo          NMMetaPropertyInfo;
typedef struct _NMMetaPropertyType          NMMetaPropertyType;
typedef struct _NMMetaPropertyTypData       NMMetaPropertyTypData;

struct _NMMetaPropertyType {

	const char *(*describe_fcn) (const NMMetaPropertyInfo *property_info,
	                             char **out_to_free);
	gconstpointer (*get_fcn) (const NMMetaPropertyInfo *property_info,
	                          const NMMetaEnvironment *environment,
	                          gpointer environment_user_data,
	                          NMSetting *setting,
	                          NMMetaAccessorGetType get_type,
	                          NMMetaAccessorGetFlags get_flags,
	                          NMMetaAccessorGetOutFlags *out_flags,
	                          gpointer *out_to_free);
	gboolean (*set_fcn) (const NMMetaPropertyInfo *property_info,
	                     const NMMetaEnvironment *environment,
	                     gpointer environment_user_data,
	                     NMSetting *setting,
	                     const char *value,
	                     GError **error);
	gboolean (*remove_fcn) (const NMMetaPropertyInfo *property_info,
	                        const NMMetaEnvironment *environment,
	                        gpointer environment_user_data,
	                        NMSetting *setting,
	                        const char *option,
	                        guint32 idx,
	                        GError **error);

	const char *const*(*values_fcn) (const NMMetaPropertyInfo *property_info,
	                                 char ***out_to_free);
};

struct _NMUtilsEnumValueInfo;

struct _NMMetaPropertyTypDataNested;

struct _NMMetaPropertyTypData {
	union {
		struct {
			gboolean (*fcn) (NMSetting *setting);
		} get_with_default;
		struct {
			GType (*get_gtype) (void);
			int min;
			int max;
			const struct _NMUtilsEnumValueInfo *value_infos;
		} gobject_enum;
		struct {
			guint32 (*get_fcn) (NMSetting *setting);
		} mtu;
		struct {
			NMMetaPropertyTypeMacMode mode;
		} mac;
		struct {
			const struct _NMMetaPropertyTypDataNested *data;
		} nested;
	} subtype;
	const char *const*values_static;
	NMMetaPropertyTypFlags typ_flags;
};

typedef enum {
	NM_META_PROPERTY_INF_FLAG_NONE                      = 0x00,
	NM_META_PROPERTY_INF_FLAG_REQD                      = 0x01, /* Don't ask to ask. */
	NM_META_PROPERTY_INF_FLAG_DONT_ASK                  = 0x02, /* Don't ask interactively by default */
	NM_META_PROPERTY_INF_FLAG_MULTI                     = 0x04, /* Ask multiple times, do an append instead of set. */
} NMMetaPropertyInfFlags;

struct _NMMetaPropertyInfo {
	const NMMetaType *meta_type;

	const NMMetaSettingInfoEditor *setting_info;

	const char *property_name;

	const char *property_alias;

	NMMetaPropertyInfFlags inf_flags;
	bool is_secret:1;

	bool is_cli_option:1;

	const char *prompt;

	const char *def_hint;

	const char *describe_doc;

	const char *describe_message;

	const NMMetaPropertyType    *property_type;
	const NMMetaPropertyTypData *property_typ_data;
};

struct _NMMetaSettingInfoEditor {
	const NMMetaType *meta_type;
	const NMMetaSettingInfo *general;
	const char *pretty_name;
	/* the order of the properties matter. The first *must* be the
	 * "name", and then the order is as they are listed by default. */
	const NMMetaPropertyInfo *properties;
	guint properties_num;
};

struct _NMMetaType {
	const char *type_name;
	const char *(*get_name) (const NMMetaAbstractInfo *abstract_info,
	                         gboolean for_header);
	const NMMetaAbstractInfo *const*(*get_nested) (const NMMetaAbstractInfo *abstract_info,
	                                               guint *out_len,
	                                               gpointer *out_to_free);
	gconstpointer (*get_fcn) (const NMMetaAbstractInfo *info,
	                          const NMMetaEnvironment *environment,
	                          gpointer environment_user_data,
	                          gpointer target,
	                          NMMetaAccessorGetType get_type,
	                          NMMetaAccessorGetFlags get_flags,
	                          NMMetaAccessorGetOutFlags *out_flags,
	                          gpointer *out_to_free);
};

struct _NMMetaAbstractInfo {
	const NMMetaType *meta_type;
};

extern const NMMetaType nm_meta_type_setting_info_editor;
extern const NMMetaType nm_meta_type_property_info;

extern const NMMetaSettingInfoEditor nm_meta_setting_infos_editor[_NM_META_SETTING_TYPE_NUM];

/*****************************************************************************/

typedef enum {
	NM_META_ENV_WARN_LEVEL_INFO,
	NM_META_ENV_WARN_LEVEL_WARN,
} NMMetaEnvWarnLevel;

/* the settings-meta data is supposed to be independent of an actual client
 * implementation. Hence, there is a need for hooks to the meta-data.
 * The meta-data handlers may call back to the enviroment with certain
 * actions. */
struct _NMMetaEnvironment {

	void (*warn_fcn) (const NMMetaEnvironment *environment,
	                  gpointer environment_user_data,
	                  NMMetaEnvWarnLevel warn_level,
	                  const char *fmt_l10n, /* the untranslated format string, but it is marked for translation using N_(). */
	                  va_list ap);

};

/*****************************************************************************/

/* NMSettingBond is special in that it has nested properties.
 * We will add API to proper handle such types (Bond, VPN, User),
 * but for now just expose the type info directly. */

extern const NMMetaType nm_meta_type_nested_property_info;

typedef struct _NMMetaNestedPropertyTypeInfo  {
	const NMMetaType *meta_type;
	const NMMetaPropertyInfo *parent_info;
	const char *field_name;
	NMMetaPropertyInfFlags inf_flags;
	const char *prompt;
	const char *def_hint;
} NMMetaNestedPropertyTypeInfo;

typedef struct _NMMetaPropertyTypDataNested  {
	const NMMetaNestedPropertyTypeInfo *nested;
	guint nested_len;
} NMMetaPropertyTypDataNested;

const NMMetaPropertyTypDataNested nm_meta_property_typ_data_bond;

/*****************************************************************************/

#endif /* __NM_META_SETTING_DESC_H__ */
