/*
 *   Copyright (C) 2008-2009 Petri Damstén <damu@iki.fi>
 *   Copyright (C) 2008 Kristof Bal <kristof.bal@gmail.com>
 *   Copyright (C) 2014 John Layt <jlayt@kde.org>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License as
 *   published by the Free Software Foundation; either version 2, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details
 *
 *   You should have received a copy of the GNU Library General Public
 *   License along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "mass_p.h"
#include "unit_p.h"

#include <KI18n/klocalizedstring.h>

namespace KUnitConversion
{

Mass::Mass() : CustomCategory(MassCategory, i18n("Mass"), i18n("Mass"))
{
    KLocalizedString symbolString = ki18nc("%1 value, %2 unit symbol (mass)", "%1 %2");

    addUnit(CustomUnit(MassCategory, Yottagram, 1e+24,
                       i18nc("mass unit symbol", "Yg"),
                       i18nc("unit description in lists", "yottagrams"),
                       i18nc("unit synonyms for matching user input", "yottagram;yottagrams;Yg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 yottagrams"),
                       ki18ncp("amount in units (integer)", "%1 yottagram", "%1 yottagrams")));

    addUnit(CustomUnit(MassCategory, Zettagram, 1e+21,
                       i18nc("mass unit symbol", "Zg"),
                       i18nc("unit description in lists", "zettagrams"),
                       i18nc("unit synonyms for matching user input", "zettagram;zettagrams;Zg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 zettagrams"),
                       ki18ncp("amount in units (integer)", "%1 zettagram", "%1 zettagrams")));

    addUnit(CustomUnit(MassCategory, Exagram, 1e+18,
                       i18nc("mass unit symbol", "Eg"),
                       i18nc("unit description in lists", "exagrams"),
                       i18nc("unit synonyms for matching user input", "exagram;exagrams;Eg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 exagrams"),
                       ki18ncp("amount in units (integer)", "%1 exagram", "%1 exagrams")));

    addUnit(CustomUnit(MassCategory, Petagram, 1e+15,
                       i18nc("mass unit symbol", "Pg"),
                       i18nc("unit description in lists", "petagrams"),
                       i18nc("unit synonyms for matching user input", "petagram;petagrams;Pg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 petagrams"),
                       ki18ncp("amount in units (integer)", "%1 petagram", "%1 petagrams")));

    addUnit(CustomUnit(MassCategory, Teragram, 1e+12,
                       i18nc("mass unit symbol", "Tg"),
                       i18nc("unit description in lists", "teragrams"),
                       i18nc("unit synonyms for matching user input", "teragram;teragrams;Tg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 teragrams"),
                       ki18ncp("amount in units (integer)", "%1 teragram", "%1 teragrams")));

    addUnit(CustomUnit(MassCategory, Gigagram, 1e+09,
                       i18nc("mass unit symbol", "Gg"),
                       i18nc("unit description in lists", "gigagrams"),
                       i18nc("unit synonyms for matching user input", "gigagram;gigagrams;Gg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 gigagrams"),
                       ki18ncp("amount in units (integer)", "%1 gigagram", "%1 gigagrams")));

    addUnit(CustomUnit(MassCategory, Megagram, 1e+06,
                       i18nc("mass unit symbol", "Mg"),
                       i18nc("unit description in lists", "megagrams"),
                       i18nc("unit synonyms for matching user input", "megagram;megagrams;Mg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 megagrams"),
                       ki18ncp("amount in units (integer)", "%1 megagram", "%1 megagrams")));

    addDefaultUnit(CustomUnit(MassCategory, Kilogram, 1000,
                              i18nc("mass unit symbol", "kg"),
                              i18nc("unit description in lists", "kilograms"),
                              i18nc("unit synonyms for matching user input", "kilogram;kilograms;kg"),
                              symbolString,
                              ki18nc("amount in units (real)", "%1 kilograms"),
                              ki18ncp("amount in units (integer)", "%1 kilogram", "%1 kilograms")));

    addUnit(CustomUnit(MassCategory, Hectogram, 100,
                       i18nc("mass unit symbol", "hg"),
                       i18nc("unit description in lists", "hectograms"),
                       i18nc("unit synonyms for matching user input", "hectogram;hectograms;hg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 hectograms"),
                       ki18ncp("amount in units (integer)", "%1 hectogram", "%1 hectograms")));

    addUnit(CustomUnit(MassCategory, Decagram, 10,
                       i18nc("mass unit symbol", "dag"),
                       i18nc("unit description in lists", "decagrams"),
                       i18nc("unit synonyms for matching user input", "decagram;decagrams;dag"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 decagrams"),
                       ki18ncp("amount in units (integer)", "%1 decagram", "%1 decagrams")));

    addCommonUnit(CustomUnit(MassCategory, Gram, 1,
                       i18nc("mass unit symbol", "g"),
                       i18nc("unit description in lists", "grams"),
                       i18nc("unit synonyms for matching user input", "gram;grams;g"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 grams"),
                       ki18ncp("amount in units (integer)", "%1 gram", "%1 grams")));

    addUnit(CustomUnit(MassCategory, Decigram, 0.1,
                       i18nc("mass unit symbol", "dg"),
                       i18nc("unit description in lists", "decigrams"),
                       i18nc("unit synonyms for matching user input", "decigram;decigrams;dg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 decigrams"),
                       ki18ncp("amount in units (integer)", "%1 decigram", "%1 decigrams")));

    addUnit(CustomUnit(MassCategory, Centigram, 0.01,
                       i18nc("mass unit symbol", "cg"),
                       i18nc("unit description in lists", "centigrams"),
                       i18nc("unit synonyms for matching user input", "centigram;centigrams;cg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 centigrams"),
                       ki18ncp("amount in units (integer)", "%1 centigram", "%1 centigrams")));

    addCommonUnit(CustomUnit(MassCategory, Milligram, 0.001,
                             i18nc("mass unit symbol", "mg"),
                             i18nc("unit description in lists", "milligrams"),
                             i18nc("unit synonyms for matching user input", "milligram;milligrams;mg"),
                             symbolString,
                             ki18nc("amount in units (real)", "%1 milligrams"),
                             ki18ncp("amount in units (integer)", "%1 milligram", "%1 milligrams")));

    addUnit(CustomUnit(MassCategory, Microgram, 1e-06,
                       i18nc("mass unit symbol", "µg"),
                       i18nc("unit description in lists", "micrograms"),
                       i18nc("unit synonyms for matching user input", "microgram;micrograms;µg;ug"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 micrograms"),
                       ki18ncp("amount in units (integer)", "%1 microgram", "%1 micrograms")));

    addUnit(CustomUnit(MassCategory, Nanogram, 1e-09,
                       i18nc("mass unit symbol", "ng"),
                       i18nc("unit description in lists", "nanograms"),
                       i18nc("unit synonyms for matching user input", "nanogram;nanograms;ng"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 nanograms"),
                       ki18ncp("amount in units (integer)", "%1 nanogram", "%1 nanograms")));

    addUnit(CustomUnit(MassCategory, Picogram, 1e-12,
                       i18nc("mass unit symbol", "pg"),
                       i18nc("unit description in lists", "picograms"),
                       i18nc("unit synonyms for matching user input", "picogram;picograms;pg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 picograms"),
                       ki18ncp("amount in units (integer)", "%1 picogram", "%1 picograms")));

    addUnit(CustomUnit(MassCategory, Femtogram, 1e-15,
                       i18nc("mass unit symbol", "fg"),
                       i18nc("unit description in lists", "femtograms"),
                       i18nc("unit synonyms for matching user input", "femtogram;femtograms;fg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 femtograms"),
                       ki18ncp("amount in units (integer)", "%1 femtogram", "%1 femtograms")));

    addUnit(CustomUnit(MassCategory, Attogram, 1e-18,
                       i18nc("mass unit symbol", "ag"),
                       i18nc("unit description in lists", "attograms"),
                       i18nc("unit synonyms for matching user input", "attogram;attograms;ag"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 attograms"),
                       ki18ncp("amount in units (integer)", "%1 attogram", "%1 attograms")));

    addUnit(CustomUnit(MassCategory, Zeptogram, 1e-21,
                       i18nc("mass unit symbol", "zg"),
                       i18nc("unit description in lists", "zeptograms"),
                       i18nc("unit synonyms for matching user input", "zeptogram;zeptograms;zg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 zeptograms"),
                       ki18ncp("amount in units (integer)", "%1 zeptogram", "%1 zeptograms")));

    addUnit(CustomUnit(MassCategory, Yoctogram, 1e-24,
                       i18nc("mass unit symbol", "yg"),
                       i18nc("unit description in lists", "yoctograms"),
                       i18nc("unit synonyms for matching user input", "yoctogram;yoctograms;yg"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 yoctograms"),
                       ki18ncp("amount in units (integer)", "%1 yoctogram", "%1 yoctograms")));

    addCommonUnit(CustomUnit(MassCategory, Ton, 1e+06,
                             i18nc("mass unit symbol", "t"),
                             i18nc("unit description in lists", "tons"),
                             i18nc("unit synonyms for matching user input", "ton;tons;t;tonne"), // TODO Fix! Tonne == Metric Ton == Mg
                             symbolString,
                             ki18nc("amount in units (real)", "%1 tons"),
                             ki18ncp("amount in units (integer)", "%1 ton", "%1 tons")));

    //I guess it's useful...
    addUnit(CustomUnit(MassCategory, Carat, 0.2,
                       i18nc("mass unit symbol", "CD"),
                       i18nc("unit description in lists", "carats"),
                       i18nc("unit synonyms for matching user input", "carat;carats;CD"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 carats"),
                       ki18ncp("amount in units (integer)", "%1 carat", "%1 carats")));

    //http://en.wikipedia.org/wiki/Pound_(mass)#International_pound
    addCommonUnit(CustomUnit(MassCategory, Pound, 453.592,
                             i18nc("mass unit symbol", "lb"),
                             i18nc("unit description in lists", "pounds"),
                             i18nc("unit synonyms for matching user input", "pound;pounds;lb"),
                             symbolString,
                             ki18nc("amount in units (real)", "%1 pounds"),
                             ki18ncp("amount in units (integer)", "%1 pound", "%1 pounds")));

    //International avoirdupois ounce
    addCommonUnit(CustomUnit(MassCategory, Ounce, 28.3495,
                             i18nc("mass unit symbol", "oz"),
                             i18nc("unit description in lists", "ounces"),
                             i18nc("unit synonyms for matching user input", "ounce;ounces;oz"),
                             symbolString,
                             ki18nc("amount in units (real)", "%1 ounces"),
                             ki18ncp("amount in units (integer)", "%1 ounce", "%1 ounces")));

    addUnit(CustomUnit(MassCategory, TroyOunce, 31.1035,
                       i18nc("mass unit symbol", "t oz"),
                       i18nc("unit description in lists", "troy ounces"),
                       i18nc("unit synonyms for matching user input", "troy ounce;troy ounces;t oz"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 troy ounces"),
                       ki18ncp("amount in units (integer)", "%1 troy ounce", "%1 troy ounces")));

    addUnit(CustomUnit(MassCategory, MassNewton, 101.937,
                       i18nc("mass unit symbol", "N"),
                       i18nc("unit description in lists", "newtons"),
                       i18nc("unit synonyms for matching user input", "newton;newtons;N"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 newtons"),
                       ki18ncp("amount in units (integer)", "%1 newton", "%1 newtons")));

    //used a lot in industry (aircraft engines for example)
    addUnit(CustomUnit(MassCategory, Kilonewton, 101937,
                       i18nc("mass unit symbol", "kN"),
                       i18nc("unit description in lists", "kilonewton"),
                       i18nc("unit synonyms for matching user input", "kilonewton;kilonewton;kN"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 kilonewton"),
                       ki18ncp("amount in units (integer)", "%1 kilonewton", "%1 kilonewton")));

    addUnit(CustomUnit(MassCategory, Stone, 6350.29318,
                       i18nc("mass unit symbol", "st"),
                       i18nc("unit description in lists", "stone"),
                       i18nc("unit synonyms for matching user input", "stone;st"),
                       symbolString,
                       ki18nc("amount in units (real)", "%1 stone"),
                       ki18ncp("amount in units (integer)", "%1 stone", "%1 stone")));
}

} // KUnitConversion namespace
