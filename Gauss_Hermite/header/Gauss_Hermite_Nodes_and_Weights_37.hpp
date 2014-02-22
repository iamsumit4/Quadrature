//
//        Gauss_Hermite_Nodes_and_Weights_37.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 37.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_37_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_37_hpp__

void Gauss_Hermite_Nodes_and_Weights_37(long double*& nodes, long double*& weights) {
	nodes	= new long double[37];
	weights	= new long double[37];

	nodes[0] 	= 0;
	weights[0] 	= 0.36274375769908362382387710995664757640509992011645220774231981184293841694383515368642806796617168138638408036811355969413299539;

	nodes[1] 	= -0.36284990505065798026140358797749504285526267531166623164073477852500397250711992985204886864287418264277692926086275517031873898;
	weights[1] 	= 0.318274679754431527852698914337749149059925150423964727607985687935510401244850011937654153972265642964051974690552833635630378;

	nodes[2] 	= 0.36284990505065798026140358797749504285526267531166623164073477852500397250711992985204886864287418264277692926086275517031873898;
	weights[2] 	= 0.318274679754431527852698914337749149059925150423964727607985687935510401244850011937654153972265642964051974690552833635630378;

	nodes[3] 	= -0.72633961660512018832438838832680659729852025401717516544489731003103169873552781578522857966243218881110459872392795871028576806;
	weights[3] 	= 0.21478887596478399990426574210111922779544816999716259820296071540227373431110803861354897195043720272610096696870242077434335;

	nodes[4] 	= 0.72633961660512018832438838832680659729852025401717516544489731003103169873552781578522857966243218881110459872392795871028576806;
	weights[4] 	= 0.21478887596478399990426574210111922779544816999716259820296071540227373431110803861354897195043720272610096696870242077434335;

	nodes[5] 	= -1.0911237649759331093469349468388840761223839897680545855477110894473974535267618219280117667450137296088662056094614101718946362;
	weights[5] 	= 0.1111791651071952282774090082185741709986167798995955610513306018937336523900767550035896490977465337578970875763258422347364;

	nodes[6] 	= 1.0911237649759331093469349468388840761223839897680545855477110894473974535267618219280117667450137296088662056094614101718946362;
	weights[6] 	= 0.1111791651071952282774090082185741709986167798995955610513306018937336523900767550035896490977465337578970875763258422347364;

	nodes[7] 	= -1.4578876468742090388067709551787121853293885090683850333095390101628209665844691093396218524851052794655264242641760471420591138;
	weights[7] 	= 0.043931362299539294711909239975310961744686157237583083146342767250322702791739386836507889216360913916396396694138332456957;

	nodes[8] 	= 1.4578876468742090388067709551787121853293885090683850333095390101628209665844691093396218524851052794655264242641760471420591138;
	weights[8] 	= 0.043931362299539294711909239975310961744686157237583083146342767250322702791739386836507889216360913916396396694138332456957;

	nodes[9] 	= -1.8273652487636046858607608143142594567027310967122227524091236641530263825458984980832491401855750290296534863849051874080775202;
	weights[9] 	= 0.013160179977211553985416193728019213280537014919708618896836713460602925186080275218963008104096401681591589797878801140023;

	nodes[10] 	= 1.8273652487636046858607608143142594567027310967122227524091236641530263825458984980832491401855750290296534863849051874080775202;
	weights[10] 	= 0.013160179977211553985416193728019213280537014919708618896836713460602925186080275218963008104096401681591589797878801140023;

	nodes[11] 	= -2.2003609340092521503733249978703824191861007586411150684833666371927564687973239380246309075502855619517959297344970184894830717;
	weights[11] 	= 0.002960800184602906154824626621253413683827273337656590531722103405570756624624448984093067046328342638403328667375345018753;

	nodes[12] 	= 2.2003609340092521503733249978703824191861007586411150684833666371927564687973239380246309075502855619517959297344970184894830717;
	weights[12] 	= 0.002960800184602906154824626621253413683827273337656590531722103405570756624624448984093067046328342638403328667375345018753;

	nodes[13] 	= -2.5777768581132719607100416433073446721947093619385008704569520077617759380519087485114885982997026852029605952295453996911196547;
	weights[13] 	= 0.000494171501214694281258370390160484548327254472563229900934867962256009256755042892689669718750630646348943272611408800535;

	nodes[14] 	= 2.5777768581132719607100416433073446721947093619385008704569520077617759380519087485114885982997026852029605952295453996911196547;
	weights[14] 	= 0.000494171501214694281258370390160484548327254472563229900934867962256009256755042892689669718750630646348943272611408800535;

	nodes[15] 	= -2.9606491813032890392416194788948169128243165999039996491295826444858603682657809409602075208131348442859430648764606510612417588;
	weights[15] 	= 0.000060226951652674159757493261718027820113465547640050536315506919603858432433327710382288268521632258591785391683791336708;

	nodes[16] 	= 2.9606491813032890392416194788948169128243165999039996491295826444858603682657809409602075208131348442859430648764606510612417588;
	weights[16] 	= 0.000060226951652674159757493261718027820113465547640050536315506919603858432433327710382288268521632258591785391683791336708;

	nodes[17] 	= -3.350197894972535652812697802670368158223911021750816548834287513123775011974015480270267532362110034691506565487646663601402338;
	weights[17] 	= 5.2521435771200536737384788653715740586595657427319670396007070802082568140174590858155625082372293496225295693040678851e-6;

	nodes[18] 	= 3.350197894972535652812697802670368158223911021750816548834287513123775011974015480270267532362110034691506565487646663601402338;
	weights[18] 	= 5.2521435771200536737384788653715740586595657427319670396007070802082568140174590858155625082372293496225295693040678851e-6;

	nodes[19] 	= -3.7478982064754799092992048891934609988995464994004149184199664630511265780240976946291989392422282233683967375732436730957900258;
	weights[19] 	= 3.192885481003230377415024484294857150739860783024865472347023066342157359734117325206423384697429943984536915016112085e-7;

	nodes[20] 	= 3.7478982064754799092992048891934609988995464994004149184199664630511265780240976946291989392422282233683967375732436730957900258;
	weights[20] 	= 3.192885481003230377415024484294857150739860783024865472347023066342157359734117325206423384697429943984536915016112085e-7;

	nodes[21] 	= -4.1555872811264790487740152451321451257517558725276892813183737398619390713524281155754253322130780773063310383428151705619512686;
	weights[21] 	= 1.3079698821802248037275899050005831664538254922469130477191450526857031182889492781393851360694137433328381835900715551e-8;

	nodes[22] 	= 4.1555872811264790487740152451321451257517558725276892813183737398619390713524281155754253322130780773063310383428151705619512686;
	weights[22] 	= 1.3079698821802248037275899050005831664538254922469130477191450526857031182889492781393851360694137433328381835900715551e-8;

	nodes[23] 	= -4.5756317486673585275903536464404466961366968354447239194307666271805518669121992333057658851748996704983853449429349912661251579;
	weights[23] 	= 3.451906227212121382501146567490007839659393811702571832913444285977820382378935281848473281525828829938436726056652421e-10;

	nodes[24] 	= 4.5756317486673585275903536464404466961366968354447239194307666271805518669121992333057658851748996704983853449429349912661251579;
	weights[24] 	= 3.451906227212121382501146567490007839659393811702571832913444285977820382378935281848473281525828829938436726056652421e-10;

	nodes[25] 	= -5.0112061385730727496645512084838395991155662942481135839323996452726806259900137819224465279812804914906447522907038956498468702;
	weights[25] 	= 5.520397264637476656246198142792630057017255892409609675905473848547697258911700418477521693157762855613402979590795963e-12;

	nodes[26] 	= 5.0112061385730727496645512084838395991155662942481135839323996452726806259900137819224465279812804914906447522907038956498468702;
	weights[26] 	= 5.520397264637476656246198142792630057017255892409609675905473848547697258911700418477521693157762855613402979590795963e-12;

	nodes[27] 	= -5.4667903359685603924025712506362920811825793406969973792750075647813932720851896295883498592950692363002962087640475728100181259;
	weights[27] 	= 4.904739364185215440744682213010572539373187080495275880653626439446462544659303773789492946166597672381752719300697909e-14;

	nodes[28] 	= 5.4667903359685603924025712506362920811825793406969973792750075647813932720851896295883498592950692363002962087640475728100181259;
	weights[28] 	= 4.904739364185215440744682213010572539373187080495275880653626439446462544659303773789492946166597672381752719300697909e-14;

	nodes[29] 	= -5.9491472174619712655048370422798769164256923951304080045029797472362506161866938061385527574613853302441712265196866782661808466;
	weights[29] 	= 2.124885194131481193348954228248617112527189075497052250854984449562988713180399145396002960081677807864516364395759432e-16;

	nodes[30] 	= 5.9491472174619712655048370422798769164256923951304080045029797472362506161866938061385527574613853302441712265196866782661808466;
	weights[30] 	= 2.124885194131481193348954228248617112527189075497052250854984449562988713180399145396002960081677807864516364395759432e-16;

	nodes[31] 	= -6.469520036524031135886687479245299688347272261611981331687116051706720413043845699029780201271460632166784187014387178783904711;
	weights[31] 	= 3.6247269512444094871734144159162061335943537647319691724182535375698523403013479420492577539081605971482123926334447115e-19;

	nodes[32] 	= 6.469520036524031135886687479245299688347272261611981331687116051706720413043845699029780201271460632166784187014387178783904711;
	weights[32] 	= 3.6247269512444094871734144159162061335943537647319691724182535375698523403013479420492577539081605971482123926334447115e-19;

	nodes[33] 	= -7.0497138557782294173278508188395497603985254653972260205728265695953666241494762446280541750002842970059501432973659316701251243;
	weights[33] 	= 1.6249853271916728864367058319574727489097411602289157816801849549875407568210220732134132873826479528077624541157253076e-22;

	nodes[34] 	= 7.0497138557782294173278508188395497603985254653972260205728265695953666241494762446280541750002842970059501432973659316701251243;
	weights[34] 	= 1.6249853271916728864367058319574727489097411602289157816801849549875407568210220732134132873826479528077624541157253076e-22;

	nodes[35] 	= -7.7468822496494560165963643397137178419200835797182741169594318090957119064550948095931889126561883952443550028628952051005183419;
	weights[35] 	= 6.93508355058380664729213906115189206615377369122718752421291435162618694297131240754365708443436969426166654244502266061e-27;

	nodes[36] 	= 7.7468822496494560165963643397137178419200835797182741169594318090957119064550948095931889126561883952443550028628952051005183419;
	weights[36] 	= 6.93508355058380664729213906115189206615377369122718752421291435162618694297131240754365708443436969426166654244502266061e-27;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_37_hpp__)*/