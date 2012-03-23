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

/* To use self-built dependencies, use ${Package.PublicKeyToken} instead of ${outercurve-publickeytoken} */
#define { outercurve-publickeytoken: "1e373a58e25250cb"; }

#define { libiconv-version: 1.13.1.5; }

#define { libiconv-publickeytoken: "${outercurve-publickeytoken}"; }