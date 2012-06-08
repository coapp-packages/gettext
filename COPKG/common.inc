
#define { upstream-version: 0.18.1.1; }

#define { author-version: "${upstream-version}"; }

license[lgpl] {
    license: "..\gettext-runtime\libintl\COPYING.LIB-2.1";
    license-url: "http://www.gnu.org/licenses/lgpl-2.1.html";
    license-type: "LGPL 2.1";
}

license[gpl] {
    license: "..\COPYING";
    license-url: "http://www.gnu.org/copyleft/gpl.html";
    license-type: "GPL 3";
}

#define { general-description: "GNU gettext is a set of tools to help create software that outputs messages in multiple languages."; }

metadata {
    author-version : "${author-version}";
    bug-tracker: "https://github.com/coapp-packages/gettext/issues";
    stability : "0";
}

#define { outercurve-publickeytoken: "1e373a58e25250cb"; }

#define { deps-publickeytoken: "${outercurve-publickeytoken}"; }

#define { libiconv-version: 1.14.0; }

#define { libiconv-publickeytoken: "${deps-publickeytoken}"; }
