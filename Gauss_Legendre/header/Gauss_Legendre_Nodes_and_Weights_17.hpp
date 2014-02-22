//
//        Gauss_Legendre_Nodes_and_Weights_17.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 17.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_17_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_17_hpp__

void Gauss_Legendre_Nodes_and_Weights_17(long double*& nodes, long double*& weights) {
	nodes	= new long double[17];
	weights	= new long double[17];

	nodes[0] 	= 0;
	weights[0] 	= 0.17944647035620652545826564426188562144878031989766852366766869795559675460628025940452844575250427760086498118938573524356829863;

	nodes[1] 	= -0.1784841814958478558506774936540655574754193326915256435629518142706975504793005761702889222096350045795804136658695738694619192;
	weights[1] 	= 0.176562705366992646325270990113197239150924418000748118043144406913209036207282680452334690684086655930100609211163104345627403;

	nodes[2] 	= 0.1784841814958478558506774936540655574754193326915256435629518142706975504793005761702889222096350045795804136658695738694619192;
	weights[2] 	= 0.176562705366992646325270990113197239150924418000748118043144406913209036207282680452334690684086655930100609211163104345627403;

	nodes[3] 	= -0.35123176345387631529718551709534600504053975157567502331916101954779426164674957289758314460350910488103815884773824079122526387;
	weights[3] 	= 0.16800410215645004450997066378832315502119812896507401426995585134032310650002458656120384973891977182362072134869956444444523;

	nodes[4] 	= 0.35123176345387631529718551709534600504053975157567502331916101954779426164674957289758314460350910488103815884773824079122526387;
	weights[4] 	= 0.16800410215645004450997066378832315502119812896507401426995585134032310650002458656120384973891977182362072134869956444444523;

	nodes[5] 	= -0.51269053708647696788624656862955187458292372241117290591273149896428492494278548028198041238051760145843250529251651929663601397;
	weights[5] 	= 0.154045761076810288081431594801958611940483058471017934385264711351446741859676451091617449353450908876424153419065240125716;

	nodes[6] 	= 0.51269053708647696788624656862955187458292372241117290591273149896428492494278548028198041238051760145843250529251651929663601397;
	weights[6] 	= 0.154045761076810288081431594801958611940483058471017934385264711351446741859676451091617449353450908876424153419065240125716;

	nodes[7] 	= -0.65767115921669076585030221664300233514780589147597324380523169550732429757469758175299118730551012978337591983650799883693922509;
	weights[7] 	= 0.135136368468525473286319981702350197372125853234489020377994610688867242989938544097509448313584322928296686702397398062711;

	nodes[8] 	= 0.65767115921669076585030221664300233514780589147597324380523169550732429757469758175299118730551012978337591983650799883693922509;
	weights[8] 	= 0.135136368468525473286319981702350197372125853234489020377994610688867242989938544097509448313584322928296686702397398062711;

	nodes[9] 	= -0.78151400389680140692523005552047605022397247274056851251331453551257761615951307617338050086696161865390935565235997558164055877;
	weights[9] 	= 0.11188384719340397109478838562635592673584342426307705001848648244909567964360983561522170452776630973039338562344850050091;

	nodes[10] 	= 0.78151400389680140692523005552047605022397247274056851251331453551257761615951307617338050086696161865390935565235997558164055877;
	weights[10] 	= 0.11188384719340397109478838562635592673584342426307705001848648244909567964360983561522170452776630973039338562344850050091;

	nodes[11] 	= -0.88023915372698590212295569448815569262341681793442790035191015932402713050441121151830719386855918957106141810215260731441172633;
	weights[11] 	= 0.0850361483171791808835353701910620738504913892185054757664103607387839927874826477469876042935729999564873422413092975801;

	nodes[12] 	= 0.88023915372698590212295569448815569262341681793442790035191015932402713050441121151830719386855918957106141810215260731441172633;
	weights[12] 	= 0.0850361483171791808835353701910620738504913892185054757664103607387839927874826477469876042935729999564873422413092975801;

	nodes[13] 	= -0.95067552176876776122271695789580302144338504655910870766996921241211536627219859475003690275146835773526568311147367353973425585;
	weights[13] 	= 0.05545952937398720112944016535824466051284625195322884699372407871025742600333463837327578874482190110229729948361993682236;

	nodes[14] 	= 0.95067552176876776122271695789580302144338504655910870766996921241211536627219859475003690275146835773526568311147367353973425585;
	weights[14] 	= 0.05545952937398720112944016535824466051284625195322884699372407871025742600333463837327578874482190110229729948361993682236;

	nodes[15] 	= -0.99057547531441733567543401994066527650778985045956430278390878674234385747062203371135844064974197843597799559527571479383358178;
	weights[15] 	= 0.024148302868547931960110026287565324691697315945025278311185148830218396705510486359585241467544990851947311375604090496348;

	nodes[16] 	= 0.99057547531441733567543401994066527650778985045956430278390878674234385747062203371135844064974197843597799559527571479383358178;
	weights[16] 	= 0.024148302868547931960110026287565324691697315945025278311185148830218396705510486359585241467544990851947311375604090496348;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_17_hpp__)*/