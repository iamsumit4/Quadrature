//
//        Gauss_Hermite_Nodes_and_Weights_18.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 18.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_18_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_18_hpp__

void Gauss_Hermite_Nodes_and_Weights_18(long double*& nodes, long double*& weights) {
	nodes	= new long double[18];
	weights	= new long double[18];

	nodes[0] 	= -0.25826775051909675925811609871057963300171513532774343241308610431680571649799548327714976816780556426162570746740356611209190387;
	weights[0] 	= 0.4834956947254555528764105221409973850125369095926593287268213602741901879675927748373444028347211229806418158240930499768987581;

	nodes[1] 	= 0.25826775051909675925811609871057963300171513532774343241308610431680571649799548327714976816780556426162570746740356611209190387;
	weights[1] 	= 0.4834956947254555528764105221409973850125369095926593287268213602741901879675927748373444028347211229806418158240930499768987581;

	nodes[2] 	= -0.77668291926741166131665946228385229472871321449050226206031011050222076498982324807758001882190804069924112847251752271282393579;
	weights[2] 	= 0.284807285669979578595606820712670428809022684447110775107982481211349934388427287527563449666500149988934111724182814707504613;

	nodes[3] 	= 0.77668291926741166131665946228385229472871321449050226206031011050222076498982324807758001882190804069924112847251752271282393579;
	weights[3] 	= 0.284807285669979578595606820712670428809022684447110775107982481211349934388427287527563449666500149988934111724182814707504613;

	nodes[4] 	= -1.3009208583896173656662655543926105802181346396612265227723097758827826300841411945396236316525445143489716365650425086574690859;
	weights[4] 	= 0.09730174764131542933085372341554007549247739677697774951826749430437693729326736208690119224933753942666207374967494084682172;

	nodes[5] 	= 1.3009208583896173656662655543926105802181346396612265227723097758827826300841411945396236316525445143489716365650425086574690859;
	weights[5] 	= 0.09730174764131542933085372341554007549247739677697774951826749430437693729326736208690119224933753942666207374967494084682172;

	nodes[6] 	= -1.8355316042616288922538394440906011492669936367257391043281831396085379064370516578712828910688457284448227408035558331717641128;
	weights[6] 	= 0.0186400423875446519219315221972995900883243161149744105524968678837215784767039080238338511649790048672982039595828359263864;

	nodes[7] 	= 1.8355316042616288922538394440906011492669936367257391043281831396085379064370516578712828910688457284448227408035558331717641128;
	weights[7] 	= 0.0186400423875446519219315221972995900883243161149744105524968678837215784767039080238338511649790048672982039595828359263864;

	nodes[8] 	= -2.3862990891666860002645930142399451367070333328476813355963864723225164155079863226784215346251280335934421368095987484998446542;
	weights[8] 	= 0.0018885226302684178943817532542565569075515517410231708044212715009417886086832960673286772561242271484523483551101695224876;

	nodes[9] 	= 2.3862990891666860002645930142399451367070333328476813355963864723225164155079863226784215346251280335934421368095987484998446542;
	weights[9] 	= 0.0018885226302684178943817532542565569075515517410231708044212715009417886086832960673286772561242271484523483551101695224876;

	nodes[10] 	= -2.9613775055316068447786325490618382146613988430530888246122736256776372065309052820016670115608854102716243683274062419469037328;
	weights[10] 	= 0.000091811268679294035291467540737130040336069226674711402751075336182821430198397062891268345643903255378180186148519071085751;

	nodes[11] 	= 2.9613775055316068447786325490618382146613988430530888246122736256776372065309052820016670115608854102716243683274062419469037328;
	weights[11] 	= 0.000091811268679294035291467540737130040336069226674711402751075336182821430198397062891268345643903255378180186148519071085751;

	nodes[12] 	= -3.573769068486266079500675993771889457939310976680155072886363189116486209988839048485470234740910875705557952769761904090660025;
	weights[12] 	= 1.81065448109343040959702385910682858599536233968865736943099143485241698651040192090854544491263831392835890794548836489958e-6;

	nodes[13] 	= 3.573769068486266079500675993771889457939310976680155072886363189116486209988839048485470234740910875705557952769761904090660025;
	weights[13] 	= 1.81065448109343040959702385910682858599536233968865736943099143485241698651040192090854544491263831392835890794548836489958e-6;

	nodes[14] 	= -4.2481178735681264630234201609020812454613481259571062556952745147560096496525279500326427084276461445020021710212277815938157195;
	weights[14] 	= 1.04672057957920824443559608435098198207557611562896989310904428554901542935542705372648873187118064433818467915152590212907e-8;

	nodes[15] 	= 4.2481178735681264630234201609020812454613481259571062556952745147560096496525279500326427084276461445020021710212277815938157195;
	weights[15] 	= 1.04672057957920824443559608435098198207557611562896989310904428554901542935542705372648873187118064433818467915152590212907e-8;

	nodes[16] 	= -5.0483640088744667683720375788536521210964511478334836363682077716629912477776898370907308630558979676122563772499831483533724303;
	weights[16] 	= 7.82819977211589102925147471011998404367257304709498233381468622350226112542104104163415369062630627259421827830931264962788e-12;

	nodes[17] 	= 5.0483640088744667683720375788536521210964511478334836363682077716629912477776898370907308630558979676122563772499831483533724303;
	weights[17] 	= 7.82819977211589102925147471011998404367257304709498233381468622350226112542104104163415369062630627259421827830931264962788e-12;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_18_hpp__)*/