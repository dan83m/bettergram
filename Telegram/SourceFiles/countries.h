/*
This file is part of Bettergram.

For license and copyright information please follow this link:
https://github.com/bettergram/bettergram/blob/master/LEGAL
*/

#pragma once

struct CountryInfo {
	CountryInfo(const char *_name, const char *_iso2, const char *_code) : name(_name), iso2(_iso2), code(_code) {
	}
	const char *name, *iso2, *code;
};

static const CountryInfo countries[] = {
	CountryInfo("Afghanistan", "AF", "93"),
	CountryInfo("Albania", "AL", "355"),
	CountryInfo("Algeria", "DZ", "213"),
	CountryInfo("American Samoa", "AS", "1684"),
	CountryInfo("Andorra", "AD", "376"),
	CountryInfo("Angola", "AO", "244"),
	CountryInfo("Anguilla", "AI", "1264"),
	CountryInfo("Antigua & Barbuda", "AG", "1268"),
	CountryInfo("Argentina", "AR", "54"),
	CountryInfo("Armenia", "AM", "374"),
	CountryInfo("Aruba", "AW", "297"),
	CountryInfo("Australia", "AU", "61"),
	CountryInfo("Austria", "AT", "43"),
	CountryInfo("Azerbaijan", "AZ", "994"),
	CountryInfo("Bahamas", "BS", "1242"),
	CountryInfo("Bahrain", "BH", "973"),
	CountryInfo("Bangladesh", "BD", "880"),
	CountryInfo("Barbados", "BB", "1246"),
	CountryInfo("Belarus", "BY", "375"),
	CountryInfo("Belgium", "BE", "32"),
	CountryInfo("Belize", "BZ", "501"),
	CountryInfo("Benin", "BJ", "229"),
	CountryInfo("Bermuda", "BM", "1441"),
	CountryInfo("Bhutan", "BT", "975"),
	CountryInfo("Bolivia", "BO", "591"),
	CountryInfo("Bonaire, Sint Eustatius & Saba", "BQ", "599"),
	CountryInfo("Bosnia & Herzegovina", "BA", "387"),
	CountryInfo("Botswana", "BW", "267"),
	CountryInfo("Brazil", "BR", "55"),
	CountryInfo("British Virgin Islands", "VG", "1284"),
	CountryInfo("Brunei Darussalam", "BN", "673"),
	CountryInfo("Bulgaria", "BG", "359"),
	CountryInfo("Burkina Faso", "BF", "226"),
	CountryInfo("Burundi", "BI", "257"),
	CountryInfo("Cambodia", "KH", "855"),
	CountryInfo("Cameroon", "CM", "237"),
	CountryInfo("Canada", "CA", "1"),
	CountryInfo("Cape Verde", "CV", "238"),
	CountryInfo("Cayman Islands", "KY", "1345"),
	CountryInfo("Central African Republic", "CF", "236"),
	CountryInfo("Chad", "TD", "235"),
	CountryInfo("Chile", "CL", "56"),
	CountryInfo("China", "CN", "86"),
	CountryInfo("Colombia", "CO", "57"),
	CountryInfo("Comoros", "KM", "269"),
	CountryInfo("Congo", "CG", "242"),
	CountryInfo("Congo, Democratic Republic", "CD", "243"),
	CountryInfo("Cook Islands", "CK", "682"),
	CountryInfo("Costa Rica", "CR", "506"),
	CountryInfo("Croatia", "HR", "385"),
	CountryInfo("Cuba", "CU", "53"),
	CountryInfo("Curaçao", "CW", "599"),
	CountryInfo("Cyprus", "CY", "357"),
	CountryInfo("Czech Republic", "CZ", "420"),
	CountryInfo("Côte d`Ivoire", "CI", "225"),
	CountryInfo("Denmark", "DK", "45"),
	CountryInfo("Diego Garcia", "IO", "246"),
	CountryInfo("Djibouti", "DJ", "253"),
	CountryInfo("Dominica", "DM", "1767"),
	CountryInfo("Dominican Republic", "DO", "1"),
	CountryInfo("Ecuador", "EC", "593"),
	CountryInfo("Egypt", "EG", "20"),
	CountryInfo("El Salvador", "SV", "503"),
	CountryInfo("Equatorial Guinea", "GQ", "240"),
	CountryInfo("Eritrea", "ER", "291"),
	CountryInfo("Estonia", "EE", "372"),
	CountryInfo("Ethiopia", "ET", "251"),
	CountryInfo("Falkland Islands", "FK", "500"),
	CountryInfo("Faroe Islands", "FO", "298"),
	CountryInfo("Fiji", "FJ", "679"),
	CountryInfo("Finland", "FI", "358"),
	CountryInfo("France", "FR", "33"),
	CountryInfo("French Guiana", "GF", "594"),
	CountryInfo("French Polynesia", "PF", "689"),
	CountryInfo("Gabon", "GA", "241"),
	CountryInfo("Gambia", "GM", "220"),
	CountryInfo("Georgia", "GE", "995"),
	CountryInfo("Germany", "DE", "49"),
	CountryInfo("Ghana", "GH", "233"),
	CountryInfo("Gibraltar", "GI", "350"),
	CountryInfo("Greece", "GR", "30"),
	CountryInfo("Greenland", "GL", "299"),
	CountryInfo("Grenada", "GD", "1473"),
	CountryInfo("Guadeloupe", "GP", "590"),
	CountryInfo("Guam", "GU", "1671"),
	CountryInfo("Guatemala", "GT", "502"),
	CountryInfo("Guinea", "GN", "224"),
	CountryInfo("Guinea-Bissau", "GW", "245"),
	CountryInfo("Guyana", "GY", "592"),
	CountryInfo("Haiti", "HT", "509"),
	CountryInfo("Honduras", "HN", "504"),
	CountryInfo("Hong Kong", "HK", "852"),
	CountryInfo("Hungary", "HU", "36"),
	CountryInfo("Iceland", "IS", "354"),
	CountryInfo("India", "IN", "91"),
	CountryInfo("Indonesia", "ID", "62"),
	CountryInfo("Iran", "IR", "98"),
	CountryInfo("Iraq", "IQ", "964"),
	CountryInfo("Ireland", "IE", "353"),
	CountryInfo("Israel", "IL", "972"),
	CountryInfo("Italy", "IT", "39"),
	CountryInfo("Jamaica", "JM", "1876"),
	CountryInfo("Japan", "JP", "81"),
	CountryInfo("Jordan", "JO", "962"),
	CountryInfo("Kazakhstan", "KZ", "7"),
	CountryInfo("Kenya", "KE", "254"),
	CountryInfo("Kiribati", "KI", "686"),
	CountryInfo("Kuwait", "KW", "965"),
	CountryInfo("Kyrgyzstan", "KG", "996"),
	CountryInfo("Laos", "LA", "856"),
	CountryInfo("Latvia", "LV", "371"),
	CountryInfo("Lebanon", "LB", "961"),
	CountryInfo("Lesotho", "LS", "266"),
	CountryInfo("Liberia", "LR", "231"),
	CountryInfo("Libya", "LY", "218"),
	CountryInfo("Liechtenstein", "LI", "423"),
	CountryInfo("Lithuania", "LT", "370"),
	CountryInfo("Luxembourg", "LU", "352"),
	CountryInfo("Macau", "MO", "853"),
	CountryInfo("Macedonia", "MK", "389"),
	CountryInfo("Madagascar", "MG", "261"),
	CountryInfo("Malawi", "MW", "265"),
	CountryInfo("Malaysia", "MY", "60"),
	CountryInfo("Maldives", "MV", "960"),
	CountryInfo("Mali", "ML", "223"),
	CountryInfo("Malta", "MT", "356"),
	CountryInfo("Marshall Islands", "MH", "692"),
	CountryInfo("Martinique", "MQ", "596"),
	CountryInfo("Mauritania", "MR", "222"),
	CountryInfo("Mauritius", "MU", "230"),
	CountryInfo("Mexico", "MX", "52"),
	CountryInfo("Micronesia", "FM", "691"),
	CountryInfo("Moldova", "MD", "373"),
	CountryInfo("Monaco", "MC", "377"),
	CountryInfo("Mongolia", "MN", "976"),
	CountryInfo("Montenegro", "ME", "382"),
	CountryInfo("Montserrat", "MS", "1664"),
	CountryInfo("Morocco", "MA", "212"),
	CountryInfo("Mozambique", "MZ", "258"),
	CountryInfo("Myanmar", "MM", "95"),
	CountryInfo("Namibia", "NA", "264"),
	CountryInfo("Nauru", "NR", "674"),
	CountryInfo("Nepal", "NP", "977"),
	CountryInfo("Netherlands", "NL", "31"),
	CountryInfo("New Caledonia", "NC", "687"),
	CountryInfo("New Zealand", "NZ", "64"),
	CountryInfo("Nicaragua", "NI", "505"),
	CountryInfo("Niger", "NE", "227"),
	CountryInfo("Nigeria", "NG", "234"),
	CountryInfo("Niue", "NU", "683"),
	CountryInfo("Norfolk Island", "NF", "672"),
	CountryInfo("North Korea", "KP", "850"),
	CountryInfo("Northern Mariana Islands", "MP", "1670"),
	CountryInfo("Norway", "NO", "47"),
	CountryInfo("Oman", "OM", "968"),
	CountryInfo("Pakistan", "PK", "92"),
	CountryInfo("Palau", "PW", "680"),
	CountryInfo("Palestine", "PS", "970"),
	CountryInfo("Panama", "PA", "507"),
	CountryInfo("Papua New Guinea", "PG", "675"),
	CountryInfo("Paraguay", "PY", "595"),
	CountryInfo("Peru", "PE", "51"),
	CountryInfo("Philippines", "PH", "63"),
	CountryInfo("Poland", "PL", "48"),
	CountryInfo("Portugal", "PT", "351"),
	CountryInfo("Puerto Rico", "PR", "1"),
	CountryInfo("Qatar", "QA", "974"),
	CountryInfo("Romania", "RO", "40"),
	CountryInfo("Russian Federation", "RU", "7"),
	CountryInfo("Rwanda", "RW", "250"),
	CountryInfo("Réunion", "RE", "262"),
	CountryInfo("Saint Helena", "SH", "247"),
	CountryInfo("Saint Helena", "SH2", "290"),
	CountryInfo("Saint Kitts & Nevis", "KN", "1869"),
	CountryInfo("Saint Lucia", "LC", "1758"),
	CountryInfo("Saint Pierre & Miquelon", "PM", "508"),
	CountryInfo("Saint Vincent & the Grenadines", "VC", "1784"),
	CountryInfo("Samoa", "WS", "685"),
	CountryInfo("San Marino", "SM", "378"),
	CountryInfo("Saudi Arabia", "SA", "966"),
	CountryInfo("Senegal", "SN", "221"),
	CountryInfo("Serbia", "RS", "381"),
	CountryInfo("Seychelles", "SC", "248"),
	CountryInfo("Sierra Leone", "SL", "232"),
	CountryInfo("Singapore", "SG", "65"),
	CountryInfo("Sint Maarten", "SX", "1721"),
	CountryInfo("Slovakia", "SK", "421"),
	CountryInfo("Slovenia", "SI", "386"),
	CountryInfo("Solomon Islands", "SB", "677"),
	CountryInfo("Somalia", "SO", "252"),
	CountryInfo("South Africa", "ZA", "27"),
	CountryInfo("South Korea", "KR", "82"),
	CountryInfo("South Sudan", "SS", "211"),
	CountryInfo("Spain", "ES", "34"),
	CountryInfo("Sri Lanka", "LK", "94"),
	CountryInfo("Sudan", "SD", "249"),
	CountryInfo("Suriname", "SR", "597"),
	CountryInfo("Swaziland", "SZ", "268"),
	CountryInfo("Sweden", "SE", "46"),
	CountryInfo("Switzerland", "CH", "41"),
	CountryInfo("Syrian Arab Republic", "SY", "963"),
	CountryInfo("São Tomé & Príncipe", "ST", "239"),
	CountryInfo("Taiwan", "TW", "886"),
	CountryInfo("Tajikistan", "TJ", "992"),
	CountryInfo("Tanzania", "TZ", "255"),
	CountryInfo("Thailand", "TH", "66"),
	CountryInfo("Timor-Leste", "TL", "670"),
	CountryInfo("Togo", "TG", "228"),
	CountryInfo("Tokelau", "TK", "690"),
	CountryInfo("Tonga", "TO", "676"),
	CountryInfo("Trinidad & Tobago", "TT", "1868"),
	CountryInfo("Tunisia", "TN", "216"),
	CountryInfo("Turkey", "TR", "90"),
	CountryInfo("Turkmenistan", "TM", "993"),
	CountryInfo("Turks & Caicos Islands", "TC", "1649"),
	CountryInfo("Tuvalu", "TV", "688"),
	CountryInfo("US Virgin Islands", "VI", "1340"),
	CountryInfo("USA", "US", "1"),
	CountryInfo("Uganda", "UG", "256"),
	CountryInfo("Ukraine", "UA", "380"),
	CountryInfo("United Arab Emirates", "AE", "971"),
	CountryInfo("United Kingdom", "GB", "44"),
	CountryInfo("Uruguay", "UY", "598"),
	CountryInfo("Uzbekistan", "UZ", "998"),
	CountryInfo("Vanuatu", "VU", "678"),
	CountryInfo("Venezuela", "VE", "58"),
	CountryInfo("Vietnam", "VN", "84"),
	CountryInfo("Wallis & Futuna", "WF", "681"),
	CountryInfo("Yemen", "YE", "967"),
	CountryInfo("Zambia", "ZM", "260"),
	CountryInfo("Zimbabwe", "ZW", "263"),
};

typedef QHash<QString, const CountryInfo *> CountriesByCode;
typedef QHash<QString, const CountryInfo *> CountriesByISO2;

const CountriesByCode &countriesByCode();
const CountriesByISO2 &countriesByISO2();
