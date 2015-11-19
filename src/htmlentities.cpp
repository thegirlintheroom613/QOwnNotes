#include "htmlentities.h"


/**
 * @brief Sets up the entitry map
 */
void HTMLEntities::setupEntityMap()
{
    entityMap.insert( "AElig;", "Æ" );
    entityMap.insert( "Aacute;", "Á" );
    entityMap.insert( "Acirc;", "Â" );
    entityMap.insert( "Agrave;", "À" );
    entityMap.insert( "Alpha;", "Α" );
    entityMap.insert( "Aring;", "Å" );
    entityMap.insert( "Atilde;", "Ã" );
    entityMap.insert( "Auml;", "Ä" );
    entityMap.insert( "Beta;", "Β" );
    entityMap.insert( "Ccedil;", "Ç" );
    entityMap.insert( "Chi;", "Χ" );
    entityMap.insert( "Dagger;", "‡" );
    entityMap.insert( "Delta;", "Δ" );
    entityMap.insert( "ETH;", "Ð" );
    entityMap.insert( "Eacute;", "É" );
    entityMap.insert( "Ecirc;", "Ê" );
    entityMap.insert( "Egrave;", "È" );
    entityMap.insert( "Epsilon;", "Ε" );
    entityMap.insert( "Eta;", "Η" );
    entityMap.insert( "Euml;", "Ë" );
    entityMap.insert( "Gamma;", "Γ" );
    entityMap.insert( "Iacute;", "Í" );
    entityMap.insert( "Icirc;", "Î" );
    entityMap.insert( "Igrave;", "Ì" );
    entityMap.insert( "Iota;", "Ι" );
    entityMap.insert( "Iuml;", "Ï" );
    entityMap.insert( "Kappa;", "Κ" );
    entityMap.insert( "Lambda;", "Λ" );
    entityMap.insert( "Mu;", "Μ" );
    entityMap.insert( "Ntilde;", "Ñ" );
    entityMap.insert( "Nu;", "Ν" );
    entityMap.insert( "OElig;", "Œ" );
    entityMap.insert( "Oacute;", "Ó" );
    entityMap.insert( "Ocirc;", "Ô" );
    entityMap.insert( "Ograve;", "Ò" );
    entityMap.insert( "Omega;", "Ω" );
    entityMap.insert( "Omicron;", "Ο" );
    entityMap.insert( "Oslash;", "Ø" );
    entityMap.insert( "Otilde;", "Õ" );
    entityMap.insert( "Ouml;", "Ö" );
    entityMap.insert( "Phi;", "Φ" );
    entityMap.insert( "Pi;", "Π" );
    entityMap.insert( "Prime;", "″" );
    entityMap.insert( "Psi;", "Ψ" );
    entityMap.insert( "Rho;", "Ρ" );
    entityMap.insert( "Scaron;", "Š" );
    entityMap.insert( "Sigma;", "Σ" );
    entityMap.insert( "THORN;", "Þ" );
    entityMap.insert( "Tau;", "Τ" );
    entityMap.insert( "Theta;", "Θ" );
    entityMap.insert( "Uacute;", "Ú" );
    entityMap.insert( "Ucirc;", "Û" );
    entityMap.insert( "Ugrave;", "Ù" );
    entityMap.insert( "Upsilon;", "Υ" );
    entityMap.insert( "Uuml;", "Ü" );
    entityMap.insert( "Xi;", "Ξ" );
    entityMap.insert( "Yacute;", "Ý" );
    entityMap.insert( "Yuml;", "Ÿ" );
    entityMap.insert( "Zeta;", "Ζ" );
    entityMap.insert( "aacute;", "á" );
    entityMap.insert( "acirc;", "â" );
    entityMap.insert( "acute;", "´" );
    entityMap.insert( "aelig;", "æ" );
    entityMap.insert( "agrave;", "à" );
    entityMap.insert( "alefsym;", "ℵ" );
    entityMap.insert( "alpha;", "α" );
    entityMap.insert( "amp;", "&" );
    entityMap.insert( "and;", "∧" );
    entityMap.insert( "ang;", "∠" );
    entityMap.insert( "apos;", "'" );
    entityMap.insert( "aring;", "å" );
    entityMap.insert( "asymp;", "≈" );
    entityMap.insert( "atilde;", "ã" );
    entityMap.insert( "auml;", "ä" );
    entityMap.insert( "bdquo;", "„" );
    entityMap.insert( "beta;", "β" );
    entityMap.insert( "brvbar;", "¦" );
    entityMap.insert( "bull;", "•" );
    entityMap.insert( "cap;", "∩" );
    entityMap.insert( "ccedil;", "ç" );
    entityMap.insert( "cedil;", "¸" );
    entityMap.insert( "cent;", "¢" );
    entityMap.insert( "chi;", "χ" );
    entityMap.insert( "circ;", "ˆ" );
    entityMap.insert( "clubs;", "♣" );
    entityMap.insert( "cong;", "≅" );
    entityMap.insert( "copy;", "©" );
    entityMap.insert( "crarr;", "↵" );
    entityMap.insert( "cup;", "∪" );
    entityMap.insert( "curren;", "¤" );
    entityMap.insert( "dArr;", "⇓" );
    entityMap.insert( "dagger;", "†" );
    entityMap.insert( "darr;", "↓" );
    entityMap.insert( "deg;", "°" );
    entityMap.insert( "delta;", "δ" );
    entityMap.insert( "diams;", "♦" );
    entityMap.insert( "divide;", "÷" );
    entityMap.insert( "eacute;", "é" );
    entityMap.insert( "ecirc;", "ê" );
    entityMap.insert( "egrave;", "è" );
    entityMap.insert( "empty;", "∅" );
    entityMap.insert( "emsp;", " " );
    entityMap.insert( "ensp;", " " );
    entityMap.insert( "epsilon;", "ε" );
    entityMap.insert( "equiv;", "≡" );
    entityMap.insert( "eta;", "η" );
    entityMap.insert( "eth;", "ð" );
    entityMap.insert( "euml;", "ë" );
    entityMap.insert( "euro;", "€" );
    entityMap.insert( "exist;", "∃" );
    entityMap.insert( "fnof;", "ƒ" );
    entityMap.insert( "forall;", "∀" );
    entityMap.insert( "frac12;", "½" );
    entityMap.insert( "frac14;", "¼" );
    entityMap.insert( "frac34;", "¾" );
    entityMap.insert( "frasl;", "⁄" );
    entityMap.insert( "gamma;", "γ" );
    entityMap.insert( "ge;", "≥" );
    entityMap.insert( "gt;", ">" );
    entityMap.insert( "hArr;", "⇔" );
    entityMap.insert( "harr;", "↔" );
    entityMap.insert( "hearts;", "♥" );
    entityMap.insert( "hellip;", "…" );
    entityMap.insert( "iacute;", "í" );
    entityMap.insert( "icirc;", "î" );
    entityMap.insert( "iexcl;", "¡" );
    entityMap.insert( "igrave;", "ì" );
    entityMap.insert( "image;", "ℑ" );
    entityMap.insert( "infin;", "∞" );
    entityMap.insert( "int;", "∫" );
    entityMap.insert( "iota;", "ι" );
    entityMap.insert( "iquest;", "¿" );
    entityMap.insert( "isin;", "∈" );
    entityMap.insert( "iuml;", "ï" );
    entityMap.insert( "kappa;", "κ" );
    entityMap.insert( "lArr;", "⇐" );
    entityMap.insert( "lambda;", "λ" );
    entityMap.insert( "lang;", "〈" );
    entityMap.insert( "laquo;", "«" );
    entityMap.insert( "larr;", "←" );
    entityMap.insert( "lceil;", "⌈" );
    entityMap.insert( "ldquo;", "“" );
    entityMap.insert( "le;", "≤" );
    entityMap.insert( "lfloor;", "⌊" );
    entityMap.insert( "lowast;", "∗" );
    entityMap.insert( "loz;", "◊" );
    entityMap.insert( "lrm;", "\xE2\x80\x8E" );
    entityMap.insert( "lsaquo;", "‹" );
    entityMap.insert( "lsquo;", "‘" );
    entityMap.insert( "lt;", "<" );
    entityMap.insert( "macr;", "¯" );
    entityMap.insert( "mdash;", "—" );
    entityMap.insert( "micro;", "µ" );
    entityMap.insert( "middot;", "·" );
    entityMap.insert( "minus;", "−" );
    entityMap.insert( "mu;", "μ" );
    entityMap.insert( "nabla;", "∇" );
    entityMap.insert( "nbsp;", " " );
    entityMap.insert( "ndash;", "–" );
    entityMap.insert( "ne;", "≠" );
    entityMap.insert( "ni;", "∋" );
    entityMap.insert( "not;", "¬" );
    entityMap.insert( "notin;", "∉" );
    entityMap.insert( "nsub;", "⊄" );
    entityMap.insert( "ntilde;", "ñ" );
    entityMap.insert( "nu;", "ν" );
    entityMap.insert( "oacute;", "ó" );
    entityMap.insert( "ocirc;", "ô" );
    entityMap.insert( "oelig;", "œ" );
    entityMap.insert( "ograve;", "ò" );
    entityMap.insert( "oline;", "‾" );
    entityMap.insert( "omega;", "ω" );
    entityMap.insert( "omicron;", "ο" );
    entityMap.insert( "oplus;", "⊕" );
    entityMap.insert( "or;", "∨" );
    entityMap.insert( "ordf;", "ª" );
    entityMap.insert( "ordm;", "º" );
    entityMap.insert( "oslash;", "ø" );
    entityMap.insert( "otilde;", "õ" );
    entityMap.insert( "otimes;", "⊗" );
    entityMap.insert( "ouml;", "ö" );
    entityMap.insert( "para;", "¶" );
    entityMap.insert( "part;", "∂" );
    entityMap.insert( "permil;", "‰" );
    entityMap.insert( "perp;", "⊥" );
    entityMap.insert( "phi;", "φ" );
    entityMap.insert( "pi;", "π" );
    entityMap.insert( "piv;", "ϖ" );
    entityMap.insert( "plusmn;", "±" );
    entityMap.insert( "pound;", "£" );
    entityMap.insert( "prime;", "′" );
    entityMap.insert( "prod;", "∏" );
    entityMap.insert( "prop;", "∝" );
    entityMap.insert( "psi;", "ψ" );
    entityMap.insert( "quot;", "\"" );
    entityMap.insert( "rArr;", "⇒" );
    entityMap.insert( "radic;", "√" );
    entityMap.insert( "rang;", "〉" );
    entityMap.insert( "raquo;", "»" );
    entityMap.insert( "rarr;", "→" );
    entityMap.insert( "rceil;", "⌉" );
    entityMap.insert( "rdquo;", "”" );
    entityMap.insert( "real;", "ℜ" );
    entityMap.insert( "reg;", "®" );
    entityMap.insert( "rfloor;", "⌋" );
    entityMap.insert( "rho;", "ρ" );
    entityMap.insert( "rlm;", "\xE2\x80\x8F" );
    entityMap.insert( "rsaquo;", "›" );
    entityMap.insert( "rsquo;", "’" );
    entityMap.insert( "sbquo;", "‚" );
    entityMap.insert( "scaron;", "š" );
    entityMap.insert( "sdot;", "⋅" );
    entityMap.insert( "sect;", "§" );
    entityMap.insert( "shy;", "\xC2\xAD" );
    entityMap.insert( "sigma;", "σ" );
    entityMap.insert( "sigmaf;", "ς" );
    entityMap.insert( "sim;", "∼" );
    entityMap.insert( "spades;", "♠" );
    entityMap.insert( "sub;", "⊂" );
    entityMap.insert( "sube;", "⊆" );
    entityMap.insert( "sum;", "∑" );
    entityMap.insert( "sup1;", "¹" );
    entityMap.insert( "sup2;", "²" );
    entityMap.insert( "sup3;", "³" );
    entityMap.insert( "sup;", "⊃" );
    entityMap.insert( "supe;", "⊇" );
    entityMap.insert( "szlig;", "ß" );
    entityMap.insert( "tau;", "τ" );
    entityMap.insert( "there4;", "∴" );
    entityMap.insert( "theta;", "θ" );
    entityMap.insert( "thetasym;", "ϑ" );
    entityMap.insert( "thinsp;", " " );
    entityMap.insert( "thorn;", "þ" );
    entityMap.insert( "tilde;", "˜" );
    entityMap.insert( "times;", "×" );
    entityMap.insert( "trade;", "™" );
    entityMap.insert( "uArr;", "⇑" );
    entityMap.insert( "uacute;", "ú" );
    entityMap.insert( "uarr;", "↑" );
    entityMap.insert( "ucirc;", "û" );
    entityMap.insert( "ugrave;", "ù" );
    entityMap.insert( "uml;", "¨" );
    entityMap.insert( "upsih;", "ϒ" );
    entityMap.insert( "upsilon;", "υ" );
    entityMap.insert( "uuml;", "ü" );
    entityMap.insert( "weierp;", "℘" );
    entityMap.insert( "xi;", "ξ" );
    entityMap.insert( "yacute;", "ý" );
    entityMap.insert( "yen;", "¥" );
    entityMap.insert( "yuml;", "ÿ" );
    entityMap.insert( "zeta;", "ζ" );
    entityMap.insert( "zwj;", "\xE2\x80\x8D" );
    entityMap.insert( "zwnj;", "\xE2\x80\x8C" );
}

HTMLEntities::HTMLEntities()
{
    setupEntityMap();
}

/**
 * @brief Decodes HTML entities to their normal characters
 * @param text
 * @return
 */
QString HTMLEntities::decodeHtmlEntities( QString text )
{
    QMapIterator<QString, QString> i( entityMap );

    while (i.hasNext()) {
        i.next();
        text = text.replace( "&" + i.key(), i.value() );
    }

    return text;
}

